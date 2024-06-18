@class NSString, NSDictionary, NSArray;

@interface FigCaptureStillImageSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSString *imageGroupIdentifier;
@property (readonly, nonatomic) long long settingsID;
@property (nonatomic) int payloadType;
@property (nonatomic) int settingsProvider;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) int outputFileType;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) int rawOutputFileType;
@property unsigned int outputWidth;
@property unsigned int outputHeight;
@property (nonatomic) BOOL squareCropEnabled;
@property (nonatomic) BOOL outputMirroring;
@property (nonatomic) int outputOrientation;
@property (readonly, nonatomic) NSDictionary *outputPixelBufferAttributes;
@property (readonly, nonatomic, getter=isOutputFormatCompressed) BOOL outputFormatCompressed;
@property (nonatomic) BOOL deviceOrientationCorrectionEnabled;
@property (nonatomic) BOOL previewEnabled;
@property (nonatomic) unsigned int previewFormat;
@property unsigned int previewWidth;
@property unsigned int previewHeight;
@property (nonatomic) BOOL previewMirroring;
@property (nonatomic) int previewOrientation;
@property (readonly, nonatomic) NSDictionary *previewPixelBufferAttributes;
@property (nonatomic) BOOL thumbnailEnabled;
@property (nonatomic) unsigned int thumbnailFormat;
@property unsigned int thumbnailWidth;
@property unsigned int thumbnailHeight;
@property (nonatomic) BOOL rawThumbnailEnabled;
@property (nonatomic) unsigned int rawThumbnailFormat;
@property unsigned int rawThumbnailWidth;
@property unsigned int rawThumbnailHeight;
@property (nonatomic) BOOL noiseReductionEnabled;
@property (nonatomic) BOOL burstQualityCaptureEnabled;
@property (nonatomic) float scaleFactor;
@property (nonatomic, getter=isZoomWithoutUpscalingEnabled) BOOL zoomWithoutUpscalingEnabled;
@property (nonatomic) unsigned int shutterSound;
@property (nonatomic) int flashMode;
@property (nonatomic) BOOL autoRedEyeReductionEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int wideColorMode;
@property (nonatomic) int HDRMode;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL embedsDepthDataInImage;
@property (nonatomic) BOOL depthDataFiltered;
@property (nonatomic) BOOL cameraCalibrationDataDeliveryEnabled;
@property (nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) BOOL embedsPortraitEffectsMatteInImage;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) BOOL embedsSemanticSegmentationMattesInImage;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSDictionary *metadataForOriginalImage;
@property (copy, nonatomic) NSArray *originalImageFilters;
@property (copy, nonatomic) NSArray *processedImageFilters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) BOOL providesOriginalImage;
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadata;
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadataForOriginalImage;
@property (nonatomic) BOOL prefersStillImageShiftedToMatchSpatialOverCapturePreview;
@property (nonatomic) BOOL autoDeferredProcessingEnabled;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int clientQualityPrioritization;
@property (nonatomic) int bravoImageFusionMode;
@property (nonatomic) BOOL autoIntelligentDistortionCorrectionEnabled;
@property (copy, nonatomic) NSDictionary *vtCompressionProperties;
@property (readonly, nonatomic) int bracketType;
@property (readonly, nonatomic) unsigned int bracketImageCount;
@property (nonatomic) BOOL lensStabilizationDuringBracketEnabled;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } *exposureDurations;
@property (readonly, nonatomic) float *ISOs;
@property (readonly, nonatomic) float *exposureTargetBiases;
@property (nonatomic) unsigned long long stillImageUserInitiatedRequestTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageUserInitiatedRequestPTS;
@property (nonatomic) long long stillImageRequestTime;
@property (nonatomic) long long stillImageCaptureStartTime;
@property (nonatomic) double stillImageCaptureAbsoluteStartTime;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (nonatomic, getter=isClientInitiatedPrepareSettings) BOOL clientInitiatedPrepareSettings;
@property (nonatomic, getter=isUserInitiatedRequestSettings) BOOL userInitiatedRequestSettings;
@property (nonatomic, getter=isBeginMomentCaptureSettings) BOOL beginMomentCaptureSettings;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;
@property (nonatomic) int resolutionFlavor;
@property (nonatomic) unsigned int downgradeOutputWidth;
@property (nonatomic) unsigned int downgradeOutputHeight;
@property (nonatomic) unsigned int deferredPhotoProxyWidth;
@property (nonatomic) unsigned int deferredPhotoProxyHeight;
@property (nonatomic) unsigned int deferredPhotoFinalWidth;
@property (nonatomic) unsigned int deferredPhotoFinalHeight;
@property (nonatomic) BOOL bypassUpscaling;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSettingsID:(long long)a0;
- (void)setBracketType:(int)a0 imageCount:(unsigned int)a1;
- (id)figCaptureIrisPreparedSettingsRepresentation;

@end