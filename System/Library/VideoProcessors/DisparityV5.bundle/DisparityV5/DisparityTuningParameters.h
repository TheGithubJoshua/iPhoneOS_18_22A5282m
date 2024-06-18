@class NSMutableDictionary;

@interface DisparityTuningParameters : NSObject {
    NSMutableDictionary *_pixelSizeInMicronsByPortType;
}

@property (readonly, nonatomic) float nearLimitDistanceMM;
@property (readonly, nonatomic) float midLimitDistanceMM;
@property (readonly, nonatomic) float keypointsDetectionThreshold;
@property (readonly, nonatomic) float defaultFocalLengthTeleMicrometers;
@property (readonly, nonatomic) float defaultFocalLengthTeleMaxDeviationMicrometers;
@property (readonly, nonatomic) float defaultFocalLengthWideMicrometers;
@property (readonly, nonatomic) float defaultFocalLengthWideMaxDeviationMicrometers;
@property (readonly, nonatomic) struct AdaptiveCorrectionConfig { double epErrorLimitWidePix_FirstPass; double epErrorLimitWidePix_SecondPass; double rangePFL_T; double rangePFL_W; double rangeOCxT; double rangeOCxW; double rangeOCyW; double intermediateMacroDistMM; double extremeMacroDistMM; int minPointsForAdjustment; double errorVal_GreaterThanInf; double errorVal_LessThanExtremeMacro; double errorVal_BetweenIntermediate_ExtremeMacro; BOOL runAnalyticalPreconditioning; double spgEpsilon; float temporalFilteringStrength; float temporalFilteringStrengthParallel; } adaptiveCorrectionConfig;
@property (readonly, nonatomic) float minDisparityClampingPercentile;
@property (readonly, nonatomic) float maxDisparityClampingPercentile;
@property (readonly, nonatomic) int stereoDisparityEstimatorLevels;
@property (readonly, nonatomic) BOOL useLKTKeypointDetection;
@property (readonly, nonatomic) float bidirectionalError;
@property (readonly, nonatomic) int blockSize;
@property (readonly, nonatomic) int lastScale;
@property (readonly, nonatomic) int nwarps;

- (void)setDefaultAdaptiveCorrectionParameters;
- (id)init;
- (float)pixelSizeInMicronsForPortType:(id)a0;
- (int)updateTuningParametersWith:(id)a0;
- (void)setDefaultRPDParameters;
- (id)initWithTuningDictionary:(id)a0 cameraInfoByPortType:(id)a1;
- (int)readCalibrationConfig:(id)a0 isUpdating:(BOOL)a1;
- (void)setDefaultLKTParameters;
- (const struct AdaptiveCorrectionConfig { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; BOOL x13; double x14; float x15; float x16; } *)getAdaptiveCorrectionConfigPtr;
- (void).cxx_destruct;
- (void)setDefaultCalibrationParameters;
- (int)readLKTConfig:(id)a0 isUpdating:(BOOL)a1;
- (int)readAdaptiveCorrectionConfig:(id)a0 isUpdating:(BOOL)a1;
- (void)setDefaultDisparityClampingParameters;
- (int)readDisparityClampingConfig:(id)a0 isUpdating:(BOOL)a1;

@end