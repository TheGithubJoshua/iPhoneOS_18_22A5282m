@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)init;
- (id)outputImage;
- (id)attributes;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)inputKeys;
- (id)dummyImagesForImages:(id)a0;

@end
