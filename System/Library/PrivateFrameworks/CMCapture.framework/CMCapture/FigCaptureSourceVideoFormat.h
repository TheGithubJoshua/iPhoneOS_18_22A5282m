@class FigCaptureSourceCompanionFormat, NSArray, NSString;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat <FigXPCCoding, NSSecureCoding> {
    struct { int width; int height; } _previewDimensions;
    NSArray *_frontEndScalerCompanionFormats;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_actionCameraCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    FigCaptureSourceVideoFormat *_cinematicFramingFormat;
    FigCaptureSourceVideoFormat *_geometricDistortionCorrectionFormat;
    NSArray *_supportedDepthDataFormats;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct { int x0; int x1; } sensorDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) float fieldOfView;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly, getter=isBinned) BOOL binned;
@property (readonly) int stabilizationTypeOverrideForStandard;
@property (readonly) int stabilizationTypeOverrideForCinematic;
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property (readonly) float maxZoomFactor;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly) float minISO;
@property (readonly) float maxISO;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly, getter=isSIFRSupported) BOOL SIFRSupported;
@property (readonly, getter=isLowLightVideoCaptureSupported) BOOL lowLightVideoCaptureSupported;
@property (readonly, getter=isVariableFrameRateVideoCaptureSupported) BOOL variableFrameRateVideoCaptureSupported;
@property (readonly, getter=isVideoGreenGhostMitigationSupported) BOOL videoGreenGhostMitigationSupported;
@property (readonly) float stabilizationOverscanPercentageOverrideForMediumStrength;
@property (readonly, getter=isVideoHDRFusionSupported) BOOL videoHDRFusionSupported;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isPhotoFormat) BOOL photoFormat;
@property (readonly, getter=isHighResPhotoFormat) BOOL highResPhotoFormat;
@property (readonly, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (readonly, getter=isIrisSupported) BOOL irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) BOOL irisVideoStabilizationSupported;
@property (readonly, getter=isHDRSupported) BOOL hdrSupported;
@property (readonly, getter=isHDROriginalImageDeliverySupported) BOOL hdrOriginalImageDeliverySupported;
@property (readonly, getter=isHighResStillImageSupported) BOOL highResStillImageSupported;
@property (readonly, getter=isQuadraHighResStillImageSupported) BOOL quadraHighResStillImageSupported;
@property (readonly, getter=isStereoFusionSupported) BOOL stereoFusionSupported;
@property (readonly, getter=isRedEyeReductionSupported) BOOL redEyeReductionSupported;
@property (readonly, getter=isDigitalFlashSupported) BOOL digitalFlashSupported;
@property (readonly, getter=isDeepFusionSupported) BOOL deepFusionSupported;
@property (readonly, getter=isResponsiveShutterSupported) BOOL responsiveShutterSupported;
@property (readonly, getter=isSemanticStyleRenderingSupported) BOOL semanticStyleRenderingSupported;
@property (readonly, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, getter=isWideColorSupported) BOOL wideColorSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly) unsigned int internalDemosaicedRawPixelFormat;
@property (readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) float minSimulatedAperture;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isStreamingDisparitySupported) BOOL streamingDisparitySupported;
@property (readonly, getter=isStreamingDepthSupported) BOOL streamingDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) BOOL stillImageDisparitySupported;
@property (readonly, getter=isStillImageDepthSupported) BOOL stillImageDepthSupported;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly, getter=isMomentCaptureMovieRecordingSupported) BOOL momentCaptureMovieRecordingSupported;
@property (readonly, getter=isSpatialOverCaptureSupported) BOOL spatialOverCaptureSupported;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly, getter=isNonDestructiveCropSupported) BOOL nonDestructiveCropSupported;
@property (readonly, getter=isDeferredPhotoProcessingSupported) BOOL deferredPhotoProcessingSupported;
@property (readonly, getter=isMultiCamSupported) BOOL multiCamSupported;
@property (readonly) float hardwareCost;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly) int ispPowerConsumption;
@property (readonly, nonatomic) BOOL intelligentDistortionCorrectionSupported;
@property (readonly, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;
@property (readonly, getter=isCinematicFramingSupportedForContinuityCapture) BOOL cinematicFramingSupportedForContinuityCapture;
@property (readonly, getter=isCinematicFramingProvidedBySource) BOOL cinematicFramingProvidedBySource;
@property (readonly, getter=isCenterStageRectOfInterestSupported) BOOL centerStageRectOfInterestSupported;
@property (readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property (readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
@property (readonly, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported;
@property (readonly, getter=isBackgroundBlurSupportedForContinuityCapture) BOOL backgroundBlurSupportedForContinuityCapture;
@property (readonly, getter=isBackgroundBlurProvidedBySource) BOOL backgroundBlurProvidedBySource;
@property (readonly, getter=isStudioLightingSupported) BOOL studioLightingSupported;
@property (readonly, getter=isStudioLightingSupportedForContinuityCapture) BOOL studioLightingSupportedForContinuityCapture;
@property (readonly, getter=isStudioLightingProvidedBySource) BOOL studioLightingProvidedBySource;
@property (readonly) NSArray *secondaryNativeResolutionZoomFactors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (int)formatIndex;
- (id)highResStillImageDimensions;
- (float)aeMaxGain;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (int)stillImageGDCSourceMode;
- (BOOL)isSecondaryScalerUnavailable;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)digitalFlashDetectedObjectTypes;
- (BOOL)isVideoSTFMetadataEnabled;
- (BOOL)cameraSettingSupported;
- (struct { int x0; int x1; })cropDimensionsForFES;
- (id)fullBinSIFRCompanionFormat;
- (int)horizontalSensorBinningFactor;
- (BOOL)sushiRawBlackBorderingEnabled;
- (BOOL)isValidDerivedSourceFormatForUnderlyingFormat:(id)a0;
- (id)frontEndScalerCompanionFormats;
- (BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
- (BOOL)distortionCompensationSupported;
- (struct { int x0; int x1; })nativeDimensions;
- (BOOL)capturesStillsFromVideoStream;
- (float)defaultMinFrameRateForSessionPreset:(id)a0;
- (BOOL)isStillImageISPMultiBandNoiseReductionSupported;
- (unsigned int)mediaType;
- (BOOL)isContentAwareAWBSupported;
- (id)copyXPCEncoding;
- (BOOL)isVideoSTFSupported;
- (BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
- (BOOL)isGainMapSupported;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxVisibleSensorRect;
- (int)sifrBinningFactorOverrideForNondisruptiveSwitching;
- (BOOL)isSIFRStillImageCaptureWithDepthDataDisabled;
- (BOOL)gdcInStillImageSinkPipelineSupported;
- (struct { int x0; int x1; })sourceCropAspectRatio;
- (BOOL)isCompatibleWithInfraredFormat:(id)a0;
- (BOOL)sushiRawSupported;
- (BOOL)temporalNoiseReductionBand0Disabled;
- (struct { int x0; int x1; })preGDCSensorCropDimensions;
- (BOOL)temporalNoiseReductionRawEnabled;
- (BOOL)isGNRHDRSupported;
- (int)swfrVersion;
- (BOOL)isWideAsStatsMasterEnabled;
- (int)configureForGreenGhostMitigationVersion;
- (struct CGSize { double x0; double x1; })stabilizationOverscanFromSensorForFESCropDimensions:(struct { int x0; int x1; })a0 preferSIFRFormat:(BOOL)a1 geometricDistortionCorrection:(BOOL)a2 useFESCompanionIndex:(BOOL)a3;
- (id)initWithXPCEncoding:(id)a0;
- (id)rawLensShadingCorrection;
- (int)semanticRenderingVersion;
- (int)semanticDevelopmentVersion;
- (int)verticalSensorBinningFactor;
- (BOOL)configureForNonDisruptiveFullBinSIFRSwitching;
- (int)greenGhostMitigationVersion;
- (BOOL)configureForStillImageStabilizationSupport;
- (void)encodeWithCoder:(id)a0;
- (int)fesBinningFactorHorizontal;
- (BOOL)isCaptureTimePhotoCurationSupported;
- (BOOL)isContentAwareEnhancementSupported;
- (BOOL)configureForDigitalFlashSupport;
- (int)previewImageQueueSyncStrategy;
- (int)temporalNoiseReductionMode;
- (id)depthCompanionFormat;
- (BOOL)isStagePreviewRenderingSupported;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (int)sensorHDRCompanionIndex;
- (int)redEyeReductionVersion;
- (id)actionCameraCompanionFormat;
- (float)defaultMaxFrameRateForSessionPreset:(id)a0;
- (BOOL)ispChromaNoiseReductionEnabled;
- (int)maxIntegrationTimeOverride;
- (BOOL)isZeroShutterLagSupported;
- (struct { int x0; int x1; })stillImageGDCInDCProcessorOutputCropDimensions;
- (BOOL)isStabilizationModeSupported:(int)a0;
- (BOOL)isSupplementalTimeOfFlightCameraSupported;
- (void)dealloc;
- (BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (id)initWithFigCaptureStreamFormatDictionary:(id)a0 pixelFormatOverride:(unsigned int)a1;
- (struct { int x0; int x1; })geometricDistortionCorrectedNativeDimensions;
- (id)nonSIFRCompanionFormat;
- (BOOL)isDeepZoomSupported;
- (float)depthDataMaxIntegrationTimeOverride;
- (float)lowLightVideoAEMaxGain;
- (BOOL)isStudioAndContourPreviewRenderingSupported;
- (float)depthDataAEMaxGain;
- (BOOL)isVideoStabilizationStrengthSupported:(int)a0;
- (BOOL)configureForSoftISPSupport;
- (struct { int x0; int x1; })cinematicFramingOutputDimensions;
- (struct { int x0; int x1; })fesInputCropDimensions;
- (struct { int x0; int x1; })sensorCropDimensions;
- (struct { int x0; int x1; })postGDCCropDimensions;
- (BOOL)isISPMultiBandNoiseReductionSupported;
- (BOOL)configureForSpatialOverCaptureSupport;
- (BOOL)isLearnedNRSupported;

@end
