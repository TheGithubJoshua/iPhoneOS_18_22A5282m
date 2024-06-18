@class _UIImageContent, CUINamedVectorGlyph;

@interface _UIImageCUIVectorGlyphContent : _UIImageContent {
    CUINamedVectorGlyph *_vectorGlyph;
    _UIImageContent *_vectorContent;
    double _vectorScale;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGImage { } *_overrideImageRef;
    _Atomic int _isMultiColor;
    _Atomic long long _numberOfHierarchyLayers;
}

@property (nonatomic) double glyphScaleFactor;

- (double)vectorScale;
- (BOOL)isVectorGlyph;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (id)initWithCUIVectorGlyph:(id)a0 scale:(double)a1;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canDrawImage;
- (BOOL)isCGImage;
- (id)initWithScale:(double)a0;
- (struct CGImage { } *)CGImage;
- (id)contentWithVariableValue:(double)a0;
- (unsigned long long)hash;
- (BOOL)containsNamedColorStyle:(id)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (BOOL)_canProvideCGImageDirectly;
- (void).cxx_destruct;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (id)description;
- (id)vectorGlyph;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (double)variableValue;
- (id)_automaticSymbolConfiguration;
- (void)dealloc;
- (BOOL)containsNamedColorStyles;
- (unsigned long long)numberOfHierarchyLayers;
- (id)outlinePath;
- (BOOL)canScaleImageToTargetResolution;

@end
