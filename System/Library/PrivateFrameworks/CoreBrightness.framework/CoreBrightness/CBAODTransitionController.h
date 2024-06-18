@class CBAODFlipBookWrapper, CBAPEndpoint, CBAODThresholdModule, NSObject, CBRampManager;
@protocol OS_dispatch_source, CBBrightnessProxy;

@interface CBAODTransitionController : CBModule {
    id<CBBrightnessProxy> _brtCtl;
    CBAPEndpoint *_endpoint;
    id _currentState;
    id _currentTarget;
    id _pendingState;
    unsigned long long _displayID;
    CBRampManager *_rampManager;
    float _edrRampDurationPerStop;
    float _currentSDRBrightness;
    float _targetSDRBrightness;
    float _minNits;
    float _maxNits;
    float _currentEDRHeadroom;
    float _targetEDRHeadroom;
    float _currentAAPFactor;
    float _targetAAPFactor;
    float _currentBrightnessLimit;
    float _targetBrightnessLimit;
    int _currentFrequency;
    float _currentTrustedLux;
    float _currentLowAmbientAdaptationScaler;
    float _targetLowAmbientAdaptationScaler;
    id /* block */ _rampDoneCallback;
    id /* block */ _rampCanceledCallback;
    struct { unsigned int ID; BOOL brightness_set; float brightness; BOOL whitepoint_set; float whitepoint[3][3]; BOOL pccfactor_set; float pccfactor; BOOL brightnessLimit_set; float brightnessLimit; unsigned char reserved[5]; } _currentFlipBookEntry;
    CBAODFlipBookWrapper *_flipbookCache;
    CBAODThresholdModule *_thresholdModule;
    NSObject<OS_dispatch_source> *_lastUpdateSwappedTimer;
    struct ColorEffects { } *cfx;
    struct { float matrix[3][3]; struct { float x; float y; } xy; float Y; } _currentWhitepoint;
    struct { float matrix[3][3]; struct { float x; float y; } xy; float Y; } _targetWhitepoint;
}

@property BOOL liveUpdatesOverride;
@property float nitsOverride;
@property (nonatomic) float currentDisplayNits;
@property (nonatomic) float brightnessFactor;
@property (nonatomic) BOOL displayON;
@property float remainingTransitionLength;
@property BOOL liveUpdates;

- (void)checkBootArgsConfiguration;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)cancelTransition;
- (void)dealloc;
- (void)setInitialState:(id)a0;
- (void)colorRampRoutine:(const struct { float x0; float x1[9]; unsigned int x2; float x3; struct { float x0; float x1; } x4; int x5; double x6; } *)a0;
- (void)setCurrentWhitepointFromMatrix:(float[3][3])a0;
- (void)activateLastUpdateSwappedTimerWithTimeout:(float)a0;
- (void)addFlipBookEntry:(struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; unsigned char x9[5]; })a0;
- (BOOL)applyPendingUpdates;
- (float)brightnessLimitProgressCallback:(float)a0 rampContext:(id)a1;
- (float)calculateSigmoidProgressForLinearProgress:(float)a0;
- (float)calculateSpringProgressForLinearProgress:(float)a0;
- (BOOL)cancelDCPTransition;
- (void)chromaticity:(struct { float x0; float x1; } *)a0 andIlluminance:(float *)a1 fromMatrix:(float[3][3])a2;
- (void)clockUpdateHandler:(id)a0;
- (void)colorMatrix:(float[3][3])a0 fromState:(id)a1;
- (BOOL)commitBrightness:(float)a0 force:(BOOL)a1;
- (id)copyColourRampStatsWithLength:(float)a0 frequency:(float)a1 origin:(struct { float x0; float x1; })a2 target:(struct { float x0; float x1; })a3;
- (id)copyContext;
- (id)copyRampStatsWithLength:(float)a0 frequency:(float)a1 origin:(float)a2 target:(float)a3;
- (int)currentTransitionUpdateID;
- (void)enableDCPFlipBookUpdates:(BOOL)a0;
- (BOOL)flipBookEntryForID:(int)a0 entry:(struct { unsigned int x0; BOOL x1; float x2; BOOL x3; float x4[3][3]; BOOL x5; float x6; BOOL x7; float x8; unsigned char x9[5]; } *)a1;
- (float)getFloatValueFrom:(id)a0 key:(id)a1;
- (float)getFloatValueFrom:(id)a0 key:(id)a1 subkey:(id)a2;
- (BOOL)initAPEndpoint;
- (void)initColorEffects;
- (id)initWithCBBrtControl:(id)a0 andQueue:(id)a1;
- (id)initWithCBBrtControl:(id)a0 andThresholdModule:(id)a1 andQueue:(id)a2;
- (void)initialiseFlipBookWithLength:(float)a0 frequency:(int)a1 lux:(float)a2;
- (void)logTransitionParameters:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; float x4; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; BOOL x11; float x12; BOOL x13; float x14; BOOL x15; float x16; })a0;
- (void)processInitialColorMatrixFromState:(id)a0;
- (void)rampsDoneCallback:(id)a0;
- (void)releaseCallbacks;
- (void)releaseLastUpdateSwappedTimer;
- (BOOL)requestColorRampTransitionStop;
- (BOOL)requestTransitionStopForIdentifier:(id)a0;
- (float)sdrBrightnessProgressCallback:(float)a0 rampContext:(id)a1;
- (float)sdrBrightnessProgressCallback:(float)a0 rampContext:(id)a1 profile:(unsigned long long)a2;
- (BOOL)sendCurrentFlipBook;
- (void)setDurationOfEDRRamp:(float)a0;
- (void)setTargetWhitepointFromMatrix:(float[3][3])a0;
- (void)setWhitepoint:(struct { float x0[3][3]; struct { float x0; float x1; } x1; float x2; } *)a0 fromMatrix:(float[3][3])a1;
- (BOOL)shallUpdateWhitepointFrom:(float[3][3])a0 target:(float[3][3])a1;
- (float)sigmoidFunction:(float)a0;
- (BOOL)startTransition:(id)a0 length:(float)a1 forceUpdate:(BOOL)a2 rampDoneCallback:(id /* block */)a3 rampCanceledCallback:(id /* block */)a4;
- (BOOL)startTransition:(id)a0 transitionParameters:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; float x4; BOOL x5; float x6; BOOL x7; float x8; BOOL x9; float x10; BOOL x11; float x12; BOOL x13; float x14; BOOL x15; float x16; })a1 rampDoneCallback:(id /* block */)a2 rampCanceledCallback:(id /* block */)a3;
- (float)transitionDurationFromCurrent:(float)a0 toTarget:(float)a1;
- (void)updateAAPFactor:(float)a0 rampDuration:(double)a1;
- (void)updateAmbient:(float)a0;
- (void)updateBrightnessLimit:(float)a0;
- (void)updateColorRamp:(id)a0;
- (void)updateEDRHeadroom:(float)a0;
- (void)updateFlipBookEntryWithAAPFactor:(float)a0;
- (void)updateFlipBookEntryWithBrightness:(float)a0;
- (void)updateFlipBookEntryWithBrightnessLimit:(float)a0;
- (void)updateLowAmbientAdaptationScaler:(float)a0;
- (void)updateSDRBrightness:(float)a0;

@end