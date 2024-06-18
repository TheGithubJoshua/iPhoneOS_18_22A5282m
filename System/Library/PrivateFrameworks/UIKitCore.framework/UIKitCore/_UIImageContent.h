@class CUINamedVectorGlyph, UIImageSymbolConfiguration, UIBezierPath, CIImage;

@interface _UIImageContent : NSObject

@property (class, readonly, nonatomic) _UIImageContent *empty;

@property (readonly, nonatomic) CUINamedVectorGlyph *vectorGlyph;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeInPixels;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) CIImage *CIImage;
@property (readonly, nonatomic) struct __IOSurface { } *IOSurface;
@property (readonly, nonatomic) struct CGPDFPage { } *CGPDFPage;
@property (readonly, nonatomic) struct CGSVGDocument { } *CGSVGDocument;
@property (readonly, nonatomic) double variableValue;
@property (readonly, nonatomic) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property (readonly, nonatomic) double vectorScale;
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (nonatomic) BOOL isDecompressing;

- (BOOL)isVectorGlyph;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)a0;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canEmitDrawingCommands;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)init;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 hierarchicalColorResolver:(id /* block */)a3;
- (id)debugQuickLookObject;
- (id)contentPreparedForDisplay;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (BOOL)hasCGImage;
- (id)renditionApplyingEffect:(id)a0;
- (BOOL)canDrawImage;
- (BOOL)isCGImage;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithScale:(double)a0;
- (id)contentWithVariableValue:(double)a0;
- (unsigned long long)hash;
- (BOOL)containsNamedColorStyle:(id)a0;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 namedColorResolver:(id /* block */)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 hierarchicalColorResolver:(id /* block */)a2;
- (BOOL)_canProvideCGImageDirectly;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)isEqual:(id)a0;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 paletteColors:(id)a2;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (id)debugDescription;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 paletteColors:(id)a3;
- (struct CGImage { } *)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 namedColorResolver:(id /* block */)a2;
- (BOOL)isCGPDFPage;
- (BOOL)isCGSVGDocument;
- (BOOL)containsNamedColorStyles;
- (unsigned long long)numberOfHierarchyLayers;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isPreparedCGImage;
- (BOOL)isIOSurface;
- (struct CGSize { double x0; double x1; })CGPDFPageSize;
- (struct CGSize { double x0; double x1; })CGSVGDocumentSize;
- (BOOL)isCGImageOnly;
- (BOOL)isCIImage;

@end
