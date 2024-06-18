@class PTCinematographyNetwork, NSString, PTCinematographyTrackAllocator, PTCinematographyStreamOptions, PTCinematographyFrame, PTCinematographyFocusPuller, PTCinematographyUserTap;
@protocol PTCinematographyStreamDelegate;

@interface PTCinematographyStream : NSObject

@property (class, readonly) unsigned long long latestVersion;

@property (retain, nonatomic) PTCinematographyStreamOptions *options;
@property (retain, nonatomic) PTCinematographyTrackAllocator *trackAllocator;
@property (retain, nonatomic) PTCinematographyNetwork *network;
@property (retain, nonatomic) PTCinematographyFocusPuller *previewFocusPuller;
@property (nonatomic) unsigned long long detectionModel;
@property (nonatomic) unsigned long long focusBlurMapMode;
@property (nonatomic) BOOL autoFocusUseBlurMap;
@property (nonatomic) BOOL autoFocusUseMask;
@property (nonatomic) unsigned long long autoFocusInFocusRegionSelect;
@property (nonatomic) unsigned long long frameIndex;
@property (nonatomic) unsigned long long previousRecordingState;
@property (retain, nonatomic) PTCinematographyFrame *previousFrame;
@property (nonatomic) BOOL canCopyISPDetectionsIfMissing;
@property (retain, nonatomic) PTCinematographyUserTap *activeUserTap;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } detectorDidRunNextExpectedTime;
@property BOOL didReadFocusStrategyDefault;
@property unsigned long long internalDefaultFocusStrategy;
@property float internalDefaultFixedFocusDisparity;
@property (retain) NSString *internalDefaultNetworkVersion;
@property (weak, nonatomic) id<PTCinematographyStreamDelegate> delegate;
@property (nonatomic) float userAperture;
@property (readonly) unsigned long long activeVersion;
@property (readonly) NSString *modelVersionString;

+ (BOOL)isSupportedVersion:(unsigned long long)a0;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (BOOL)getGlobalMetadata:(id)a0;
- (id)processColorBuffer:(struct __CVBuffer { } *)a0 disparityBuffer:(struct __CVBuffer { } *)a1 metadataDictionary:(id)a2 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (float)_floatValueForAssignmentString:(id)a0;
- (BOOL)_logUnusualDisparity:(float)a0 kind:(id)a1 info:(id)a2;
- (id)_frameDetectionsFromFusionTrackerMetadata:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 disparityBuffer:(struct __CVBuffer { } *)a2;
- (float)_userDefaultFixedFocusDisparity;
- (id)_ANODPoseFromFTTrackMetadata:(id)a0;
- (id)_autoFocusBlurMapFromMetadata:(id)a0;
- (id)_autoFocusDetectionWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_autoFocusRectFromMetadata:(id)a0;
- (id)_chooseClosestObjectDetection:(id)a0;
- (id)_chooseFocusDetection:(id)a0;
- (id)_chooseLargestAreaDetection:(id)a0;
- (id)_copyInternalState;
- (void)_copyPreviousISPDetections:(id)a0 toDetections:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)_copyUserFocusDetectionFromDetections:(id)a0;
- (float)_defaultAperture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFixedFocusRectForPoint:(struct CGPoint { double x0; double x1; })a0 disparityBuffer:(struct __CVBuffer { } *)a1;
- (id)_detectionForFixedFocusAtNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 disparityBuffer:(struct __CVBuffer { } *)a1;
- (id)_detectionForFixedFocusDistance:(float)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)_detectionTypeForFTObjectKind:(unsigned long long)a0;
- (id)_detectionsFromFTTrackingResult:(id)a0 autoFocusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 focusBlurMap:(id)a2 namedSignalsPerTrack:(id)a3 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 disparityBuffer:(struct __CVBuffer { } *)a5;
- (BOOL)_detectorDidRunFromFTTrackingResult:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_disparityWeightingValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_fixedFocusRectForPoint:(struct CGPoint { double x0; double x1; })a0 disparityBuffer:(struct __CVBuffer { } *)a1;
- (float)_focusDistanceForAutoFocusDetection:(id)a0 lockedDisparityBufferAddress:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 formatType:(unsigned int)a5 focusBlurMap:(id)a6;
- (float)_focusDistanceForDetection:(id)a0 lockedDisparityBufferAddress:(void *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 formatType:(unsigned int)a5;
- (id)_frameDetectionsFromMetadata:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 disparityBuffer:(struct __CVBuffer { } *)a2;
- (id)_frameFromDetections:(id)a0 userAperture:(float)a1 snapshotPolicy:(unsigned long long)a2 disparityPixelBuffer:(struct __CVBuffer { } *)a3;
- (void)_getFocusStrategyIfNeeded;
- (BOOL)_hasFusionTrackerMetadata:(id)a0;
- (id)_inFocusRegionForFocusBlurMap:(id)a0;
- (BOOL)_isFailedTapToTrackFTTapResponse:(id)a0;
- (BOOL)_isFixedFocusFTTapRequest:(id)a0;
- (BOOL)_isFixedFocusFTTapRequestMetadata:(id)a0;
- (BOOL)_isInvalidFTTrack:(id)a0;
- (BOOL)_isSuccessfulTapToTrackFTTapResponse:(id)a0;
- (BOOL)_isTapToTrackFTTapRequest:(id)a0;
- (BOOL)_isUserTap:(id)a0 inFrameDetections:(id)a1;
- (BOOL)_isValidNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_logFocusChangeForFrame:(id)a0;
- (BOOL)_logUnusualDetection:(id)a0 info:(id)a1;
- (void)_logUserTap:(id)a0;
- (float)_minimumUserTapSeconds;
- (id)_mutableDetectionsFromFTTrackingResult:(id)a0 namedSignalsPerTrack:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)_namedSignals:(id)a0 addingANODPoseFromFTTrackMetadata:(id)a1;
- (id)_nextSnapshotForPolicy:(unsigned long long)a0;
- (void)_restoreInternalState:(id)a0;
- (struct CGSize { double x0; double x1; })_sensorSizeFromMetadata:(id)a0;
- (void)_setDisparityOfDetections:(id)a0 disparityBuffer:(struct __CVBuffer { } *)a1 focusBlurMap:(id)a2;
- (id)_stringValueForAssignmentString:(id)a0;
- (id)_trackingResultFromFusionTrackerMetadata:(id)a0;
- (void)_updateDetectionModelFromMetadata:(id)a0;
- (void)_updateDetections:(id)a0 ifMissingISPDetectionsFromTrackingResult:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_updateFocusBlurMapModeFromMetadata:(id)a0;
- (BOOL)_useSyntheticDDR;
- (unsigned long long)_userDefaultFocusStrategy;
- (id)_userDefaultNetworkVersion;
- (BOOL)_userTapEndsForBaseFocusDetection:(id)a0;
- (BOOL)_userTapEndsForChangedFocusWithDisparityBuffer:(struct __CVBuffer { } *)a0;
- (id)_userTapFromFTTapResponse:(id)a0 frameDetections:(id)a1 disparityBuffer:(struct __CVBuffer { } *)a2;
- (id)_userTapFromMetadata:(id)a0 frameDetections:(id)a1 disparityBuffer:(struct __CVBuffer { } *)a2;
- (BOOL)_userTapLockEndsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validSensorRectFromMetadata:(id)a0;
- (void)adviseDidStartRecording;
- (void)adviseDidStopRecording;
- (void)endOfStream;
- (float)smoothFocusDistance:(float)a0 trackIdentifier:(long long)a1 sampleCount:(unsigned long long)a2;

@end