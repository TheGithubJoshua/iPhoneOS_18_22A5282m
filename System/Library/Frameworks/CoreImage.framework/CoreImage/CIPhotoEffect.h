@class CIImage;

@interface CIPhotoEffect : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)init;
- (int)_maxVersion;
- (id)outputImage;
- (void)setDefaults;
- (int)_defaultVersion;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;

@end
