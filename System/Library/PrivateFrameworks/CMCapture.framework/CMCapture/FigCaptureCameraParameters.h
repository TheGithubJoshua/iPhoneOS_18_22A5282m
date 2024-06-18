@class NSDictionary;

@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_commonDistortionCorrectionParameters;
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
    NSDictionary *_commonDeepZoomParameters;
    NSDictionary *photoParameters;
}

@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters;
@property (readonly, nonatomic) int nrfVersion;
@property (readonly, nonatomic) int distortionCorrectionVersion;
@property (readonly, nonatomic) NSDictionary *commonVideoGreenGhostMitigationParameters;
@property (readonly, nonatomic) int videoGreenGhostMitigationVersion;
@property (readonly, nonatomic) NSDictionary *photoEncoderParameters;
@property (readonly, nonatomic) int _cameraFeatureVersion;
@property (readonly, nonatomic) int deepZoomVersion;

+ (int)videoDataMaxLossyCompressionLevel;
+ (id)sharedInstance;
+ (int)previewMaxLossyCompressionLevel;
+ (int)stillImageMaxLossyCompressionLevel;
+ (void)initialize;
+ (int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)a0;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (id)sensorIDStringFromMetadata:(id)a0;
+ (id)sdofTuningParametersForSensorIDDictionary:(id)a0 zoomFactor:(float)a1;
+ (unsigned int)sensorIDFromSensorIDString:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (int)depthProcessorVersion;
- (id)init;
- (BOOL)portraitPreviewForegroundBlurEnabledForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;
- (int)learnedMattingVersion;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)cameraSettingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)videoStabilizationProcessorVersion;
- (id)initWithModelSpecificName:(id)a0;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })landmarksVersionForInferenceType:(int)a0;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityVersion;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForStream:(id)a0;
- (int)coreImagePortraitFilterVersion;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (id)actionCameraSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)personSemanticsVersion;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (void)dealloc;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)a0;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (id)quadraSubPixelSwitchingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (id)focalLengthCharacterizationForStream:(id)a0;

@end
