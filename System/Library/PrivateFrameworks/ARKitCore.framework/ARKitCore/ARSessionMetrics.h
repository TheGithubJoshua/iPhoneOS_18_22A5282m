@class NSArray, ARConfiguration, NSDate, CLLocation;
@protocol ARSessionMetricsReporting;

@interface ARSessionMetrics : NSObject {
    id<ARSessionMetricsReporting> _reporter;
    BOOL _isAutoFocusEnabled;
    BOOL _sessionWasThrottled;
    float _timeUntilThrottling;
    float _badFramePercentage10;
    float _badFramePercentage60;
    float _badFramePercentageMoreThan60;
    Class _configClass;
    ARConfiguration *_currentConfiguration;
    NSDate *_startDate;
    NSDate *_frameStartDate;
    double _sessionTimeForLastBadFrameRecording;
    BOOL _initializingVIO;
    unsigned long long _frameCount;
    unsigned long long _badFrameCount;
    double _vioInitializationTime;
    BOOL _positionInitialized;
    void /* unknown type, empty encoding */ _minPos;
    void /* unknown type, empty encoding */ _maxPos;
    NSArray *_lastUpdatedFrameAnchors;
    CLLocation *_lastUpdatedFrameLocation;
    unsigned long long _currentVIOMapSize;
    unsigned long long _numberOfCameraSwitches;
    unsigned long long _numberOfReinitializationAttempts;
    BOOL _hasInitialWorldMap;
    BOOL _relocalizingToInitialWorldMap;
    BOOL _sessionDidFailWithError;
    unsigned long long _raycastCount;
    unsigned long long _hiResFrameCaptureCount;
    long long _coachingOverlayGoal;
    unsigned long long _coachingOverlayActivationCount;
    BOOL _geoTrackingLocalized;
    BOOL _geoTrackingTrueNorthUnavailable;
    double _geoTrackingInitializationTime;
    double _geoTrackingLocalizationTime;
    unsigned long long _geoTrackingLowAccuracyFrameCount;
    unsigned long long _geoTrackingMediumAccuracyFrameCount;
    unsigned long long _geoTrackingHighAccuracyFrameCount;
    unsigned long long _geoTrackingLocalizationCount;
    long long _geoTrackingFailureReason;
    double _geoTrackingClFirstGps;
    double _geoTrackingClFirstNonGps;
    double _geoTrackingClFirstDem;
    double _geoTrackingAngleFirstUp;
    double _geoTrackingAngleBackToDown;
    double _geoTrackingVlBeforeAvailabilityCall;
    double _geoTrackingVlAfterAvailabilityCall;
    double _geoTrackingVlBeforeLocalizationCall;
    double _geoTrackingVlAfterLocalizationCall;
    double _geoTrackingVlFirstNonLocalized;
    double _geoTrackingVioFirstPose;
    double _geoTrackingVioFirstNormalPose;
    double _geoTrackingVioBackToLimited;
    double _geoTrackingFirstImage;
}

+ (void)setRenderType:(unsigned long long)a0;
+ (id)getRenderEngineString:(id)a0;
+ (void)recordAltitudeLookupAttemptWithDuration:(double)a0 andResult:(id)a1;
+ (void)recordHitTest:(unsigned long long)a0;
+ (void)recordReplayMetrics:(id)a0;

- (id)init;
- (void)sessionStarted:(id)a0 withConfiguration:(id)a1;
- (void)_processFrameProperties:(id)a0;
- (void)recordRaycast:(id)a0 tracked:(BOOL)a1;
- (void)_recordBadFramePercentageFinal:(BOOL)a0;
- (void).cxx_destruct;
- (void)_recordSessionEnd;
- (void)sessionStopped;
- (void)recordSaveMap:(long long)a0 numberOfFeaturePoints:(unsigned long long)a1;
- (id)initWithReporter:(id)a0;
- (void)recordCoachingOverlayUsage:(int)a0;
- (void)sessionDidUpdateFrame:(id)a0;
- (void)recordHiResFrameCapture;
- (void)sessionUpdateThermalState:(long long)a0;
- (void)recordTrueNorthUnavailable;
- (void)reportSessionFailure:(id)a0;
- (id)queue;

@end