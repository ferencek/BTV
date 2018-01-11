# BTV
BTag validation tool

Instructions:

Follow: https://twiki.cern.ch/twiki/bin/view/CMS/BTagAnalyzer#Recipe_for_9_4_X_releases

cmsrel CMSSW_9_4_1
cd CMSSW_9_4_1/src
cmsenv

setenv CMSSW_GIT_REFERENCE /cvmfs/cms.cern.ch/cmssw.git.daily
git cms-init

git remote add btv-cmssw https://github.com/cms-btv-pog/cmssw.git

#Add DeepFlavour and its dependencies
git cms-addpkg DataFormats/BTauReco
git cms-addpkg PhysicsTools/PatAlgos
git cms-addpkg RecoBTag/Combined
git cms-addpkg RecoBTag/Configuration
git cms-merge-topic pablodecm:DeepFlavour_9_4_1_backport
git cms-merge-topic capalmer85:btagSFupdatesForTTbar

#Add the DeepFlavour model
git clone https://github.com/cms-data/RecoBTag-Combined.git RecoBTag/Combined/data

git clone -b 9_4_X_v1.02 --depth 1 https://github.com/cms-btv-pog/RecoBTag-PerformanceMeasurements.git RecoBTag/PerformanceMeasurements

Then download BTagValidation package:

git clone -b boostedbb_SFComm_9xx_Jan10-2018 git://github.com/cms-btv-pog/RecoBTag-BTagValidation.git RecoBTag/BTagValidation

compile:

scram b -j8  

download this package:

cd RecoBTag/BTagValidation  

git clone https://github.com/rsyarif/BTV.git  
cd BTV  
python main.py  
