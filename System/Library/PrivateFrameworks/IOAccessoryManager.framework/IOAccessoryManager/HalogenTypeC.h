@class NSString, HalogenCalcTypeC, NSMutableString, NSCondition, NSMutableData, NSObject, HalogenAudio;
@protocol OS_dispatch_queue;

@interface HalogenTypeC : NSObject <HalogenAudioDelegate>

@property int nInputChannels;
@property int nOutputChannels;
@property int sampleRate;
@property int bitDepth;
@property int inputFrameSizeInBytes;
@property int outputFrameSizeInBytes;
@property struct OpaqueAudioComponentInstance { } *audioComponentInst;
@property HalogenAudio *halogenAudioUnit;
@property int warmupTimeInMs;
@property int AceSettlingTimeInMs;
@property int nMeasurementSamples;
@property int nWarmupSamples;
@property int nAceSettlingSamples;
@property int nTotalSamples;
@property int nPaddingSamples;
@property double signalFreq;
@property int initalPhaseInDegrees;
@property (readonly, nonatomic) unsigned short maxOutputAmplitude;
@property (readonly, nonatomic) unsigned short signalOffset;
@property NSMutableData *pcmInputData;
@property int pcmInputDataMaxSzInBytes;
@property int pcmInputDataIndexInBytes;
@property int pcmInputDataSampleCnt;
@property BOOL isCalibrationDone;
@property BOOL isMeasurementDone;
@property BOOL selfTestCapable;
@property NSMutableData *pcmOutputData;
@property int pcmOutputDataMaxSzInBytes;
@property int pcmOutputDataIndexInBytes;
@property NSMutableData *currentData;
@property NSMutableData *voltageData;
@property int audioTimeoutInSec;
@property NSCondition *audioTimeoutCond;
@property int measurementSampleOffsetInFrames;
@property HalogenCalcTypeC *halogenCalcTypeC;
@property (nonatomic) struct { int type; int pin; int halogenResult; double voltageGainCorrection; double currentGainCorrection; double currentPhaseCompensation; double calVoltageSNR; double calCurrentSNR; double calVoltageAmplitude; double calCurrentAmplitude; double goertzelImpedance; double goertzelPhase; double compensatedImpedance; double compensatedPhase; double resistanceInOhms; double capacitanceInNanoF; double measurementVoltageSNR; double measurementCurrentSNR; double measurementVoltageAmplitude; double measurementCurrentAmplitude; double measurementVoltagePhase; double measurementCurrentPhase; double measurementLoadImpedanceMagnitude; double measurementLoadImpedancePhase; } measurementInfoDefault;
@property unsigned int service;
@property unsigned int connect;
@property BOOL measureSBU;
@property int pinToMeasure;
@property int ldcmState;
@property BOOL isInternalBuild;
@property NSMutableString *measurementInfoOutputString;
@property NSMutableString *measurementInfoAcchalogenOutputString;
@property (nonatomic) NSObject<OS_dispatch_queue> *systemPowerQueue;
@property (nonatomic) unsigned int systemPowerPort;
@property (nonatomic) struct IONotificationPort { } *systemPowerNotifyPortRef;
@property (nonatomic) unsigned int systemPowerIterator;
@property (nonatomic) int powerState;
@property NSCondition *powerStateCond;
@property (readonly) int precalibrationSampleOffsetInFrames;
@property (readonly) double precalVoltageSignalLevel;
@property (readonly) double precalVoltageNoiseLevel;
@property (readonly) double precalVoltageSNR;
@property (readonly) double precalCurrentSignalLevel;
@property (readonly) double precalCurrentNoiseLevel;
@property (readonly) double precalCurrentSNR;
@property (readonly) int calibrationSampleOffsetInFrames;
@property (readonly) double voltageGainCorrection;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property (readonly) double calVoltageSignalLevel;
@property (readonly) double calVoltageNoiseLevel;
@property (readonly) double calVoltageSNR;
@property (readonly) double calCurrentSignalLevel;
@property (readonly) double calCurrentNoiseLevel;
@property (readonly) double calCurrentSNR;
@property (readonly) double calVoltageAmplitude;
@property (readonly) double calCurrentAmplitude;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property (readonly) double resistanceInOhms;
@property (readonly) double capacitanceInNanoF;
@property (readonly) double clippingScore;
@property (readonly) double measurementVoltageSignalLevel;
@property (readonly) double measurementVoltageNoiseLevel;
@property (readonly) double measurementVoltageSNR;
@property (readonly) double measurementCurrentSignalLevel;
@property (readonly) double measurementCurrentNoiseLevel;
@property (readonly) double measurementCurrentSNR;
@property (readonly) double measurementCondetSNR;
@property (readonly) double measurementVoltageAmplitude;
@property (readonly) double measurementCurrentAmplitude;
@property (readonly) double measurementVoltagePhase;
@property (readonly) double measurementCurrentPhase;
@property (readonly) double measurementLoadImpedanceMagnitude;
@property (readonly) double measurementLoadImpedancePhase;
@property (readonly) BOOL wetTooLong;
@property (readonly) int halogenResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_disconnectFromAccessoryManager;
- (BOOL)setMitigations:(BOOL)a0;
- (BOOL)_allocBuffers;
- (id)_buildMeasurementOutputString:(struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a0;
- (id)_buildVerboseMeasurementOutputString:(struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a0;
- (BOOL)_connectToAccessoryManager:(int)a0;
- (BOOL)_createSleepWakeNotifier;
- (void)_destroySleepWakeNotifier;
- (BOOL)_doLDCMCalculation:(BOOL)a0 isReceptacleWet:(BOOL)a1 withWetTransitionThreshold:(double)a2 withDryTransitionThreshold:(double)a3 pinParasitics:(double)a4 measurementType:(int)a5;
- (int)_doLDCMMeasurement:(int)a0 isReceptacleEmpty:(BOOL)a1 isReceptacleWet:(BOOL)a2 withWetTransitionThreshold:(double)a3 withDryTransitionThreshold:(double)a4 measurementType:(int)a5;
- (void)_freeBuffers;
- (void)_generateSineWave;
- (id)_getHalogenMeasurementTypeString:(int)a0;
- (id)_getLDCMPinString:(int)a0;
- (BOOL)_readCalibrationParameters:(id)a0;
- (void)_resetCalcValues;
- (void)_runHPMTool:(BOOL)a0;
- (void)_storeMeasurementData:(int)a0 measurementType:(int)a1 measurementInfo:(struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a2 halogenResult:(int)a3;
- (BOOL)_writeCalResults:(id)a0;
- (int)doLDCMMeasurement:(int)a0 isCalibrationNeeded:(BOOL)a1 isReceptacleEmpty:(BOOL)a2 isReceptacleWet:(BOOL)a3 withWetTransitionThreshold:(double)a4 withDryTransitionThreshold:(double)a5;
- (id)getHalogenResultString:(int)a0;
- (struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; })getMeasurementInfo;
- (id)getMeasurementOutputString;
- (id)getVerboseMeasurementOutputString;
- (id)initWithParams:(int)a0 onPort:(int)a1;
- (BOOL)isHWSelfTestCapable;
- (int)playbackCallBackFunc:(unsigned int *)a0 AudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNum:(unsigned int)a2 numFrames:(unsigned int)a3 AudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (int)recordCallBackFunc:(unsigned int *)a0 AudioTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNum:(unsigned int)a2 numFrames:(unsigned int)a3 AudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (int)saveAsWav:(id)a0;
- (BOOL)setLiquidDetected:(BOOL)a0;
- (void)setWetTooLong:(BOOL)a0;
- (BOOL)supportsSelfTest;

@end
