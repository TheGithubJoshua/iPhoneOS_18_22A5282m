@interface OI_TSUImageM : OITSUImage

+ (id)initWithContentsOfFile:(id)a0;
+ (id)init;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initWithCGImage:(struct CGImage { } *)a0;
+ (id)initWithData:(id)a0;
+ (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(long long)a2;
+ (id)initWithImageSourceRef:(struct CGImageSource { } *)a0;
+ (id)initWithUIImage:(id)a0;

@end
