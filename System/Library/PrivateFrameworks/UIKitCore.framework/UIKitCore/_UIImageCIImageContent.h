@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {
    CIImage *_ciImage;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)canScaleImageToTargetResolution;
- (id)CIImage;
- (id)initWithCIImage:(id)a0 scale:(double)a1;
- (BOOL)isCIImage;

@end
