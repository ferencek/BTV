# BTV
BTag validation tool

Instructions:

cmsrel CMSSW_8_0_23
cd CMSSW_8_0_23/src
cmsenv

setenv CMSSW_GIT_REFERENCE /cvmfs/cms.cern.ch/cmssw.git.daily
git cms-init

git remote add btv-cmssw https://github.com/cms-btv-pog/cmssw.git
git fetch --tags btv-cmssw

git cms-merge-topic 16377
git cms-merge-topic -u mverzett:DeepFlavour-from-CMSSW_8_0_21
mkdir RecoBTag/DeepFlavour/data/
cd RecoBTag/DeepFlavour/data/
wget http://home.fnal.gov/~verzetti//DeepFlavour/training/DeepFlavourNoSL.json
cd -

git cms-merge-topic -u cms-btv-pog:BoostedDoubleSVTaggerV4-WithWeightFiles-v1_from-CMSSW_8_0_21

git clone -b 8_0_X --depth 1 https://github.com/cms-btv-pog/RecoBTag-PerformanceMeasurements.git RecoBTag/PerformanceMeasurements

git clone -b boostedbb_SFComm_80x_cleanUp_04112017 git://github.com/cms-btv-pog/RecoBTag-BTagValidation.git RecoBTag/BTagValidation

scram b -j8 (-j6 instead)

git clone https://github.com/BenjaminMesic/BTV.git

To be done: Details
