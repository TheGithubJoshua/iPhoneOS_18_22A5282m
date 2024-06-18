@class CBDisplayModuleiOS, CBFrameStats, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

@interface CBAurora : NSObject {
    NSObject<OS_os_log> *_log;
    struct __Display { } *_display;
    CBDisplayModuleiOS *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    CBFrameStats *_frameStats;
    NSObject<OS_dispatch_source> *_apceTimer;
    BOOL _isMonitoring;
    float _lastFrameInfoReceivedTimestamp;
    float _lastRampTargetScaler;
    float _minimumReactionNitsDelta;
    float _luxActivationThreshold;
    float _luxExitThreshold;
    float _luxSaturationThreshold;
    float _nitsMinimum;
    float _nitsMaximum;
    float _minimumScaler;
    float _maximumScaler;
    float _apceSamplingRate;
    float _rampTimeSecondsPerStop;
    float _rampUpTapPointAPCEMinimum;
    float _rampUpTapPointAPCEMaximum;
    float _rampDownTapPointAPCEMinimum;
    float _rampDownTapPointAPCEMaximum;
    float _maximumEnergyConsumption;
    float _currentEnergyConsumption;
    BOOL _edrHeadroomRestorePending;
    struct { BOOL active; float start; float length; } _gracePeriod;
    struct { float targetMargin; BOOL rampInProgress; float targetScaler; } _rtplc;
    struct { BOOL firstEvaluation; BOOL auroraStateSatisfied; BOOL displayStateSatisfied; BOOL luxSatisfied; BOOL autoBrightnessSatisfied; BOOL lowPowerModeSatisfied; BOOL gracePeriodSatisfied; BOOL aodStateSatisfied; BOOL cltmSatisfied; BOOL upoSatisfied; } _entryConditions;
    struct { float cltmCap; float upoCap; float activationThreshold; float entryDelta; } _cpms;
}

@property (readonly) BOOL isActive;
@property (readonly) BOOL isBoostingBrightness;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL displayIsOn;
@property (nonatomic, setter=setAODIsOn:) BOOL aodIsOn;
@property (nonatomic) BOOL autoBrightnessIsEnabled;
@property (nonatomic) BOOL lowPowerModeIsEnabled;
@property BOOL rampInProgress;
@property float currentNits;
@property (readonly) float currentPreAuroraNits;
@property (nonatomic) float currentScaler;
@property float currentEDRHeadroom;
@property (nonatomic) float currentEDRHeadroomRequest;
@property (nonatomic, setter=setCLTMCap:) float cltmCap;
@property (nonatomic, setter=setUPOCap:) float upoCap;
@property (nonatomic) float lux;

- (void)enter;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (void)exit;
- (void)rampTo:(float)a0;
- (float)calculateCurrentLuxTargetScaler;
- (float)calculateCurrentRampDownTargetForAPCE:(float)a0;
- (float)calculateCurrentRampUpTargetForAPCE:(float)a0;
- (float)calculateEnergyConsumptionCap;
- (float)calculateLuxTargetScaler:(float)a0;
- (float)calculateNumberOfStopsForCurrentScaler:(float)a0 andRequestedScaler:(float)a1;
- (float)calculateRampDownTargetForNits:(float)a0 andAPCE:(float)a1;
- (float)calculateRampTargetForNits:(float)a0 andAPCE:(float)a1 withTapPointAPCEMinimum:(float)a2 andTapPointAPCEMaximum:(float)a3;
- (float)calculateRampTargetScalerForNits:(float)a0;
- (float)calculateRampTimeForCurrentScaler:(float)a0 andRequestedScaler:(float)a1;
- (float)calculateRampUpTargetForNits:(float)a0 andAPCE:(float)a1;
- (float)clampScaler:(float)a0;
- (float)convertScalerToNits:(float)a0;
- (BOOL)energyConsumptionExceeded;
- (BOOL)entryConditionsSatisfied;
- (void)evaluateEntryConditions;
- (id)initWithQueue:(id)a0 andDisplay:(struct __Display { } *)a1 andDisplayModule:(id)a2;
- (void)initializeMembers;
- (void)processAPCESample;
- (void)restoreEDRHeadroom;
- (void)sendEDRHeadroomRequest:(float)a0;
- (void)setCPMSActivationThreshold:(float)a0;
- (void)setPropertyForKey:(id)a0 withValue:(id)a1;
- (void)setRampTimeSecondsPerStop:(float)a0;

@end