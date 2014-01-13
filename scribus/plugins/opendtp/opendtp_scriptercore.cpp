#include "opendtp_scriptercore.h"

PageItem* getPageItemByName(QString name)
{
  if (name.length() == 0)
  {
    PyErr_SetString(PyExc_ValueError, QString("Cannot accept empty name for pageitem").toLocal8Bit().constData());
    return NULL;
  }
  for (int j = 0; j<ScCore->primaryMainWindow()->doc->Items->count(); j++)
  {
    if (name==ScCore->primaryMainWindow()->doc->Items->at(j)->itemName())
      return ScCore->primaryMainWindow()->doc->Items->at(j);
  } // for items
  return NULL;
}

PyObject *opendtp_savepageeps(PyObject* /* self */, PyObject* args)
{
	char *Name;
	if (!PyArg_ParseTuple(args, "es", "utf-8", &Name))
		return PyBool_FromLong(static_cast<long>(false));
	QString epsError;

	bool ret = true;
	return PyBool_FromLong(static_cast<long>(ret));
}

PyObject *opendtp_opendoc(PyObject* /* self */, PyObject* args)
{
  char *Name;
  if (!PyArg_ParseTuple(args, "es", "utf-8", &Name))
    return PyBool_FromLong(static_cast<long>(false));
  bool ret = ScCore->primaryMainWindow()->loadDoc(QString::fromUtf8(Name));
  return PyBool_FromLong(static_cast<long>(ret));
}

PyObject *opendtp_closedoc(PyObject* /* self */)
{
  if(!ScCore->primaryMainWindow()->HaveDoc)
    return PyBool_FromLong(static_cast<long>(false));
  ScCore->primaryMainWindow()->doc->setModified(false);
  bool ret = ScCore->primaryMainWindow()->slotFileClose();
  qApp->processEvents();
  return PyInt_FromLong(static_cast<long>(ret));
}

PyObject *opendtp_setboxtext(PyObject* /* self */, PyObject* args)
{
  char *Name = const_cast<char*>("");
  char *Text;
  if (!PyArg_ParseTuple(args, "es|es", "utf-8", &Text, "utf-8", &Name))
    return PyBool_FromLong(static_cast<long>(false));
  if(!ScCore->primaryMainWindow()->HaveDoc)
    return PyBool_FromLong(static_cast<long>(false));
  PageItem *currItem = getPageItemByName(QString::fromUtf8(Name));
  if (currItem == NULL)
    return PyBool_FromLong(static_cast<long>(false));
  if (!(currItem->asTextFrame()) && !(currItem->asPathText()))
  {
    return PyBool_FromLong(static_cast<long>(false));
  }
  QString Daten = QString::fromUtf8(Text);
  Daten.replace("\r\n", SpecialChars::PARSEP);
  Daten.replace(QChar('\n') , SpecialChars::PARSEP);
  PyMem_Free(Text);
  currItem->itemText.clear();
  for (int a = 0; a < ScCore->primaryMainWindow()->doc->FrameItems.count(); ++a)
  {
    ScCore->primaryMainWindow()->doc->FrameItems.at(a)->ItemNr = a;
  }
  currItem->itemText.insertChars(0, Daten);
  currItem->invalidateLayout();
  currItem->Dirty = false;
//  Py_INCREF(Py_None);
//  return Py_None;
  Py_RETURN_NONE;
}

PyObject *opendtp_savedoc(PyObject* /* self */)
{
  if(!ScCore->primaryMainWindow()->HaveDoc)
    return PyBool_FromLong(static_cast<long>(false));
  ScCore->primaryMainWindow()->slotFileSave();
//  Py_INCREF(Py_None);
//  return Py_None;
  Py_RETURN_NONE;
}

PyMethodDef scribus_methods[] = {
  {const_cast<char*>("openDoc"), (PyCFunction)opendtp_opendoc, METH_VARARGS, NULL},
  {const_cast<char*>("closeDoc"), (PyCFunction)opendtp_closedoc, METH_NOARGS, NULL},
  {const_cast<char*>("saveDoc"), (PyCFunction)opendtp_savedoc, METH_NOARGS, NULL},
  {const_cast<char*>("setText"), (PyCFunction)opendtp_setboxtext, METH_VARARGS, NULL},
  {const_cast<char*>("savePageEps"), (PyCFunction)opendtp_savepageeps, METH_VARARGS, NULL},
  { NULL, (PyCFunction)(0), 0, NULL }
};

std::string OpenDTPScripterCore::getHeader(const std::string &scriptPath, const std::string &scriptName) {
	std::string header;

	header = "import sys\n";
	header += "import cStringIO\n";
	header += "import os\nos.environ['PAGER'] = '/bin/false'\n";
	header += "sys.path.insert(0, \"";
	header += scriptPath;
	header += "\")\n";
	header += "sys.stdin = cStringIO.StringIO()\n";
	header += "old_stdout = sys.stdout\n";
	header += "sys.stdout = scribus_std_output = cStringIO.StringIO()\n";
	header += "try:\n";
	header += "    execfile(\"";
	header += scriptPath;
	header += scriptName;
	header += "\")\n";
	header += "except SystemExit:\n";
	header += "    pass\n";
	header += "except:\n";
	header += "    import traceback\n";
	header += "    import scribus\n";
	header += "    scribus._f=cStringIO.StringIO()\n";
	header += "    traceback.print_exc(file=scribus._f)\n";
	header += "    _errorMsg = scribus._f.getvalue()\n";
	header += "    del(scribus._f)\n";
	header += "    raise\n";
	header += "finally:\n";
	header += "    sys.stdout = old_stdout\n";
	header += "    _scribus_string_output = scribus_std_output.getvalue()\n";

	return (header);
}

// memory leak inside, a weak one but still a memory leak
void OpenDTPScripterCore::setParams(const std::vector<std::string> &params) {
	int    i;
	char   **comm;

	comm = (char **)malloc(sizeof(*comm) * (params.size() + 1));
	comm[params.size()] = NULL;
	for (i = 0; i < params.size(); ++i) {
		comm[i] = (char *)malloc(sizeof(**comm) * (params[i].size() + 1));
		comm[i][params[i].size()] = '\0';
		strcpy(comm[i], params[i].c_str());
	}
	PySys_SetArgv(params.size(), comm);
}

void OpenDTPScripterCore::runScriptFile(std::string script, std::vector<std::string> params) {
	PyThreadState* global_state = NULL;
	PyThreadState* state = NULL;
	std::string header;
	OpenDTPLogging &logger = OpenDTPLogging::getInstance();

	logger.info("Starting scripter initialisation");

	global_state = PyThreadState_Get();
	state = Py_NewInterpreter();
	this->setParams(params);

	PyObject* m = PyImport_AddModule((char*)"__main__");
	PyImport_AddModule((char*)"scribus");
	Py_InitModule((char*)"scribus", scribus_methods);

	if (m == NULL) {
		logger.error("Failed to get __main__ - aborting script");
		return;
	}
	PyObject* globals = PyModule_GetDict(m);

	header = this->getHeader(SCRIPTS_PATH, script);
	logger.debug("Header set :");
	logger.debug(header);
	PyObject* result = PyRun_String(header.c_str(), Py_file_input, globals, globals);
	if (result == NULL) {
		PyErr_Clear();
		PyObject* errorMsgPyStr = PyMapping_GetItemString(globals, (char*)"_errorMsg");
		if (errorMsgPyStr == NULL) {
			logger.error("Error retrieving error message content after script exception!\n");
			logger.error("Exception was:");
			PyErr_Print();
		} else {
			logger.error(PyString_AsString(errorMsgPyStr));
		}
	} else {
		PyObject* errorMsgPyStr = PyMapping_GetItemString(globals, (char*)"_scribus_string_output");
		logger.debug("Success !\n");
		if (errorMsgPyStr != NULL) {
			logger.debug(PyString_AsString(errorMsgPyStr));
		} else {
			logger.debug("Nothing to display ...\n");
		}
	}

	// Closing document
	// To force closing without any prompt we set modifications to false
	ScCore->primaryMainWindow()->doc->setModified(false);
	logger.debug("Closing document\n");
	bool ret = ScCore->primaryMainWindow()->slotFileClose();
	
	// We couldn't close the document ? We must log it (should never happen ...).
	if (!ret) {
		logger.error("Couldn't close document !\n");
	} else {
		logger.debug("Document closed\n");
	}

	qApp->processEvents();

	Py_XDECREF(result);
	Py_EndInterpreter(state);
	PyThreadState_Swap(global_state);
}