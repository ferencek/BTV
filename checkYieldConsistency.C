#include "TString.h"
#include "TFile.h"
#include "TH1D.h"

bool print_FULL = false;

void checkYieldConsistency(){

// 	TString commonDir = "/afs/cern.ch/user/r/rsyarif/workHere/HbbTagVal/Jan10-2018_CommSF_v1/CMSSW_9_4_1/src/RecoBTag/BTagValidation/BTV/results/histograms/backup_preScalingFix_May2-2018/";
	TString commonDir = "/afs/cern.ch/user/r/rsyarif/workHere/HbbTagVal/Jan10-2018_CommSF_v1/CMSSW_9_4_1/src/RecoBTag/BTagValidation/BTV/results/histograms/";
	
	std::cout << "" << std::endl;
	std::cout << "FOLDER: " << commonDir << std::endl;

	std::vector<TString> sys;
	sys.push_back("");
	sys.push_back("_bfragup");
	sys.push_back("_bfragdown");
	sys.push_back("_cfrag");
	sys.push_back("_CD");
	sys.push_back("_K0L");
	sys.push_back("_nTrackReweight");
	sys.push_back("_puUp");
	sys.push_back("_puDown");

   const int npt = 2;
   std::string ptt[npt] = {
							"pt250to350",
							"pt430to2000",
							};

	
	TString batch_JP;
	TString batch_JPhasSV;
	TString batch_JPnoSV;
	TString batch_SVmass;

	for(int ipt=0;ipt< npt;ipt++){

		std::cout << "" << std::endl;
		std::cout << "===== ======= ====== " << std::endl;
		std::cout << "===== "<< ptt[ipt] << " ====== " << std::endl;
		std::cout << "===== ======= ====== " << std::endl;

		for(int isys=0;isys< sys.size();isys++){

			if(ptt[ipt]=="pt250to350"){
				batch_JP = "Run2017BCDEF_QCDMuonEnriched_Pt250_v1_v3_ptReweighted"+sys.at(isys)+"/";
				batch_JPhasSV = "Run2017BCDEF_QCDMuonEnriched_Pt250_v1_v4_JPhasSV_ptReweighted"+sys.at(isys)+"/";
				batch_JPnoSV = "Run2017BCDEF_QCDMuonEnriched_Pt250_v1_v4_JPnoSV_ptReweighted"+sys.at(isys)+"/";
				batch_SVmass = "Run2017BCDEF_QCDMuonEnriched_Pt250_v1_v4_SVmass_ptReweighted"+sys.at(isys)+"/";
			}
			if(ptt[ipt]=="pt430to2000"){
				batch_JP = "Run2017BCDEF_QCDMuonEnriched_Pt350_v3_ptReweighted"+sys.at(isys)+"/";
				batch_JPhasSV = "Run2017BCDEF_QCDMuonEnriched_Pt350_v4_JPhasSV_ptReweighted"+sys.at(isys)+"/";
				batch_JPnoSV = "Run2017BCDEF_QCDMuonEnriched_Pt350_v4_JPnoSV_ptReweighted"+sys.at(isys)+"/";
				batch_SVmass = "Run2017BCDEF_QCDMuonEnriched_Pt350_v4_SVmass_ptReweighted"+sys.at(isys)+"/";
			}

			TString fname1 = "QCD_Pt_170to300_MuEnriched_v1_Jan3-2018.root";
			TString fname2 = "QCD_Pt_300to470_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Feb14-18.root";
			TString fname3 = "QCD_Pt_470to600_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Feb17-18.root";
			TString fname4 = "QCD_Pt_600to800_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Feb14-18.root";
			TString fname5 = "QCD_Pt_800to1000_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Feb14-18.root";
			TString fname6 = "QCD_Pt_1000toInf_MuEnrichedPt5_TuneCP5_13TeV_pythia8_Feb14-18.root";

	
			TString hName_JP = "FatJet_JP_all_"+ptt[ipt]+"_";
			TString hName_JPhasSV = "FatJet_JPhasSV_all_"+ptt[ipt]+"_";
			TString hName_JPnoSV = "FatJet_JPnoSV_all_"+ptt[ipt]+"_";
			TString hName_SVmass = "FatJet_tau1VertexMassCorr_all_"+ptt[ipt]+"_";
	
			TFile *f1_JP,*f1_JPhasSV,*f1_JPnoSV,*f1_SVmass;
			TFile *f2_JP,*f2_JPhasSV,*f2_JPnoSV,*f2_SVmass;
			TFile *f3_JP,*f3_JPhasSV,*f3_JPnoSV,*f3_SVmass;
			TFile *f4_JP,*f4_JPhasSV,*f4_JPnoSV,*f4_SVmass;
			TFile *f5_JP,*f5_JPhasSV,*f5_JPnoSV,*f5_SVmass;
			TFile *f6_JP,*f6_JPhasSV,*f6_JPnoSV,*f6_SVmass;
	
			f1_JP = TFile::Open(commonDir+batch_JP+fname1);
			f1_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname1);
			f1_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname1);
			f1_SVmass = TFile::Open(commonDir+batch_SVmass+fname1);

			f2_JP = TFile::Open(commonDir+batch_JP+fname2);
			f2_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname2);
			f2_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname2);
			f2_SVmass = TFile::Open(commonDir+batch_SVmass+fname2);

			f3_JP = TFile::Open(commonDir+batch_JP+fname3);
			f3_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname3);
			f3_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname3);
			f3_SVmass = TFile::Open(commonDir+batch_SVmass+fname3);

			f4_JP = TFile::Open(commonDir+batch_JP+fname4);
			f4_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname4);
			f4_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname4);
			f4_SVmass = TFile::Open(commonDir+batch_SVmass+fname4);

			f5_JP = TFile::Open(commonDir+batch_JP+fname5);
			f5_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname5);
			f5_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname5);
			f5_SVmass = TFile::Open(commonDir+batch_SVmass+fname5);

			f6_JP = TFile::Open(commonDir+batch_JP+fname6);
			f6_JPhasSV = TFile::Open(commonDir+batch_JPhasSV+fname6);
			f6_JPnoSV = TFile::Open(commonDir+batch_JPnoSV+fname6);
			f6_SVmass = TFile::Open(commonDir+batch_SVmass+fname6);
	
			TString fdir = "btagval/";

			TH1D *h1_nEventsAll;
			TH1D *h1_bfromg_JP,*h1_bfromg_JPhasSV,*h1_bfromg_JPnoSV,*h1_bfromg_SVmass;
			TH1D *h1_b_JP,*h1_b_JPhasSV,*h1_b_JPnoSV,*h1_b_SVmass;
			TH1D *h1_cfromg_JP,*h1_cfromg_JPhasSV,*h1_cfromg_JPnoSV,*h1_cfromg_SVmass;
			TH1D *h1_c_JP,*h1_c_JPhasSV,*h1_c_JPnoSV,*h1_c_SVmass;
			TH1D *h1_l_JP,*h1_l_JPhasSV,*h1_l_JPnoSV,*h1_l_SVmass;
	
			h1_nEventsAll = (TH1D*) f1_JP->Get(fdir+"h1_CutFlow_unw");

			h1_bfromg_JP = (TH1D*) f1_JP->Get(fdir+hName_JP+"bfromg");
			h1_bfromg_JPhasSV = (TH1D*) f1_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h1_bfromg_JPnoSV = (TH1D*) f1_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h1_bfromg_SVmass = (TH1D*) f1_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h1_b_JP = (TH1D*) f1_JP->Get(fdir+hName_JP+"b");
			h1_b_JPhasSV = (TH1D*) f1_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h1_b_JPnoSV = (TH1D*) f1_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h1_b_SVmass = (TH1D*) f1_SVmass->Get(fdir+hName_SVmass+"b");

			h1_cfromg_JP = (TH1D*) f1_JP->Get(fdir+hName_JP+"cfromg");
			h1_cfromg_JPhasSV = (TH1D*) f1_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h1_cfromg_JPnoSV = (TH1D*) f1_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h1_cfromg_SVmass = (TH1D*) f1_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h1_c_JP = (TH1D*) f1_JP->Get(fdir+hName_JP+"c");
			h1_c_JPhasSV = (TH1D*) f1_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h1_c_JPnoSV = (TH1D*) f1_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h1_c_SVmass = (TH1D*) f1_SVmass->Get(fdir+hName_SVmass+"c");

			h1_l_JP = (TH1D*) f1_JP->Get(fdir+hName_JP+"l");
			h1_l_JPhasSV = (TH1D*) f1_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h1_l_JPnoSV = (TH1D*) f1_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h1_l_SVmass = (TH1D*) f1_SVmass->Get(fdir+hName_SVmass+"l");


			TH1D *h2_nEventsAll;
			TH1D *h2_bfromg_JP,*h2_bfromg_JPhasSV,*h2_bfromg_JPnoSV,*h2_bfromg_SVmass;
			TH1D *h2_b_JP,*h2_b_JPhasSV,*h2_b_JPnoSV,*h2_b_SVmass;
			TH1D *h2_cfromg_JP,*h2_cfromg_JPhasSV,*h2_cfromg_JPnoSV,*h2_cfromg_SVmass;
			TH1D *h2_c_JP,*h2_c_JPhasSV,*h2_c_JPnoSV,*h2_c_SVmass;
			TH1D *h2_l_JP,*h2_l_JPhasSV,*h2_l_JPnoSV,*h2_l_SVmass;
	
			h2_nEventsAll = (TH1D*) f2_JP->Get(fdir+"h1_CutFlow_unw");

			h2_bfromg_JP = (TH1D*) f2_JP->Get(fdir+hName_JP+"bfromg");
			h2_bfromg_JPhasSV = (TH1D*) f2_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h2_bfromg_JPnoSV = (TH1D*) f2_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h2_bfromg_SVmass = (TH1D*) f2_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h2_b_JP = (TH1D*) f2_JP->Get(fdir+hName_JP+"b");
			h2_b_JPhasSV = (TH1D*) f2_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h2_b_JPnoSV = (TH1D*) f2_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h2_b_SVmass = (TH1D*) f2_SVmass->Get(fdir+hName_SVmass+"b");

			h2_cfromg_JP = (TH1D*) f2_JP->Get(fdir+hName_JP+"cfromg");
			h2_cfromg_JPhasSV = (TH1D*) f2_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h2_cfromg_JPnoSV = (TH1D*) f2_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h2_cfromg_SVmass = (TH1D*) f2_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h2_c_JP = (TH1D*) f2_JP->Get(fdir+hName_JP+"c");
			h2_c_JPhasSV = (TH1D*) f2_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h2_c_JPnoSV = (TH1D*) f2_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h2_c_SVmass = (TH1D*) f2_SVmass->Get(fdir+hName_SVmass+"c");

			h2_l_JP = (TH1D*) f2_JP->Get(fdir+hName_JP+"l");
			h2_l_JPhasSV = (TH1D*) f2_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h2_l_JPnoSV = (TH1D*) f2_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h2_l_SVmass = (TH1D*) f2_SVmass->Get(fdir+hName_SVmass+"l");


			TH1D *h3_nEventsAll;
			TH1D *h3_bfromg_JP,*h3_bfromg_JPhasSV,*h3_bfromg_JPnoSV,*h3_bfromg_SVmass;
			TH1D *h3_b_JP,*h3_b_JPhasSV,*h3_b_JPnoSV,*h3_b_SVmass;
			TH1D *h3_cfromg_JP,*h3_cfromg_JPhasSV,*h3_cfromg_JPnoSV,*h3_cfromg_SVmass;
			TH1D *h3_c_JP,*h3_c_JPhasSV,*h3_c_JPnoSV,*h3_c_SVmass;
			TH1D *h3_l_JP,*h3_l_JPhasSV,*h3_l_JPnoSV,*h3_l_SVmass;
	
			h3_nEventsAll = (TH1D*) f3_JP->Get(fdir+"h1_CutFlow_unw");

			h3_bfromg_JP = (TH1D*) f3_JP->Get(fdir+hName_JP+"bfromg");
			h3_bfromg_JPhasSV = (TH1D*) f3_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h3_bfromg_JPnoSV = (TH1D*) f3_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h3_bfromg_SVmass = (TH1D*) f3_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h3_b_JP = (TH1D*) f3_JP->Get(fdir+hName_JP+"b");
			h3_b_JPhasSV = (TH1D*) f3_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h3_b_JPnoSV = (TH1D*) f3_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h3_b_SVmass = (TH1D*) f3_SVmass->Get(fdir+hName_SVmass+"b");

			h3_cfromg_JP = (TH1D*) f3_JP->Get(fdir+hName_JP+"cfromg");
			h3_cfromg_JPhasSV = (TH1D*) f3_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h3_cfromg_JPnoSV = (TH1D*) f3_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h3_cfromg_SVmass = (TH1D*) f3_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h3_c_JP = (TH1D*) f3_JP->Get(fdir+hName_JP+"c");
			h3_c_JPhasSV = (TH1D*) f3_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h3_c_JPnoSV = (TH1D*) f3_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h3_c_SVmass = (TH1D*) f3_SVmass->Get(fdir+hName_SVmass+"c");

			h3_l_JP = (TH1D*) f3_JP->Get(fdir+hName_JP+"l");
			h3_l_JPhasSV = (TH1D*) f3_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h3_l_JPnoSV = (TH1D*) f3_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h3_l_SVmass = (TH1D*) f3_SVmass->Get(fdir+hName_SVmass+"l");


			TH1D *h4_nEventsAll;
			TH1D *h4_bfromg_JP,*h4_bfromg_JPhasSV,*h4_bfromg_JPnoSV,*h4_bfromg_SVmass;
			TH1D *h4_b_JP,*h4_b_JPhasSV,*h4_b_JPnoSV,*h4_b_SVmass;
			TH1D *h4_cfromg_JP,*h4_cfromg_JPhasSV,*h4_cfromg_JPnoSV,*h4_cfromg_SVmass;
			TH1D *h4_c_JP,*h4_c_JPhasSV,*h4_c_JPnoSV,*h4_c_SVmass;
			TH1D *h4_l_JP,*h4_l_JPhasSV,*h4_l_JPnoSV,*h4_l_SVmass;
	
			h4_nEventsAll = (TH1D*) f4_JP->Get(fdir+"h1_CutFlow_unw");

			h4_bfromg_JP = (TH1D*) f4_JP->Get(fdir+hName_JP+"bfromg");
			h4_bfromg_JPhasSV = (TH1D*) f4_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h4_bfromg_JPnoSV = (TH1D*) f4_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h4_bfromg_SVmass = (TH1D*) f4_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h4_b_JP = (TH1D*) f4_JP->Get(fdir+hName_JP+"b");
			h4_b_JPhasSV = (TH1D*) f4_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h4_b_JPnoSV = (TH1D*) f4_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h4_b_SVmass = (TH1D*) f4_SVmass->Get(fdir+hName_SVmass+"b");

			h4_cfromg_JP = (TH1D*) f4_JP->Get(fdir+hName_JP+"cfromg");
			h4_cfromg_JPhasSV = (TH1D*) f4_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h4_cfromg_JPnoSV = (TH1D*) f4_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h4_cfromg_SVmass = (TH1D*) f4_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h4_c_JP = (TH1D*) f4_JP->Get(fdir+hName_JP+"c");
			h4_c_JPhasSV = (TH1D*) f4_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h4_c_JPnoSV = (TH1D*) f4_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h4_c_SVmass = (TH1D*) f4_SVmass->Get(fdir+hName_SVmass+"c");

			h4_l_JP = (TH1D*) f4_JP->Get(fdir+hName_JP+"l");
			h4_l_JPhasSV = (TH1D*) f4_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h4_l_JPnoSV = (TH1D*) f4_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h4_l_SVmass = (TH1D*) f4_SVmass->Get(fdir+hName_SVmass+"l");


			TH1D *h5_nEventsAll;
			TH1D *h5_bfromg_JP,*h5_bfromg_JPhasSV,*h5_bfromg_JPnoSV,*h5_bfromg_SVmass;
			TH1D *h5_b_JP,*h5_b_JPhasSV,*h5_b_JPnoSV,*h5_b_SVmass;
			TH1D *h5_cfromg_JP,*h5_cfromg_JPhasSV,*h5_cfromg_JPnoSV,*h5_cfromg_SVmass;
			TH1D *h5_c_JP,*h5_c_JPhasSV,*h5_c_JPnoSV,*h5_c_SVmass;
			TH1D *h5_l_JP,*h5_l_JPhasSV,*h5_l_JPnoSV,*h5_l_SVmass;
	
			h5_nEventsAll = (TH1D*) f5_JP->Get(fdir+"h1_CutFlow_unw");

			h5_bfromg_JP = (TH1D*) f5_JP->Get(fdir+hName_JP+"bfromg");
			h5_bfromg_JPhasSV = (TH1D*) f5_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h5_bfromg_JPnoSV = (TH1D*) f5_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h5_bfromg_SVmass = (TH1D*) f5_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h5_b_JP = (TH1D*) f5_JP->Get(fdir+hName_JP+"b");
			h5_b_JPhasSV = (TH1D*) f5_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h5_b_JPnoSV = (TH1D*) f5_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h5_b_SVmass = (TH1D*) f5_SVmass->Get(fdir+hName_SVmass+"b");

			h5_cfromg_JP = (TH1D*) f5_JP->Get(fdir+hName_JP+"cfromg");
			h5_cfromg_JPhasSV = (TH1D*) f5_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h5_cfromg_JPnoSV = (TH1D*) f5_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h5_cfromg_SVmass = (TH1D*) f5_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h5_c_JP = (TH1D*) f5_JP->Get(fdir+hName_JP+"c");
			h5_c_JPhasSV = (TH1D*) f5_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h5_c_JPnoSV = (TH1D*) f5_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h5_c_SVmass = (TH1D*) f5_SVmass->Get(fdir+hName_SVmass+"c");

			h5_l_JP = (TH1D*) f5_JP->Get(fdir+hName_JP+"l");
			h5_l_JPhasSV = (TH1D*) f5_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h5_l_JPnoSV = (TH1D*) f5_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h5_l_SVmass = (TH1D*) f5_SVmass->Get(fdir+hName_SVmass+"l");

	
			TH1D *h6_nEventsAll;
			TH1D *h6_bfromg_JP,*h6_bfromg_JPhasSV,*h6_bfromg_JPnoSV,*h6_bfromg_SVmass;
			TH1D *h6_b_JP,*h6_b_JPhasSV,*h6_b_JPnoSV,*h6_b_SVmass;
			TH1D *h6_cfromg_JP,*h6_cfromg_JPhasSV,*h6_cfromg_JPnoSV,*h6_cfromg_SVmass;
			TH1D *h6_c_JP,*h6_c_JPhasSV,*h6_c_JPnoSV,*h6_c_SVmass;
			TH1D *h6_l_JP,*h6_l_JPhasSV,*h6_l_JPnoSV,*h6_l_SVmass;
	
			h6_nEventsAll = (TH1D*) f6_JP->Get(fdir+"h1_CutFlow_unw");

			h6_bfromg_JP = (TH1D*) f6_JP->Get(fdir+hName_JP+"bfromg");
			h6_bfromg_JPhasSV = (TH1D*) f6_JPhasSV->Get(fdir+hName_JPhasSV+"bfromg");
			h6_bfromg_JPnoSV = (TH1D*) f6_JPnoSV->Get(fdir+hName_JPnoSV+"bfromg");
			h6_bfromg_SVmass = (TH1D*) f6_SVmass->Get(fdir+hName_SVmass+"bfromg");

			h6_b_JP = (TH1D*) f6_JP->Get(fdir+hName_JP+"b");
			h6_b_JPhasSV = (TH1D*) f6_JPhasSV->Get(fdir+hName_JPhasSV+"b");
			h6_b_JPnoSV = (TH1D*) f6_JPnoSV->Get(fdir+hName_JPnoSV+"b");
			h6_b_SVmass = (TH1D*) f6_SVmass->Get(fdir+hName_SVmass+"b");

			h6_cfromg_JP = (TH1D*) f6_JP->Get(fdir+hName_JP+"cfromg");
			h6_cfromg_JPhasSV = (TH1D*) f6_JPhasSV->Get(fdir+hName_JPhasSV+"cfromg");
			h6_cfromg_JPnoSV = (TH1D*) f6_JPnoSV->Get(fdir+hName_JPnoSV+"cfromg");
			h6_cfromg_SVmass = (TH1D*) f6_SVmass->Get(fdir+hName_SVmass+"cfromg");

			h6_c_JP = (TH1D*) f6_JP->Get(fdir+hName_JP+"c");
			h6_c_JPhasSV = (TH1D*) f6_JPhasSV->Get(fdir+hName_JPhasSV+"c");
			h6_c_JPnoSV = (TH1D*) f6_JPnoSV->Get(fdir+hName_JPnoSV+"c");
			h6_c_SVmass = (TH1D*) f6_SVmass->Get(fdir+hName_SVmass+"c");

			h6_l_JP = (TH1D*) f6_JP->Get(fdir+hName_JP+"l");
			h6_l_JPhasSV = (TH1D*) f6_JPhasSV->Get(fdir+hName_JPhasSV+"l");
			h6_l_JPnoSV = (TH1D*) f6_JPnoSV->Get(fdir+hName_JPnoSV+"l");
			h6_l_SVmass = (TH1D*) f6_SVmass->Get(fdir+hName_SVmass+"l");
		
			float f1_xsec = 8292.98;
			float f2_xsec = 797.35269;
			float f3_xsec = 56.588336;
			float f4_xsec = 25.0950590;
			float f5_xsec = 4.707368272;
			float f6_xsec = 1.62131692;
	
			float lumi = 1.0;
	// 		float lumi = 35900.0;
	
			float scale1 = lumi * f1_xsec / h1_nEventsAll->GetBinContent(1);
			float scale2 = lumi * f2_xsec / h2_nEventsAll->GetBinContent(1);
			float scale3 = lumi * f3_xsec / h3_nEventsAll->GetBinContent(1);
			float scale4 = lumi * f4_xsec / h4_nEventsAll->GetBinContent(1);
			float scale5 = lumi * f5_xsec / h5_nEventsAll->GetBinContent(1);
			float scale6 = lumi * f6_xsec / h6_nEventsAll->GetBinContent(1);

		// 	float scale1 = 1;
		// 	float scale2 = 1;
		// 	float scale3 = 1;
		// 	float scale4 = 1;
		// 	float scale5 = 1;
		// 	float scale6 = 1;

			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << "===== Scale and total events. Lumi = "<< lumi << std::endl;
	
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname1 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale1 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " <<h1_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname2 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale2 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " << h2_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname3 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale3 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " << h3_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname4 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale4 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " << h4_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname5 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale5 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " << h5_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
			if(sys.at(isys)=="")std::cout << fname6 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "scale = " <<scale6 << std::endl;
			if(sys.at(isys)=="")std::cout <<  "nEvents_all = " << h6_nEventsAll->GetBinContent(1) << std::endl;
			if(sys.at(isys)=="")std::cout << "" << std::endl;
	
			float yield1_JP_bfromg = h1_bfromg_JP->Integral(0,h1_bfromg_JP->GetSize()-1) * scale1;
			float yield2_JP_bfromg = h2_bfromg_JP->Integral(0,h2_bfromg_JP->GetSize()-1) * scale2;
			float yield3_JP_bfromg = h3_bfromg_JP->Integral(0,h3_bfromg_JP->GetSize()-1) * scale3;
			float yield4_JP_bfromg = h4_bfromg_JP->Integral(0,h4_bfromg_JP->GetSize()-1) * scale4;
			float yield5_JP_bfromg = h5_bfromg_JP->Integral(0,h5_bfromg_JP->GetSize()-1) * scale5;
			float yield6_JP_bfromg = h6_bfromg_JP->Integral(0,h6_bfromg_JP->GetSize()-1) * scale6;

			float yield1_JPhasSV_bfromg = h1_bfromg_JPhasSV->Integral(0,h1_bfromg_JPhasSV->GetSize()-1) * scale1;
			float yield2_JPhasSV_bfromg = h2_bfromg_JPhasSV->Integral(0,h2_bfromg_JPhasSV->GetSize()-1) * scale2;
			float yield3_JPhasSV_bfromg = h3_bfromg_JPhasSV->Integral(0,h3_bfromg_JPhasSV->GetSize()-1) * scale3;
			float yield4_JPhasSV_bfromg = h4_bfromg_JPhasSV->Integral(0,h4_bfromg_JPhasSV->GetSize()-1) * scale4;
			float yield5_JPhasSV_bfromg = h5_bfromg_JPhasSV->Integral(0,h5_bfromg_JPhasSV->GetSize()-1) * scale5;
			float yield6_JPhasSV_bfromg = h6_bfromg_JPhasSV->Integral(0,h6_bfromg_JPhasSV->GetSize()-1) * scale6;

			float yield1_JPnoSV_bfromg = h1_bfromg_JPnoSV->Integral(0,h1_bfromg_JPnoSV->GetSize()-1) * scale1;
			float yield2_JPnoSV_bfromg = h2_bfromg_JPnoSV->Integral(0,h2_bfromg_JPnoSV->GetSize()-1) * scale2;
			float yield3_JPnoSV_bfromg = h3_bfromg_JPnoSV->Integral(0,h3_bfromg_JPnoSV->GetSize()-1) * scale3;
			float yield4_JPnoSV_bfromg = h4_bfromg_JPnoSV->Integral(0,h4_bfromg_JPnoSV->GetSize()-1) * scale4;
			float yield5_JPnoSV_bfromg = h5_bfromg_JPnoSV->Integral(0,h5_bfromg_JPnoSV->GetSize()-1) * scale5;
			float yield6_JPnoSV_bfromg = h6_bfromg_JPnoSV->Integral(0,h6_bfromg_JPnoSV->GetSize()-1) * scale6;

			float yield1_SVmass_bfromg = h1_bfromg_SVmass->Integral(0,h1_bfromg_SVmass->GetSize()-1) * scale1;
			float yield2_SVmass_bfromg = h2_bfromg_SVmass->Integral(0,h2_bfromg_SVmass->GetSize()-1) * scale2;
			float yield3_SVmass_bfromg = h3_bfromg_SVmass->Integral(0,h3_bfromg_SVmass->GetSize()-1) * scale3;
			float yield4_SVmass_bfromg = h4_bfromg_SVmass->Integral(0,h4_bfromg_SVmass->GetSize()-1) * scale4;
			float yield5_SVmass_bfromg = h5_bfromg_SVmass->Integral(0,h5_bfromg_SVmass->GetSize()-1) * scale5;
			float yield6_SVmass_bfromg = h6_bfromg_SVmass->Integral(0,h6_bfromg_SVmass->GetSize()-1) * scale6;
	
			float yield_JP_bfromg = yield1_JP_bfromg+yield2_JP_bfromg+yield3_JP_bfromg+yield4_JP_bfromg+yield5_JP_bfromg+yield6_JP_bfromg;
			float yield_JPhasSV_bfromg = yield1_JPhasSV_bfromg+yield2_JPhasSV_bfromg+yield3_JPhasSV_bfromg+yield4_JPhasSV_bfromg+yield5_JPhasSV_bfromg+yield6_JPhasSV_bfromg;
			float yield_JPnoSV_bfromg = yield1_JPnoSV_bfromg+yield2_JPnoSV_bfromg+yield3_JPnoSV_bfromg+yield4_JPnoSV_bfromg+yield5_JPnoSV_bfromg+yield6_JPnoSV_bfromg;
			float yield_SVmass_bfromg = yield1_SVmass_bfromg+yield2_SVmass_bfromg+yield3_SVmass_bfromg+yield4_SVmass_bfromg+yield5_SVmass_bfromg+yield6_SVmass_bfromg;

			std::cout << "" << std::endl;
			std::cout << "===== Yields (sys=";
			if(sys.at(isys)=="")std::cout<< sys.at(isys) <<"nominal)===="  << std::endl;
			else std::cout<< sys.at(isys) <<")===="  << std::endl;

			if(print_FULL){
				std::cout << "" << std::endl;
				std::cout << "file:" << fname1 << std::endl;
				std::cout << "yield1_JP_bfromg	= " << yield1_JP_bfromg<< std::endl;
				std::cout << "yield1_JPhasSV_bfromg	= " << yield1_JPhasSV_bfromg<< std::endl;
				std::cout << "yield1_JPnoSV_bfromg	= " << yield1_JPnoSV_bfromg<< std::endl;
				std::cout << "	----JPhasSV+JPnoSV----	= " << yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg;
				if(fabs((yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg) << std::endl;
// 				std::cout << "yield1_SVmass_bfromg	= " << yield1_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname1 ; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield1_JP_bfromg/(yield1_JPhasSV_bfromg + yield1_JPnoSV_bfromg) << std::endl;}
			}

			if(print_FULL){
			}
			else{
				if(fabs((yield2_JP_bfromg/(yield2_JPhasSV_bfromg + yield2_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield2_JP_bfromg/(yield2_JPhasSV_bfromg + yield2_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname2; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield2_JP_bfromg/ (yield2_JPhasSV_bfromg + yield2_JPnoSV_bfromg) << std::endl;}
			}

			if(print_FULL){
				std::cout << "" << std::endl;
				std::cout << "file:" << fname3 << std::endl;
				std::cout << "yield3_JP_bfromg	= " << yield3_JP_bfromg<< std::endl;
				std::cout << "yield3_JPhasSV_bfromg	= " << yield3_JPhasSV_bfromg<< std::endl;
				std::cout << "yield3_JPnoSV_bfromg	= " << yield3_JPnoSV_bfromg<< std::endl;
				std::cout << "		----JPhasSV+JPnoSV----	= " << yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg;
				if(fabs((yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg) << std::endl;
// 				std::cout << "yield3_SVmass_bfromg	= " << yield3_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname3; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield3_JP_bfromg/(yield3_JPhasSV_bfromg + yield3_JPnoSV_bfromg) << std::endl;}
			}

			if(print_FULL){
				std::cout << "" << std::endl;
				std::cout << "file:" << fname4 << std::endl;
				std::cout << "yield4_JP_bfromg	= " << yield4_JP_bfromg<< std::endl;
				std::cout << "yield4_JPhasSV_bfromg	= " << yield4_JPhasSV_bfromg<< std::endl;
				std::cout << "yield4_JPnoSV_bfromg	= " << yield4_JPnoSV_bfromg<< std::endl;
				std::cout << "		----JPhasSV+JPnoSV----	= " << yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg;
				if(fabs((yield4_JP_bfromg/(yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield4_JP_bfromg/(yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield4_JP_bfromg/ (yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg) << std::endl;
// 				std::cout << "yield4_SVmass_bfromg	= " << yield4_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield4_JP_bfromg/(yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield4_JP_bfromg/(yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname4; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield4_JP_bfromg/ (yield4_JPhasSV_bfromg + yield4_JPnoSV_bfromg) << std::endl;}
			}

			if(print_FULL){
				std::cout << "" << std::endl;
				std::cout << "file:" << fname5 << std::endl;
				std::cout << "yield5_JP_bfromg	= " << yield5_JP_bfromg<< std::endl;
				std::cout << "yield5_JPhasSV_bfromg	= " << yield5_JPhasSV_bfromg<< std::endl;
				std::cout << "yield5_JPnoSV_bfromg	= " << yield5_JPnoSV_bfromg<< std::endl;
				std::cout << "		----JPhasSV+JPnoSV----	= " << yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg;
				if(fabs((yield5_JP_bfromg/(yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield5_JP_bfromg/(yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield5_JP_bfromg/ (yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg) << std::endl;
// 				std::cout << "yield5_SVmass_bfromg	= " << yield5_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield5_JP_bfromg/(yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield5_JP_bfromg/(yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname5; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield5_JP_bfromg/ (yield5_JPhasSV_bfromg + yield5_JPnoSV_bfromg) << std::endl;}
			}

			if(print_FULL){
				std::cout << "" << std::endl;
				std::cout << "file:" << fname6<<std::endl;
				std::cout << "yield6_JP_bfromg	= " << yield6_JP_bfromg<< std::endl;
				std::cout << "yield6_JPhasSV_bfromg	= " << yield6_JPhasSV_bfromg<< std::endl;
				std::cout << "yield6_JPnoSV_bfromg	= " << yield6_JPnoSV_bfromg<< std::endl;
				std::cout << "		----JPhasSV+JPnoSV----	= " << yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg;
				if(fabs((yield6_JP_bfromg/(yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield6_JP_bfromg/(yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield6_JP_bfromg/ (yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg) <<std::endl;
// 				std::cout << "yield6_SVmass_bfromg	= " << yield6_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield6_JP_bfromg/(yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield6_JP_bfromg/(yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "file:" << fname6; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield6_JP_bfromg/ (yield6_JPhasSV_bfromg + yield6_JPnoSV_bfromg) <<std::endl;}
			}

			if(print_FULL){
				std::cout << "" << std::endl;
				if(scale1==1&&scale2==1&&scale3==1&&scale4==1&&scale5==1&&scale6==1)std::cout << "	ALL QCD ptHat bins added (without scaling)" << std::endl;
				else std::cout << "	ALL QCD ptHat bins added " << std::endl;
				std::cout << "	yield_JP_bfromg		= " << yield_JP_bfromg<< std::endl;
				std::cout << "	yield_JPhasSV_bfromg	= " << yield_JPhasSV_bfromg<< std::endl;
				std::cout << "	yield_JPnoSV_bfromg	= " << yield_JPnoSV_bfromg<< std::endl;
				std::cout << "			----JPhasSV+JPnoSV----	= " << yield_JPhasSV_bfromg + yield_JPnoSV_bfromg;
				if(fabs((yield_JP_bfromg/(yield_JPhasSV_bfromg + yield_JPnoSV_bfromg))-1)<=1e-4)std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield_JP_bfromg/(yield_JPhasSV_bfromg + yield_JPnoSV_bfromg)) <<std::endl;
				else std::cout<< "	--> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield_JP_bfromg/ (yield_JPhasSV_bfromg + yield_JPnoSV_bfromg) << std::endl;
// 				std::cout << "	yield_SVmass_bfromg	= " << yield_SVmass_bfromg<< std::endl;
			}
			else{
				if(fabs((yield_JP_bfromg/(yield_JPhasSV_bfromg + yield_JPnoSV_bfromg))-1)<=1e-4){}//std::cout<< "	--> OK! "<< "JP/(hasSV+noSV) = "<< (yield_JP_bfromg/(yield_JPhasSV_bfromg + yield_JPnoSV_bfromg)) <<std::endl;
				else {std::cout << "" << std::endl;std::cout << "	ALL QCD ptHat bins added "; std::cout<< " --> NOT OK! "<< "JP/(hasSV+noSV) = "<< yield_JP_bfromg/ (yield_JPhasSV_bfromg + yield_JPnoSV_bfromg) << std::endl;}
			}
	
			f1_JP->Close();
			f1_JPhasSV->Close();
			f1_JPnoSV->Close();
			f1_SVmass->Close();

			f2_JP->Close();
			f2_JPhasSV->Close();
			f2_JPnoSV->Close();
			f2_SVmass->Close();

			f3_JP->Close();
			f3_JPhasSV->Close();
			f3_JPnoSV->Close();
			f3_SVmass->Close();

			f4_JP->Close();
			f4_JPhasSV->Close();
			f4_JPnoSV->Close();
			f4_SVmass->Close();

			f5_JP->Close();
			f5_JPhasSV->Close();
			f5_JPnoSV->Close();
			f5_SVmass->Close();

			f6_JP->Close();
			f6_JPhasSV->Close();
			f6_JPnoSV->Close();
			f6_SVmass->Close();
		
		}

	}
	
	gApplication->Terminate();

}

