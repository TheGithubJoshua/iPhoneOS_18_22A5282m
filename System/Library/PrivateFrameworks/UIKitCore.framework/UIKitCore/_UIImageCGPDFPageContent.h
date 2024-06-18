@interface _UIImageCGPDFPageContent : _UIImageContent {
    struct CGPDFPage { } *_pdfPageRef;
}

- (struct CGPDFPage { } *)CGPDFPage;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (unsigned long long)hash;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isCGPDFPage;
- (void)dealloc;
- (BOOL)canScaleImageToTargetResolution;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0 scale:(double)a1;

@end
