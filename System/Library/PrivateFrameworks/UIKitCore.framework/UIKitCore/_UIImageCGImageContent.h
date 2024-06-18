@interface _UIImageCGImageContent : _UIImageContent {
    _Atomic struct CGImage *_imageRef;
}

- (id)initWithCGImageSource:(struct CGImageSource { } *)a0 scale:(double)a1;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)contentPreparedForDisplay;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (BOOL)hasCGImage;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)isCGImage;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)CGImage;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;

@end
