@class CIImage;

@interface RedEyeGradient : CIFilter {
    CIImage *inputImage;
}

- (id)outputImage;

@end
