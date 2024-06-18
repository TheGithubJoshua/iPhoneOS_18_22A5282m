@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {
    CALayer *_selectionLayer;
}

- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)dealloc;
- (void)setSelectionNeedsDisplay;

@end
