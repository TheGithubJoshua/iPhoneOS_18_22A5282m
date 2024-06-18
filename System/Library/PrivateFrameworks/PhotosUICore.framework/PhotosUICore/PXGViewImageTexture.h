@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isOpaque;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (int)presentationType;
- (long long)estimatedByteSize;
- (void)dealloc;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;

@end
