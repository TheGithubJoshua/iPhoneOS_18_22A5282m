@class UIImage;

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)a0 inBundle:(id)a1;

- (id)initWithContentsOfFile:(id)a0;
- (struct CGImage { } *)CGImage;
- (long long)imageOrientation;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)UIImage;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUIImage:(id)a0;

@end
