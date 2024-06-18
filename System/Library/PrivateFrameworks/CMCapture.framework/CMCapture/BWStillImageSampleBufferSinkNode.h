@class NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageCaptureAnalyticsPayload;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageCaptureAnalyticsPayload *_cachedAnalyticsPayloadForPortraitFailures;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (void)setAnalyticsConfiguration:(id)a0;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)initWithSinkID:(id)a0;
- (id)analyticsConfiguration;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)propagatedAttachedMediaKeys;
- (BOOL)clientIsCameraOrDerivative;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (BOOL)captureTimePhotosCurationSupported;
- (void)dealloc;

@end
