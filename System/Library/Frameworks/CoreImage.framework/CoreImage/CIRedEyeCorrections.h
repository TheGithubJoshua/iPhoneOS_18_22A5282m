@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties>

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSString *inputCameraModel;
@property (copy, nonatomic) NSArray *inputCorrectionInfo;

- (id)outputImage;
- (void)setDefaults;
- (id)_initFromProperties:(id)a0;
- (id)_outputProperties;
- (BOOL)_isIdentity;

@end
