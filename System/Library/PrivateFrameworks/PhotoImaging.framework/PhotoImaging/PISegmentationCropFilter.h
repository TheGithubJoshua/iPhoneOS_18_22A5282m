@class CIImage;

@interface PISegmentationCropFilter : CIFilter

@property (nonatomic) float inputThreshold;
@property (retain, nonatomic) CIImage *inputImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outputCropRect;

- (id)init;
- (id)outputImage;
- (void).cxx_destruct;

@end
