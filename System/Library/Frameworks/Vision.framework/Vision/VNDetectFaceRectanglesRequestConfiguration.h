@class NSNumber;

@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) unsigned long long faceCoreType;
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (retain, nonatomic) NSNumber *faceCoreInitialAngle;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float precisionRecallThreshold;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
