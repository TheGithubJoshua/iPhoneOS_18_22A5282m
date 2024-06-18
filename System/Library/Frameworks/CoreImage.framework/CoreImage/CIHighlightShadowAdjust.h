@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputShadowAmount;
@property (retain, nonatomic) NSNumber *inputHighlightAmount;

+ (id)customAttributes;

- (int)_maxVersion;
- (id)outputImage;
- (id)_kernelSHnoB_v0;
- (id)_kernelSH_v0;
- (void)setDefaults;
- (int)_defaultVersion;
- (id)_kernelSH_v1;
- (id)_kernelSHnoB_v2;
- (id)_kernelSH_v2;
- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;
- (id)_kernelSHnoB_v1;
- (BOOL)_isIdentity;
- (id)_kernelSnoB_v0;

@end
