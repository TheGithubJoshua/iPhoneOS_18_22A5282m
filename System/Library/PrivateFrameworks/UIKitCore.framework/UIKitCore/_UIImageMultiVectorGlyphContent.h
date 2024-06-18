@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {
    NSArray *_glyphs;
    NSArray *_colors;
    NSArray *_offsets;
    NSArray *_scaleFactors;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGImage { } *_imageRef;
}

- (double)vectorScale;
- (BOOL)isVectorGlyph;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canDrawImage;
- (BOOL)isCGImage;
- (id)initWithScale:(double)a0;
- (struct CGImage { } *)CGImage;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 glyphs:(id)a1 colors:(id)a2 offsets:(id)a3 scaleFactors:(id)a4 anchorPoint:(struct CGPoint { double x0; double x1; })a5;
- (void).cxx_destruct;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)containsNamedColorStyles;
- (BOOL)canScaleImageToTargetResolution;

@end
