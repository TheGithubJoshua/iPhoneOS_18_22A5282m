@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration

@property (copy, nonatomic) NSArray *symbologies;
@property (copy, nonatomic) NSString *locateMode;
@property (nonatomic) BOOL stopAtFirstPyramidWith2DCode;
@property (nonatomic) BOOL useMLDetector;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void)setDefaultSymbologiesForRevision:(unsigned long long)a0;

@end
