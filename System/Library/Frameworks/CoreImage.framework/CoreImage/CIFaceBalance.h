@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputOrigI;
@property (retain, nonatomic) NSNumber *inputOrigQ;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)outputImage;
- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;
- (BOOL)_isIdentity;
- (id)_kernel;

@end
