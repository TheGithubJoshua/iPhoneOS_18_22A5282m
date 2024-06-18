@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage {
    NSValue *_sizeValue;
}

@property (copy, nonatomic) INImage *intentsImage;

+ (void)initialize;
+ (id)_sharedImageLoader;

- (int)source;
- (unsigned long long)hash;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithIntentsImage:(id)a0;
- (id)initWithPayloadImage:(id)a0;
- (id)payloadImage;

@end
