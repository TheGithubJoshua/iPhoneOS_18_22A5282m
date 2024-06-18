@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } *_svgDocumentRef;
}

- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (unsigned long long)hash;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (void)dealloc;
- (BOOL)isCGSVGDocument;
- (BOOL)canScaleImageToTargetResolution;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { } *)a0 scale:(double)a1;

@end
