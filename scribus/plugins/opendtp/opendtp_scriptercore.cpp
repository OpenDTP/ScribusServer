#include "opendtp_scriptercore.h"

// /*static */PyObject *opendtp_retval(PyObject* /*self*/, PyObject* args)
// {
// 	char *Name = NULL;
// 	if (!PyArg_ParseTuple(args, (char*)"s", &Name))
// 		return NULL;
// 	// Because sysdefaultencoding is not utf-8, Python is returning utf-8 encoded
// 	// 8-bit char* strings. Make sure Qt understands that the input is utf-8 not
// 	// the default local encoding (usually latin-1) by using QString::fromUtf8()
// 	/*RetString = QString::fromUtf8(Name);
// 	RetVal = retV;*/
// 	scripterCore->returnString = QString::fromUtf8(Name);
// 	return PyInt_FromLong(0L);
// }

// /*static */PyObject *opendtp_getval(PyObject* /*self*/)
// {
// 	return PyString_FromString(scripterCore->inValue.toUtf8().data());
// }

PyMethodDef scribus_methods[] = {
	{const_cast<char*>("changeColor"), (PyCFunction)scribus_setcolor, METH_VARARGS, NULL},
	{const_cast<char*>("closeDoc"), (PyCFunction)scribus_closedoc, METH_NOARGS, NULL},
	{const_cast<char*>("closeMasterPage"), (PyCFunction)scribus_closemasterpage, METH_NOARGS, NULL},
	{const_cast<char*>("createBezierLine"), (PyCFunction)scribus_bezierline, METH_VARARGS, NULL},
	{const_cast<char*>("createEllipse"), (PyCFunction)scribus_newellipse, METH_VARARGS, NULL},
	{const_cast<char*>("createImage"), (PyCFunction)scribus_newimage, METH_VARARGS, NULL},
	{const_cast<char*>("createLayer"), (PyCFunction)scribus_createlayer, METH_VARARGS, NULL},
	{const_cast<char*>("createLine"), (PyCFunction)scribus_newline, METH_VARARGS, NULL},
	{const_cast<char*>("createMasterPage"), (PyCFunction)scribus_createmasterpage, METH_VARARGS, NULL},
	{const_cast<char*>("createPathText"), (PyCFunction)scribus_pathtext, METH_VARARGS, NULL},
	{const_cast<char*>("createPolygon"), (PyCFunction)scribus_polygon, METH_VARARGS, NULL},
	{const_cast<char*>("createPolyLine"), (PyCFunction)scribus_polyline, METH_VARARGS, NULL},
	{const_cast<char*>("createRect"), (PyCFunction)scribus_newrect, METH_VARARGS, NULL},
	{const_cast<char*>("createText"), (PyCFunction)scribus_newtext, METH_VARARGS, NULL},
	{const_cast<char*>("createParagraphStyle"), (PyCFunction)scribus_createparagraphstyle, METH_KEYWORDS, NULL},
	{const_cast<char*>("createCharStyle"), (PyCFunction)scribus_createcharstyle, METH_KEYWORDS, NULL},
	{const_cast<char*>("currentPage"), (PyCFunction)scribus_actualpage, METH_NOARGS, NULL},
	{const_cast<char*>("defineColor"), (PyCFunction)scribus_newcolor, METH_VARARGS, NULL},
	{const_cast<char*>("deleteColor"), (PyCFunction)scribus_delcolor, METH_VARARGS, NULL},
	{const_cast<char*>("deleteLayer"), (PyCFunction)scribus_removelayer, METH_VARARGS, NULL},
	{const_cast<char*>("deleteMasterPage"), (PyCFunction)scribus_deletemasterpage, METH_VARARGS, NULL},
	{const_cast<char*>("deleteObject"), (PyCFunction)scribus_deleteobj, METH_VARARGS, NULL},
	{const_cast<char*>("deletePage"), (PyCFunction)scribus_deletepage, METH_VARARGS, NULL},
	{const_cast<char*>("deleteText"), (PyCFunction)scribus_deletetext, METH_VARARGS, NULL},
	{const_cast<char*>("deselectAll"), (PyCFunction)scribus_deselect, METH_NOARGS, NULL},
	{const_cast<char*>("docChanged"), (PyCFunction)scribus_docchanged, METH_VARARGS, NULL},
	{const_cast<char*>("editMasterPage"), (PyCFunction)scribus_editmasterpage, METH_VARARGS, NULL},
	{const_cast<char*>("fileDialog"), (PyCFunction)scribus_filedia, METH_VARARGS|METH_KEYWORDS, NULL},
	{const_cast<char*>("fileQuit"), (PyCFunction)scribus_filequit, METH_VARARGS, NULL},
	{const_cast<char*>("getActiveLayer"), (PyCFunction)scribus_getactlayer, METH_NOARGS, NULL},
	{const_cast<char*>("getAllObjects"), (PyCFunction)scribus_getallobj, METH_VARARGS, NULL},
	{const_cast<char*>("getAllStyles"), (PyCFunction)scribus_getstylenames, METH_NOARGS, NULL},
	{const_cast<char*>("getAllText"), (PyCFunction)scribus_gettext, METH_VARARGS, NULL},
	{const_cast<char*>("getColorNames"), (PyCFunction)scribus_colornames, METH_NOARGS, NULL},
	{const_cast<char*>("getColor"), (PyCFunction)scribus_getcolor, METH_VARARGS, NULL},
	{const_cast<char*>("getColorAsRGB"), (PyCFunction)scribus_getcolorasrgb, METH_VARARGS, NULL},
	{const_cast<char*>("isSpotColor"), (PyCFunction)scribus_isspotcolor, METH_VARARGS, NULL},
	{const_cast<char*>("setSpotColor"), (PyCFunction)scribus_setspotcolor, METH_VARARGS, NULL},
	{const_cast<char*>("getTextDistances"), (PyCFunction)scribus_gettextdistances, METH_VARARGS, NULL},
	{const_cast<char*>("getColumnGap"), (PyCFunction)scribus_getcolumngap, METH_VARARGS, NULL},
	{const_cast<char*>("getColumns"), (PyCFunction)scribus_getcolumns, METH_VARARGS, NULL},
	{const_cast<char*>("getCornerRadius"), (PyCFunction)scribus_getcornerrad, METH_VARARGS, NULL},
	{const_cast<char*>("getFillColor"), (PyCFunction)scribus_getfillcolor, METH_VARARGS, NULL},
	{const_cast<char*>("getFillShade"), (PyCFunction)scribus_getfillshade, METH_VARARGS, NULL},
	{const_cast<char*>("getFillBlendmode"), (PyCFunction)scribus_getfillblend, METH_VARARGS, NULL},
	{const_cast<char*>("getFillTransparency"), (PyCFunction)scribus_getfilltrans, METH_VARARGS, NULL},
	{const_cast<char*>("getFontNames"), (PyCFunction)scribus_fontnames, METH_NOARGS, NULL},
	{const_cast<char*>("getFont"), (PyCFunction)scribus_getfont, METH_VARARGS, NULL},
	{const_cast<char*>("getFontSize"), (PyCFunction)scribus_getfontsize, METH_VARARGS, NULL},
	{const_cast<char*>("getGuiLanguage"), (PyCFunction)scribus_getlanguage, METH_NOARGS, NULL},
	{const_cast<char*>("getHGuides"), (PyCFunction)scribus_getHguides, METH_NOARGS, NULL},
	{const_cast<char*>("getImageFile"), (PyCFunction)scribus_getimgname, METH_VARARGS, NULL},
	{const_cast<char*>("getImageScale"), (PyCFunction)scribus_getimgscale, METH_VARARGS, NULL},
	{const_cast<char*>("getLayers"), (PyCFunction)scribus_getlayers, METH_NOARGS, NULL},
	{const_cast<char*>("getLayerBlendmode"), (PyCFunction)scribus_glayerblend, METH_VARARGS, NULL},
	{const_cast<char*>("getLayerTransparency"), (PyCFunction)scribus_glayertrans, METH_VARARGS, NULL},
	{const_cast<char*>("getLineCap"), (PyCFunction)scribus_getlinecap, METH_VARARGS, NULL},
	{const_cast<char*>("getLineColor"), (PyCFunction)scribus_getlinecolor, METH_VARARGS, NULL},
	{const_cast<char*>("getLineShade"), (PyCFunction)scribus_getlineshade, METH_VARARGS, NULL},
	{const_cast<char*>("getLineBlendmode"), (PyCFunction)scribus_getlineblend, METH_VARARGS, NULL},
	{const_cast<char*>("getLineTransparency"), (PyCFunction)scribus_getlinetrans, METH_VARARGS, NULL},
	{const_cast<char*>("getLineJoin"), (PyCFunction)scribus_getlinejoin, METH_VARARGS, NULL},
	{const_cast<char*>("getLineSpacing"), (PyCFunction)scribus_getlinespace, METH_VARARGS, NULL},
	{const_cast<char*>("getLineStyle"), (PyCFunction)scribus_getlinestyle, METH_VARARGS, NULL},
	{const_cast<char*>("getLineWidth"), (PyCFunction)scribus_getlinewidth, METH_VARARGS, NULL},
	{const_cast<char*>("getPageItems"), (PyCFunction)scribus_getpageitems, METH_NOARGS, NULL},
	{const_cast<char*>("getPageMargins"), (PyCFunction)scribus_getpagemargins, METH_NOARGS, NULL},
	{const_cast<char*>("getPageType"), (PyCFunction)scribus_pageposition, METH_VARARGS, NULL},
	{const_cast<char*>("getPageSize"), (PyCFunction)scribus_pagedimension, METH_NOARGS, NULL}, // just an alias to PageDimension()
	{const_cast<char*>("getPageNSize"), (PyCFunction)scribus_pagensize, METH_VARARGS, NULL},
	{const_cast<char*>("getPageNMargins"), (PyCFunction)scribus_pagenmargins, METH_VARARGS, NULL},
	{const_cast<char*>("importPage"), (PyCFunction)scribus_importpage, METH_VARARGS, NULL},
	{const_cast<char*>("getPosition"), (PyCFunction)scribus_getposi, METH_VARARGS, NULL},
	{const_cast<char*>("getRotation"), (PyCFunction)scribus_getrotation, METH_VARARGS, NULL},
	{const_cast<char*>("getObjectType"), (PyCFunction)scribus_getobjecttype, METH_VARARGS, NULL},
	{const_cast<char*>("getSelectedObject"), (PyCFunction)scribus_getselobjnam, METH_VARARGS, NULL},
	{const_cast<char*>("getSize"), (PyCFunction)scribus_getsize, METH_VARARGS, NULL},
	{const_cast<char*>("getTextColor"), (PyCFunction)scribus_getlinecolor, METH_VARARGS, NULL},
	{const_cast<char*>("getTextLength"), (PyCFunction)scribus_gettextsize, METH_VARARGS, NULL},
	{const_cast<char*>("getTextLines"), (PyCFunction)scribus_gettextlines, METH_VARARGS, NULL},
	{const_cast<char*>("getText"), (PyCFunction)scribus_getframetext, METH_VARARGS, NULL},
	{const_cast<char*>("getTextShade"), (PyCFunction)scribus_getlineshade, METH_VARARGS, NULL},
	{const_cast<char*>("getUnit"), (PyCFunction)scribus_getunit, METH_NOARGS, NULL},
	{const_cast<char*>("getVGuides"), (PyCFunction)scribus_getVguides, METH_NOARGS, NULL},
	{const_cast<char*>("getXFontNames"), (PyCFunction)scribus_xfontnames, METH_NOARGS, NULL},
	{const_cast<char*>("gotoPage"), (PyCFunction)scribus_gotopage, METH_VARARGS, NULL},
	{const_cast<char*>("groupObjects"), (PyCFunction)scribus_groupobj, METH_VARARGS, NULL},
	{const_cast<char*>("haveDoc"), (PyCFunction)scribus_havedoc, METH_NOARGS, NULL},
	{const_cast<char*>("placeSVG"), (PyCFunction)scribus_placesvg, METH_VARARGS, NULL},
	{const_cast<char*>("placeEPS"), (PyCFunction)scribus_placeeps, METH_VARARGS, NULL},
	{const_cast<char*>("placeSXD"), (PyCFunction)scribus_placesxd, METH_VARARGS, NULL},
	{const_cast<char*>("placeODG"), (PyCFunction)scribus_placeodg, METH_VARARGS, NULL},
	{const_cast<char*>("insertText"), (PyCFunction)scribus_inserttext, METH_VARARGS, NULL},
	{const_cast<char*>("isLayerPrintable"), (PyCFunction)scribus_glayerprint, METH_VARARGS, NULL},
	{const_cast<char*>("isLayerVisible"), (PyCFunction)scribus_glayervisib, METH_VARARGS, NULL},
	{const_cast<char*>("isLayerLocked"), (PyCFunction)scribus_glayerlock, METH_VARARGS, NULL},
	{const_cast<char*>("isLayerOutlined"), (PyCFunction)scribus_glayeroutline, METH_VARARGS, NULL},
	{const_cast<char*>("isLayerFlow"), (PyCFunction)scribus_glayerflow, METH_VARARGS, NULL},
	{const_cast<char*>("isLocked"), (PyCFunction)scribus_islocked, METH_VARARGS, NULL},
	{const_cast<char*>("linkTextFrames"), (PyCFunction)scribus_linktextframes, METH_VARARGS, NULL},
	{const_cast<char*>("loadImage"), (PyCFunction)scribus_loadimage, METH_VARARGS, NULL},
	{const_cast<char*>("loadStylesFromFile"), (PyCFunction)scribus_loadstylesfromfile, METH_VARARGS, NULL},
	{const_cast<char*>("lockObject"), (PyCFunction)scribus_lockobject, METH_VARARGS, NULL},
	{const_cast<char*>("masterPageNames"), (PyCFunction)scribus_masterpagenames, METH_NOARGS, NULL},
	{const_cast<char*>("messagebarText"), (PyCFunction)scribus_messagebartext, METH_VARARGS, NULL},
	{const_cast<char*>("messageBox"), (PyCFunction)scribus_messdia, METH_VARARGS|METH_KEYWORDS, NULL},
	{const_cast<char*>("moveObjectAbs"), (PyCFunction)scribus_moveobjabs, METH_VARARGS, NULL},
	{const_cast<char*>("moveObject"), (PyCFunction)scribus_moveobjrel, METH_VARARGS, NULL},
	{const_cast<char*>("newDocDialog"), (PyCFunction)scribus_newdocdia, METH_NOARGS, NULL},
	{const_cast<char*>("newDoc"), (PyCFunction)scribus_newdoc, METH_VARARGS, NULL},
	{const_cast<char*>("newDocument"), (PyCFunction)scribus_newdocument, METH_VARARGS, NULL},
	{const_cast<char*>("newPage"), (PyCFunction)scribus_newpage, METH_VARARGS, NULL},
	{const_cast<char*>("newStyleDialog"), (PyCFunction)scribus_newstyledialog, METH_NOARGS, NULL},
	{const_cast<char*>("objectExists"),(PyCFunction)scribus_objectexists, METH_VARARGS, NULL},
	{const_cast<char*>("openDoc"), (PyCFunction)scribus_opendoc, METH_VARARGS, NULL},
	{const_cast<char*>("pageCount"), (PyCFunction)scribus_pagecount, METH_NOARGS, NULL},
	{const_cast<char*>("pageDimension"), (PyCFunction)scribus_pagedimension, METH_NOARGS, NULL},
	{const_cast<char*>("progressReset"), (PyCFunction)scribus_progressreset, METH_NOARGS, NULL},
	{const_cast<char*>("progressSet"), (PyCFunction)scribus_progresssetprogress, METH_VARARGS, NULL},
	{const_cast<char*>("progressTotal"), (PyCFunction)scribus_progresssettotalsteps, METH_VARARGS, NULL},
	{const_cast<char*>("redrawAll"), (PyCFunction)scribus_redraw, METH_NOARGS, NULL},
	{const_cast<char*>("renderFont"), (PyCFunction)scribus_renderfont, METH_KEYWORDS, NULL},
	{const_cast<char*>("replaceColor"), (PyCFunction)scribus_replcolor, METH_VARARGS, NULL},
	{const_cast<char*>("rotateObjectAbs"), (PyCFunction)scribus_rotobjabs, METH_VARARGS, NULL},
	{const_cast<char*>("rotateObject"), (PyCFunction)scribus_rotobjrel, METH_VARARGS, NULL},
	{const_cast<char*>("getDocName"), (PyCFunction)scribus_getdocname, METH_NOARGS, NULL},
	{const_cast<char*>("saveDocAs"), (PyCFunction)scribus_savedocas, METH_VARARGS, NULL},
	{const_cast<char*>("saveDoc"), (PyCFunction)scribus_savedoc, METH_NOARGS, NULL},
	{const_cast<char*>("savePageAsEPS"), (PyCFunction)scribus_savepageeps, METH_VARARGS, NULL},
	{const_cast<char*>("scaleGroup"), (PyCFunction)scribus_scalegroup, METH_VARARGS, NULL},
	{const_cast<char*>("scaleImage"), (PyCFunction)scribus_scaleimage, METH_VARARGS, NULL},
	{const_cast<char*>("setImageScale"), (PyCFunction)scribus_setimagescale, METH_VARARGS, NULL},
	{const_cast<char*>("setImageOffset"), (PyCFunction)scribus_setimageoffset, METH_VARARGS, NULL},
	{const_cast<char*>("selectionCount"), (PyCFunction)scribus_selcount, METH_NOARGS, NULL},
	{const_cast<char*>("selectObject"), (PyCFunction)scribus_selectobj, METH_VARARGS, NULL},
	{const_cast<char*>("selectText"), (PyCFunction)scribus_selecttext, METH_VARARGS, NULL},
	{const_cast<char*>("sentToLayer"), (PyCFunction)scribus_senttolayer, METH_VARARGS, NULL},
	{const_cast<char*>("setActiveLayer"), (PyCFunction)scribus_setactlayer, METH_VARARGS, NULL},
	{const_cast<char*>("setPDFBookmark"), (PyCFunction)scribus_setpdfbookmark, METH_VARARGS, NULL},
	{const_cast<char*>("isPDFBookmark"), (PyCFunction)scribus_ispdfbookmark, METH_VARARGS, NULL},
	{const_cast<char*>("setTextDistances"), (PyCFunction)scribus_settextdistances, METH_VARARGS, NULL},
	{const_cast<char*>("setColumnGap"), (PyCFunction)scribus_setcolumngap, METH_VARARGS, NULL},
	{const_cast<char*>("setColumns"), (PyCFunction)scribus_setcolumns, METH_VARARGS, NULL},
	{const_cast<char*>("setCornerRadius"), (PyCFunction)scribus_setcornerrad, METH_VARARGS, NULL},
	{const_cast<char*>("setCursor"), (PyCFunction)scribus_setcursor, METH_VARARGS, NULL},
	{const_cast<char*>("setDocType"), (PyCFunction)scribus_setdoctype, METH_VARARGS, NULL},
	{const_cast<char*>("setFillColor"), (PyCFunction)scribus_setfillcolor, METH_VARARGS, NULL},
	{const_cast<char*>("setFillTransparency"), (PyCFunction)scribus_setfilltrans, METH_VARARGS, NULL},
	{const_cast<char*>("setFillBlendmode"), (PyCFunction)scribus_setfillblend, METH_VARARGS, NULL},
	{const_cast<char*>("setFillShade"), (PyCFunction)scribus_setfillshade, METH_VARARGS, NULL},
	{const_cast<char*>("setFont"), (PyCFunction)scribus_setfont, METH_VARARGS, NULL},
	{const_cast<char*>("setFontSize"), (PyCFunction)scribus_setfontsize, METH_VARARGS, NULL},
	{const_cast<char*>("setGradientFill"), (PyCFunction)scribus_setgradfill, METH_VARARGS, NULL},
	{const_cast<char*>("setGradientStop"), (PyCFunction)scribus_setgradstop, METH_VARARGS, NULL},
	{const_cast<char*>("setHGuides"), (PyCFunction)scribus_setHguides, METH_VARARGS, NULL},
	{const_cast<char*>("setInfo"), (PyCFunction)scribus_setinfo, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerPrintable"), (PyCFunction)scribus_layerprint, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerVisible"), (PyCFunction)scribus_layervisible, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerLocked"), (PyCFunction)scribus_layerlock, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerOutlined"), (PyCFunction)scribus_layeroutline, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerFlow"), (PyCFunction)scribus_layerflow, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerBlendmode"), (PyCFunction)scribus_layerblend, METH_VARARGS, NULL},
	{const_cast<char*>("setLayerTransparency"), (PyCFunction)scribus_layertrans, METH_VARARGS, NULL},
	{const_cast<char*>("setLineCap"), (PyCFunction)scribus_setlinecap, METH_VARARGS, NULL},
	{const_cast<char*>("setLineColor"), (PyCFunction)scribus_setlinecolor, METH_VARARGS, NULL},
	{const_cast<char*>("setLineTransparency"), (PyCFunction)scribus_setlinetrans, METH_VARARGS, NULL},
	{const_cast<char*>("setLineBlendmode"), (PyCFunction)scribus_setlineblend, METH_VARARGS, NULL},
	{const_cast<char*>("setLineJoin"), (PyCFunction)scribus_setlinejoin, METH_VARARGS, NULL},
	{const_cast<char*>("setLineShade"), (PyCFunction)scribus_setlineshade, METH_VARARGS, NULL},
	{const_cast<char*>("setLineSpacing"), (PyCFunction)scribus_setlinespace, METH_VARARGS, NULL},
	{const_cast<char*>("setLineStyle"), (PyCFunction)scribus_setlinestyle, METH_VARARGS, NULL},
	{const_cast<char*>("setLineWidth"), (PyCFunction)scribus_setlinewidth, METH_VARARGS, NULL},
	{const_cast<char*>("setMargins"), (PyCFunction)scribus_setmargins, METH_VARARGS, NULL},
	{const_cast<char*>("setMultiLine"), (PyCFunction)scribus_setmultiline, METH_VARARGS, NULL},
	{const_cast<char*>("setNewName"), (PyCFunction)scribus_setnewname, METH_VARARGS, NULL},
	{const_cast<char*>("setRedraw"), (PyCFunction)scribus_setredraw, METH_VARARGS, NULL},
	{const_cast<char*>("hyphenateText"), (PyCFunction)scribus_hyphenatetext, METH_VARARGS, NULL},
	{const_cast<char*>("dehyphenateText"), (PyCFunction)scribus_dehyphenatetext, METH_VARARGS, NULL},
	{const_cast<char*>("setScaleImageToFrame"), (PyCFunction)scribus_setscaleimagetoframe, METH_KEYWORDS, NULL},
	{const_cast<char*>("setStyle"), (PyCFunction)scribus_setstyle, METH_VARARGS, NULL},
	{const_cast<char*>("setTextAlignment"), (PyCFunction)scribus_setalign, METH_VARARGS, NULL},
	{const_cast<char*>("setTextColor"), (PyCFunction)scribus_settextfill, METH_VARARGS, NULL},
	{const_cast<char*>("setText"), (PyCFunction)scribus_setboxtext, METH_VARARGS, NULL},
	{const_cast<char*>("setTextScalingH"), (PyCFunction)scribus_settextscalingh, METH_VARARGS, NULL},
	{const_cast<char*>("setTextScalingV"), (PyCFunction)scribus_settextscalingv, METH_VARARGS, NULL},
	{const_cast<char*>("setTextShade"), (PyCFunction)scribus_settextshade, METH_VARARGS, NULL},
	{const_cast<char*>("setTextStroke"), (PyCFunction)scribus_settextstroke, METH_VARARGS, NULL},
	{const_cast<char*>("setUnit"), (PyCFunction)scribus_setunit, METH_VARARGS, NULL},
	{const_cast<char*>("setVGuides"), (PyCFunction)scribus_setVguides, METH_VARARGS, NULL},
	{const_cast<char*>("sizeObject"), (PyCFunction)scribus_sizeobjabs, METH_VARARGS, NULL},
	{const_cast<char*>("statusMessage"), (PyCFunction)scribus_messagebartext, METH_VARARGS, NULL},
	{const_cast<char*>("textFlowMode"), (PyCFunction)scribus_textflow, METH_VARARGS, NULL},
	{const_cast<char*>("traceText"), (PyCFunction)scribus_tracetext, METH_VARARGS, NULL},
	{const_cast<char*>("unGroupObject"), (PyCFunction)scribus_ungroupobj, METH_VARARGS, NULL},
	{const_cast<char*>("unlinkTextFrames"), (PyCFunction)scribus_unlinktextframes, METH_VARARGS, NULL},
	{const_cast<char*>("valueDialog"), (PyCFunction)scribus_valdialog, METH_VARARGS, NULL},
	{const_cast<char*>("textOverflows"), (PyCFunction)scribus_istextoverflowing, METH_KEYWORDS, NULL},
	{const_cast<char*>("zoomDocument"), (PyCFunction)scribus_zoomdocument, METH_VARARGS, NULL},
	{const_cast<char*>("scrollDocument"), (PyCFunction)scribus_scrolldocument, METH_VARARGS, NULL},
	{const_cast<char*>("moveSelectionToBack"), (PyCFunction)scribus_moveselectiontoback, METH_NOARGS, NULL},
	{const_cast<char*>("moveSelectionToFront"), (PyCFunction)scribus_moveselectiontofront, METH_NOARGS, NULL},
	{const_cast<char*>("getPropertyCType"), (PyCFunction)scribus_propertyctype, METH_KEYWORDS, NULL},
	{const_cast<char*>("getPropertyNames"), (PyCFunction)scribus_getpropertynames, METH_KEYWORDS, NULL},
	{const_cast<char*>("getProperty"), (PyCFunction)scribus_getproperty, METH_KEYWORDS, NULL},
	{const_cast<char*>("setProperty"), (PyCFunction)scribus_setproperty, METH_KEYWORDS, NULL},
	{const_cast<char*>("duplicateObject"), (PyCFunction)scribus_duplicateobject, METH_VARARGS, NULL},
	// {const_cast<char*>("retval"), (PyCFunction)opendtp_retval, METH_VARARGS, const_cast<char*>("Scribus internal.")},
	// {const_cast<char*>("getval"), (PyCFunction)opendtp_getval, METH_NOARGS, const_cast<char*>("Scribus internal.")},
	{NULL, (PyCFunction)(0), 0, NULL}
};

std::string OpenDTPScripterCore::getHeader(const std::string &scriptPath, const std::string &scriptName) {
	std::string header;
	OpenDTPLogging &logger = OpenDTPLogging::getInstance();

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
	PyObject *m, *s;
	OpenDTPLogging &logger = OpenDTPLogging::getInstance();

	logger.info("Starting scripter initialisation");

	global_state = PyThreadState_Get();
	state = Py_NewInterpreter();
	this->setParams(params);

	// Adding modules
	m = PyImport_AddModule((char*)"__main__");
	s = PyImport_AddModule((char*)"scribus");

	// Custom objects initialisation
	PyType_Ready(&Printer_Type);
	PyType_Ready(&PDFfile_Type);
	PyType_Ready(&ImageExport_Type);

	// Initialise scribus module
	Py_InitModule((char*)"scribus", scribus_methods);
	Py_INCREF(&Printer_Type);
	PyModule_AddObject(m, (char*)"Printer", (PyObject *) &Printer_Type);
	Py_INCREF(&PDFfile_Type);
	PyModule_AddObject(m, (char*)"PDFfile", (PyObject *) &PDFfile_Type);
	Py_INCREF(&ImageExport_Type);
	PyModule_AddObject(m, (char*)"ImageExport", (PyObject *) &ImageExport_Type);

	if (m == NULL) {
		logger.error("Failed to get __main__ - aborting script");
		return;
	}
	PyObject* globals = PyModule_GetDict(m);
	PyObject* scribus_globals = PyModule_GetDict(s);
	PyDict_SetItemString(scribus_globals, const_cast<char*>("scribus_version"), PyString_FromString(const_cast<char*>("1.4.3")));

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
	Py_XDECREF(result);
	Py_EndInterpreter(state);
	PyThreadState_Swap(global_state);
}