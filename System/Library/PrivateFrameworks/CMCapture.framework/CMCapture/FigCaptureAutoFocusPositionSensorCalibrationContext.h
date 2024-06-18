@class NSMutableDictionary, NSMutableArray;

@interface FigCaptureAutoFocusPositionSensorCalibrationContext : FigCaptureCalibrationContext {
    BOOL _shouldDeleteOldVersion;
    NSMutableDictionary *_iStopZEstimateDeltaHistory;
    double _previousAngleDelta;
    double _currentAngleDelta;
    NSMutableArray *_calibrationDataHistoryQueue;
    int _maxHistoryBuffer;
    BOOL _lastSuccessfulCalibrationWasDiscarded;
    int _maxIStopZEstimateDifference;
    int _minCompassHeadingChange;
}

@property (nonatomic) BOOL disableHistoryChecking;

+ (void)initialize;
+ (id)calibrationDataStringForInternalLogging:(id)a0;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)a0;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)a0;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)a0;
+ (void)setStatusForCalibrationData:(id)a0 status:(int)a1;

- (BOOL)_calibrationDataIsWithinIStopZEstimateLimits:(id)a0 basedOnCalibrationHistory:(id)a1;
- (int)currentIStopZEstimateDeltaForPosition:(id)a0;
- (void)_pushToCalibrationHistoryQueue:(id)a0;
- (id)_initForUnitTests;
- (double)previousAngleDelta;
- (void)setLastSuccessfulCalibrationData:(id)a0;
- (void)reportLoggingWithCalibrationData:(id)a0 isValid:(BOOL)a1 magneticFieldMagnitude:(double)a2;
- (BOOL)_calibrationDataCompassHeadingHasMovedPastMinimum:(id)a0 basedOnCalibrationHistory:(id)a1;
- (id)calibrationDataHistory;
- (id)initWithSupportedDeviceNames:(id)a0;
- (void)pushCalibrationDataToHistory:(id)a0 isRejected:(BOOL *)a1;
- (double)currentAngleDelta;
- (int)passingIStopZEstimateDeltaForPosition:(id)a0;
- (BOOL)_shouldRejectCalibrationData:(id)a0;
- (int)previousIStopZEstimateDeltaForPosition:(id)a0;

@end
