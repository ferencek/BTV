# BTV
BTag validation tool

Instructions:

cmsrel CMSSW_9_2_7_patch1  
cd CMSSW_9_2_7_patch1/src  
cmsenv  

setenv CMSSW_GIT_REFERENCE /cvmfs/cms.cern.ch/cmssw.git.daily  

git cms-init  
git remote add btv-cmssw https://github.com/cms-btv-pog/cmssw.git  
git clone -b 9_2_X --depth 1 https://github.com/cms-btv-pog/RecoBTag-PerformanceMeasurements.git RecoBTag/PerformanceMeasurements  
git clone git://github.com/cms-btv-pog/RecoBTag-BTagValidation.git RecoBTag/BTagValidation  

scram b -j8  

cd RecoBTag/BTagValidation  

git clone https://github.com/rsyarif/BTV.git  
cd BTV  
python main.py  
