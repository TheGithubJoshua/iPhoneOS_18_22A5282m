@class IFImage;

@interface IFPlaceholderImage : IFImage {
    unsigned long long _validationFlags;
}

@property (readonly) IFImage *image;

- (void)setValidationFlags:(unsigned long long)a0;
- (unsigned long long)validationFlags;
- (id)validationToken;
- (BOOL)placeholder;
- (void)setPlaceholder:(BOOL)a0;
- (id)initWithImage:(id)a0;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (void).cxx_destruct;
- (double)scale;
- (struct CGSize { double x0; double x1; })size;

@end
