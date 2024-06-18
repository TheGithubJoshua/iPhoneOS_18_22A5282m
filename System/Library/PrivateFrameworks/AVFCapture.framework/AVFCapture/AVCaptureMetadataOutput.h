@class NSArray, NSString, AVCaptureMetadataOutputInternal, NSObject;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface AVCaptureMetadataOutput : AVCaptureOutput <AVCaptureDataOutputDelegateOverride> {
    AVCaptureMetadataOutputInternal *_internal;
}

@property (readonly, nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> metadataObjectsDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (readonly, nonatomic) NSArray *availableMetadataObjectTypes;
@property (copy, nonatomic) NSArray *metadataObjectTypes;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfInterest;
@property (readonly, nonatomic) id delegateOverride;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;
+ (id)_metadataConstantValueToName:(id)a0;

- (id)_offlineVISMotionCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (BOOL)isAppClipCodeMetadataObjectTypeAvailable;
- (void)setTextRegionMetadataObjectTypeAvailable:(BOOL)a0;
- (id)init;
- (BOOL)isFaceTrackingPlusEnabled;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:(float)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (BOOL)isHeadMetadataObjectTypesAvailable;
- (void)setHeadMetadataObjectTypesAvailable:(BOOL)a0;
- (void)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1;
- (void)setOfflineVideoStabilizationMotionMetadataObjectTypesAvailable:(BOOL)a0;
- (id)_barcodeCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (BOOL)isHeadMetadataSupported;
- (id)_lumaHistogramDataCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (void)setMetadataObjectsDelegate:(id)a0 queue:(id)a1;
- (id)_detectedObjectsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1 facesArrayOut:(id *)a2;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)setFaceTrackingMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isVideoPreviewHistogramMetadataObjectTypesAvailable;
- (BOOL)isVideoPreviewHistogramMetadataSupported;
- (BOOL)isTextRegionMetadataSupported;
- (BOOL)isFaceTrackingSupported;
- (id)_textRegionsCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (void)setFaceTrackingMaxFaces:(long long)a0;
- (BOOL)isOfflineVideoStabilizationMotionMetadataSupported;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)_legacyFaceCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (id)_appClipCodesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (BOOL)isFaceTrackingUsingFaceRecognition;
- (id)connectionMediaTypes;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (long long)faceTrackingMaxFaces;
- (void)setVideoPreviewHistogramMetadataObjectTypesAvailable:(BOOL)a0;
- (BOOL)isFaceTrackingMetadataObjectTypesAvailable;
- (void)setAppClipCodeMetadataObjectTypeAvailable:(BOOL)a0;
- (BOOL)isOfflineVideoStabilizationMotionMetadataObjectTypesAvailable;
- (id)_trackedFacesCollectionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 input:(id)a1;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x0; int x1; unsigned long long x2; struct __CFString *x3; union { struct { struct __CFDictionary *x0; struct __CFDictionary *x1; } x0; struct { void *x0; struct __IOSurface *x1; struct __IOSurface *x2; } x1; struct { struct opaqueCMSampleBuffer *x0; unsigned long long x1; } x2; struct { struct opaqueCMFormatDescription *x0; } x3; struct { long long x0; struct opaqueCMFormatDescription *x1; } x4; } x4; } *)a0;
- (void)dealloc;
- (void)_updateLocalQueue:(struct localQueueOpaque { } *)a0;
- (BOOL)isAppClipCodeMetadataSupported;
- (void)setFaceTrackingUsesFaceRecognition:(BOOL)a0;
- (id)_metadataIdentifiers;
- (BOOL)isTextRegionMetadataObjectTypeAvailable;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { } *)a0;
- (void)setFaceTrackingPlusEnabled:(BOOL)a0;
- (float)faceTrackingNetworkFailureThresholdMultiplier;

@end
