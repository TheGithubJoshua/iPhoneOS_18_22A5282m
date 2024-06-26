@class CIImage, CIVector;

@interface CICrop : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputRectangle;

+ (id)customAttributes;

- (id)outputImage;
- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;

@end
