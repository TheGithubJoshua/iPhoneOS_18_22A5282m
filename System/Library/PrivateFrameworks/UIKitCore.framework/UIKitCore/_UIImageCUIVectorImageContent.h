@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
}

- (double)vectorScale;
- (struct CGPDFPage { } *)CGPDFPage;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (id)initWithScale:(double)a0;
- (unsigned long long)hash;
- (BOOL)_canProvideCGImageDirectly;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorImage:(id)a1 scale:(double)a2;
- (BOOL)isCGPDFPage;
- (BOOL)isCGSVGDocument;
- (BOOL)canScaleImageToTargetResolution;

@end
