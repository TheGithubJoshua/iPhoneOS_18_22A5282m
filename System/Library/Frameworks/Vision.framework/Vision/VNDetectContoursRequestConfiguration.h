@class NSNumber;

@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float contrastAdjustment;
@property (retain, nonatomic) NSNumber *contrastPivot;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) unsigned long long maximumImageDimension;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
