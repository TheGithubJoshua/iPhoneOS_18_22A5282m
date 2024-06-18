@interface _UIImageEmptyContent : _UIImageContent

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canDrawImage;
- (unsigned long long)hash;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (struct CGSize { double x0; double x1; })size;
- (BOOL)canScaleImageToTargetResolution;

@end
