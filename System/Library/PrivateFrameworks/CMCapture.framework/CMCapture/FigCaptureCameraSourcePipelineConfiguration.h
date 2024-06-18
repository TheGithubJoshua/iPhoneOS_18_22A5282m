@class FigCaptureSourceConfiguration, NSArray, FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject {
    int _motionAttachmentsSource;
    NSArray *_videoStabilizationTypes;
    BOOL _actionCameraEnabled;
    int _depthType;
    struct { int width; int height; } _depthDimensionsOverride;
    BOOL _strictDepthModePreferred;
    unsigned int _RGBIRStereoFusionMinDepthThresholdMM;
    unsigned int _RGBIRStereoFusionMaxDepthThresholdMM;
    unsigned int _RGBIRStereoFusionFixedDepthThresholdMM;
    unsigned int _RGBIRStereoFusionFixedDepthValueMM;
    BOOL _RGBIRStereoFusionEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxExposureDurationClientOverride;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxExposureDurationFrameworkOverride;
    BOOL _forceCNRDisabled;
    BOOL _coreMediaFaceTrackingEnabled;
    BOOL _ispFaceTrackingEnabled;
    BOOL _stillImageGeometricDistortionCorrectionEnabled;
    BOOL _streamingGeometricDistortionCorrectionEnabled;
    BOOL _stillImageGeometricDistortionCorrectionExpansionCoversOverscan;
    BOOL _stillImageLocalHistogramClippingDataMetadataEnabled;
    BOOL _offlineVISEnabled;
    BOOL _zeroShutterLagEnabled;
    BOOL _configureForZeroShutterLagSupport;
    BOOL _configureForSIFRStillImageCaptureIfAvailable;
    BOOL _softISPEnabled;
    BOOL _sensorRawStillImageOutputsEnabledIfAvailable;
    BOOL _enableStillImageSensorOverscanIfAvailable;
    float _overCapturePercentage;
    BOOL _configureForSpatialOverCaptureSupport;
    BOOL _configureForDigitalFlashSupport;
    BOOL _configureForSoftISPSupport;
    BOOL _clockSynchronizationEnabled;
    BOOL _depthConversionEnabled;
    BOOL _midFrameSynchronizationEnabled;
    int _stillImageFocusPixelDataRetainedBufferCount;
    int _stillImageSashimiRawRetainedBufferCount;
    int _stillImageSensorInterfaceRawRetainedBufferCount;
    int _stillImageOutputRetainedBufferCountOverride;
    BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
    BOOL _streamingForegroundSegmentationEnabled;
    BOOL _streamingCameraCalibrationDataDeliveryEnabled;
    int _autoImageControlMode;
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    NSArray *_previewDerivedConnectionConfigurations;
    NSArray *_videoCaptureConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    NSArray *_visionDataConnectionConfigurations;
    NSArray *_metadataObjectConnectionConfigurations;
    NSArray *_movieFileDetectedObjectMetadataConnectionConfigurations;
    NSArray *_pointCloudDataConnectionConfigurations;
    BOOL _clientIsCameraOrDerivative;
    BOOL _deferredTimeOfFlightNodePrepareEnabled;
    BOOL _videoHDRImageStatisticsEnabled;
    float _additionalVISOverscanWhenRecording;
    BOOL _videoSTFMetadataEnabled;
    int _previewMaxLossyCompressionLevel;
    int _videoDataMaxLossyCompressionLevel;
    int _movieFileMaxLossyCompressionLevel;
    int _stillImageMaxLossyCompressionLevel;
    BOOL _depthOutputEnabled;
    BOOL _lumaHistogramsEnabled;
    BOOL _continuityCameraIsWired;
    BOOL _graphContainsMultipleVideoSources;
    BOOL _structuredLightAFAssistEnabled;
}

- (void)dealloc;

@end