#include "opendtp_document.h"

bool OpenDTPDocument::loadFile(const std::string &filename) {

	//check if file exists
	bool ret = false;
	ScribusDoc *doc;
	PrefsManager prefsManager;

	if (!filename.empty())
	{
		FileLoader *fileLoader = new FileLoader(QString::fromUtf8(filename.c_str()));
		int testResult = fileLoader->testFile();
		if (testResult == -1)
		{
			delete fileLoader;
			return false;
		}
		bool is12doc=false;
		if (testResult == 0)
		{
			is12doc=true;
		}

		doc = new ScribusDoc();
		doc->is12doc=is12doc;
		doc->appMode = modeNormal;
		doc->HasCMS = false;
		doc->OpenNodes.clear();
		//doc->setLoading(true); interaction gui ???
		doc->SoftProofing = false;
		doc->Gamut = false;
		bool loadSuccess = fileLoader->loadFile(doc);
		//Do the font replacement check from here, when we have a GUI. TODO do this also somehow without the GUI
		//This also gives the user the opportunity to cancel the load when finding theres a replacement required.
		if (loadSuccess && ScCore->usingGUI())
			loadSuccess = fileLoader->postLoad(doc);
		if(!loadSuccess)
		{
			delete fileLoader;
			delete doc;
			doc=NULL;
			return false;
		}
		this->HaveDoc = true;
		// a voir .......
		if (doc->checkerProfiles.count() == 0)
		{
			prefsManager.initDefaultCheckerPrefs(&doc->checkerProfiles);
			doc->curCheckProfile = CommonStrings::PostScript;
		}
		if (doc->PDF_Options.LPISettings.count() == 0)
		{
			struct LPIData lpo;
			lpo.Frequency = 133;
			lpo.SpotFunc = 3;
			lpo.Angle = 105;
			doc->PDF_Options.LPISettings.insert("Cyan", lpo);
			lpo.Angle = 75;
			doc->PDF_Options.LPISettings.insert("Magenta", lpo);
			lpo.Angle = 90;
			doc->PDF_Options.LPISettings.insert("Yellow", lpo);
			lpo.Angle = 45;
			doc->PDF_Options.LPISettings.insert("Black", lpo);
		}

		if (!doc->CMSSettings.CMSinUse)
			doc->HasCMS = false;
		if ((ScCore->haveCMS()) && (doc->CMSSettings.CMSinUse))
		{
			bool cmsWarning = false;
			QStringList missing;
			QStringList replacement;
			if (!ScCore->InputProfiles.contains(doc->CMSSettings.DefaultImageRGBProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultImageRGBProfile = prefsManager.appPrefs.DCMSset.DefaultImageRGBProfile;
			}
			if (!ScCore->InputProfilesCMYK.contains(doc->CMSSettings.DefaultImageCMYKProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultImageCMYKProfile = prefsManager.appPrefs.DCMSset.DefaultImageCMYKProfile;
			}
			if (!ScCore->InputProfiles.contains(doc->CMSSettings.DefaultSolidColorRGBProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultSolidColorRGBProfile = prefsManager.appPrefs.DCMSset.DefaultSolidColorRGBProfile;
			}
			if (!ScCore->InputProfilesCMYK.contains(doc->CMSSettings.DefaultSolidColorCMYKProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultSolidColorCMYKProfile = prefsManager.appPrefs.DCMSset.DefaultSolidColorCMYKProfile;
			}
			if (!ScCore->MonitorProfiles.contains(doc->CMSSettings.DefaultMonitorProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultMonitorProfile = prefsManager.appPrefs.DCMSset.DefaultMonitorProfile;
			}
			if (!ScCore->PrinterProfiles.contains(doc->CMSSettings.DefaultPrinterProfile))
			{
				cmsWarning = true;
				doc->CMSSettings.DefaultPrinterProfile = prefsManager.appPrefs.DCMSset.DefaultPrinterProfile;
			}
			if (!ScCore->PrinterProfiles.contains(doc->PDF_Options.PrintProf))
			{
				cmsWarning = true;
				doc->PDF_Options.PrintProf = doc->CMSSettings.DefaultPrinterProfile;
			}
			if (!ScCore->InputProfiles.contains(doc->PDF_Options.ImageProf))
			{
				cmsWarning = true;
				doc->PDF_Options.ImageProf = doc->CMSSettings.DefaultImageRGBProfile;
			}
			if (!ScCore->InputProfiles.contains(doc->PDF_Options.SolidProf))
			{
				cmsWarning = true;
				doc->PDF_Options.SolidProf = doc->CMSSettings.DefaultSolidColorRGBProfile;
			}
			doc->SoftProofing = doc->CMSSettings.SoftProofOn;
			doc->Gamut        = doc->CMSSettings.GamutCheck;
			doc->IntentColors = doc->CMSSettings.DefaultIntentColors;
			doc->IntentImages = doc->CMSSettings.DefaultIntentImages;
			if (doc->OpenCMSProfiles(ScCore->InputProfiles, ScCore->InputProfilesCMYK, ScCore->MonitorProfiles, ScCore->PrinterProfiles))
			{
				doc->HasCMS = true;
				doc->PDF_Options.SComp = doc->CMSSettings.ComponentsInput2;
			}
			else
			{
				doc->SetDefaultCMSParams();
				doc->HasCMS = false;
			}
			if (doc->HasCMS)
			{
				doc->recalculateColors();
				doc->RecalcPictures(&ScCore->InputProfiles, &ScCore->InputProfilesCMYK);
			}
		}
		else
		{
			doc->CMSSettings.CMSinUse = false;
		}
		if (fileLoader->fileType() > FORMATID_NATIVEIMPORTEND)
		{
			doc->setName(QString::fromUtf8(filename.c_str()));
			QFileInfo fi(doc->DocName);
			doc->setName(fi.fileName());
		}
		else
			doc->setName(QString::fromUtf8(filename.c_str()));
		doc->setMasterPageMode(false);
		doc->hasName = true;
		if (doc->MasterPages.count() == 0)
			doc->addMasterPage(0, CommonStrings::masterPageNormal);
		if (doc->sections.count()==0)
		{
			doc->addSection(-1);
			doc->setFirstSectionFromFirstPageNumber();
		}
		doc->RePos = true;
		doc->setMasterPageMode(true);
		doc->reformPages();
		doc->refreshGuides();
		doc->setLoading(false);
		for (int azz=0; azz<doc->MasterItems.count(); ++azz)
		{
			PageItem *ite = doc->MasterItems.at(azz);
			ite->layout();
		}
		doc->setMasterPageMode(false);
		int docItemsCount=doc->Items->count();
		for (int azz=0; azz<docItemsCount; ++azz)
		{
			PageItem *ite = doc->Items->at(azz);
			if(ite->nextInChain() == NULL)
				ite->layout();
		}
		for (int azz=0; azz<doc->FrameItems.count(); ++azz)
		{
			PageItem *ite = doc->FrameItems.at(azz);
			if(ite->nextInChain() == NULL)
				ite->layout();
		}
		doc->RePos = false;
		doc->setModified(false);
		ret = true;
		doc->setLoading(true);
		delete fileLoader;
		doc->setModified(false);
	}
	return ret;

}