@class NSString, NSMapTable, NSBundle, NSDictionary, NSCache;

@interface CUICatalog : NSObject {
    NSMapTable *_storageMapTable;
    NSBundle *_bundle;
    NSString *_assetStoreName;
    NSCache *_lookupCache;
    NSCache *_negativeCache;
    NSCache *_localObjectCache;
    NSDictionary *_vibrantColorMatrixTints;
    unsigned short _preferredLocalization;
    unsigned char _purgeWhenFinished : 1;
    unsigned char _fileHasDisplayGamutInKeySpace : 2;
    unsigned int _reserved : 28;
}

@property (nonatomic) unsigned long long storageRef;

+ (id)bestMatchUsingImages:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(unsigned long long)a4 layoutDirection:(unsigned long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7;
+ (id)defaultUICatalogForBundle:(id)a0;
+ (id)bestMatchUsingImages:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3;
+ (id)bestMatchUsingImages:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
+ (id)bestMatchUsingImages:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 displayGamut:(unsigned long long)a3 deviceSubtype:(unsigned long long)a4 sizeClassHorizontal:(long long)a5 sizeClassVertical:(long long)a6;
+ (id)bestMatchUsingObjects:(id)a0 getAttributeValueUsing:(id /* block */)a1 scaleFactor:(double)a2 deviceIdiom:(long long)a3 deviceSubtype:(unsigned long long)a4 displayGamut:(long long)a5 deploymentTarget:(long long)a6 layoutDirection:(long long)a7 sizeClassHorizontal:(long long)a8 sizeClassVertical:(long long)a9 memoryClass:(long long)a10 graphicsFeatureSetClass:(long long)a11 graphicsFallBackOrder:(id)a12 deviceSubtypeFallBackOrder:(id)a13;
+ (id)bestMatchUsingObjects:(id)a0 getAttributeValueUsing:(id /* block */)a1 scaleFactor:(double)a2 deviceIdiom:(long long)a3 deviceSubtype:(unsigned long long)a4 displayGamut:(long long)a5 deploymentTarget:(long long)a6 layoutDirection:(long long)a7 sizeClassHorizontal:(long long)a8 sizeClassVertical:(long long)a9 memoryClass:(long long)a10 graphicsFeatureSetClass:(long long)a11 graphicsFallBackOrder:(id)a12 deviceSubtypeFallBackOrder:(id)a13 platform:(long long)a14;
+ (BOOL)isValidAssetStorageWithURL:(id)a0;
+ (BOOL)isValidLCRWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (struct CGColor { } *)newColorByAdjustingLightnessOfColor:(struct CGColor { } *)a0 darker:(BOOL)a1;

- (id)_baseImageKeyForName:(id)a0;
- (id)initWithName:(id)a0 fromBundle:(id)a1 error:(id *)a2;
- (id)_baseKeyForName:(id)a0;
- (id)allImageNames;
- (BOOL)containsLookupForName:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)debugDescription;
- (void)dealloc;
- (id)imagesWithName:(id)a0;
- (unsigned long long)_storageRefForRendition:(id)a0 representsODRContent:(BOOL *)a1;
- (id)appearanceNames;
- (void)clearCachedImageResources;
- (id)colorWithName:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2;
- (id)colorWithName:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;
- (id)dataWithName:(id)a0;
- (id)defaultLayerStackWithScaleFactor:(double)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 sizeClassHorizontal:(long long)a3 sizeClassVertical:(long long)a4;
- (BOOL)hasStylePresetWithName:(id)a0;
- (id)imageByStylingImage:(struct CGImage { } *)a0 stylePresetName:(id)a1 styleConfiguration:(id)a2 foregroundColor:(struct CGColor { } *)a3 scale:(double)a4;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 appearanceName:(id)a8;
- (id)namedLookupWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 appearanceName:(id)a8;
- (id)namedVectorGlyphWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 layoutDirection:(long long)a3 glyphSize:(long long)a4 glyphWeight:(long long)a5 glyphPointSize:(double)a6 appearanceName:(id)a7;
- (id)namedVectorImageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 appearanceName:(id)a8;
- (struct { double x0; double x1; double x2; double x3; })styledInsetsForStylePresetName:(id)a0 styleConfiguration:(id)a1 foregroundColor:(struct CGColor { } *)a2 scale:(double)a3;
- (id)colorWithName:(id)a0 displayGamut:(long long)a1 appearanceName:(id)a2;
- (id)namedVectorImageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 layoutDirection:(long long)a3 appearanceName:(id)a4;
- (BOOL)drawGlyphs:(const unsigned short *)a0 atPositions:(const struct CGPoint { double x0; double x1; } *)a1 inContext:(struct CGContext { } *)a2 withFont:(struct __CTFont { } *)a3 count:(unsigned long long)a4 stylePresetName:(id)a5 styleConfiguration:(id)a6 foregroundColor:(struct CGColor { } *)a7;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1;
- (id)_modelWithName:(id)a0;
- (id)textStyleWithName:(id)a0 displayGamut:(long long)a1;
- (id)layerStackWithName:(id)a0 scaleFactor:(double)a1;
- (id)_baseAtlasContentsKeyForName:(id)a0;
- (id)_baseAtlasKeyForName:(id)a0;
- (id)_baseColorKeyForName:(id)a0;
- (id)_baseModelForKeyForName:(id)a0;
- (id)_baseMultisizeImageSetKeyForName:(id)a0;
- (id)_baseRecognitionGroupImageSetKeyForName:(id)a0;
- (id)_baseRecognitionObjectKeyForName:(id)a0;
- (id)_baseTextureKeyForName:(id)a0;
- (id)_baseVectorGlyphForName:(id)a0;
- (id)_baseVectorRenditionKey:(id)a0;
- (id)_dataWithName:(id)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 memoryClass:(unsigned long long)a3 graphicsClass:(unsigned long long)a4 appearanceIdentifier:(long long)a5 graphicsFallBackOrder:(id)a6 deviceSubtypeFallBackOrder:(id)a7;
- (id)_defaultAssetRenditionKey:(id)a0;
- (id)_defaultLayerStackWithScaleFactor:(double)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 sizeClassHorizontal:(long long)a3 sizeClassVertical:(long long)a4;
- (id)_defaultNamedAssetWithScaleFactor:(double)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 sizeClassHorizontal:(long long)a3 sizeClassVertical:(long long)a4;
- (BOOL)_doStyledQuartzDrawingInContext:(struct CGContext { } *)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 stylePresetName:(id)a2 styleConfiguration:(id)a3 drawingHandler:(id /* block */)a4;
- (BOOL)_effectStyle:(unsigned long long *)a0 state:(long long *)a1 presentationState:(long long *)a2 value:(long long *)a3 resolution:(unsigned long long *)a4 dimension1:(unsigned long long *)a5 appearance:(long long *)a6 fromStyleConfiguration:(id)a7;
- (id)_imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 memoryClass:(unsigned long long)a8 graphicsClass:(unsigned long long)a9 appearanceIdentifier:(long long)a10 graphicsFallBackOrder:(id)a11 deviceSubtypeFallBackOrder:(id)a12;
- (id)_layerStackWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
- (id)_nameForAppearanceIdentifier:(long long)a0;
- (id)_namedImageAtlasWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 displayGamut:(long long)a3 deviceSubtype:(unsigned long long)a4 memoryClass:(unsigned long long)a5 graphicsClass:(unsigned long long)a6 graphicsFallBackOrder:(id)a7 deviceSubtypeFallBackOrder:(id)a8;
- (id)_namedLookupWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 appearanceName:(id)a8;
- (id)_namedTextureWithName:(id)a0 scaleFactor:(double)a1 appearanceName:(id)a2;
- (id)_namedTextureWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 appearanceName:(id)a3;
- (id)_namedVectorImageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 appearanceIdentifier:(long long)a8;
- (id)_recognitionImageWithName:(id)a0;
- (id)_recognitionObjectWithName:(id)a0;
- (id)_resolvedRenditionKeyForName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 memoryClass:(unsigned long long)a8 graphicsClass:(unsigned long long)a9 graphicsFallBackOrder:(id)a10 deviceSubtypeFallBackOrder:(id)a11 withBaseKeySelector:(SEL)a12 adjustRenditionKeyWithBlock:(id /* block */)a13;
- (id)_resolvedRenditionKeyFromThemeRef:(unsigned long long)a0 withBaseKey:(id)a1 scaleFactor:(double)a2 deviceIdiom:(long long)a3 deviceSubtype:(unsigned long long)a4 displayGamut:(long long)a5 layoutDirection:(long long)a6 sizeClassHorizontal:(long long)a7 sizeClassVertical:(long long)a8 memoryClass:(unsigned long long)a9 graphicsClass:(unsigned long long)a10 graphicsFallBackOrder:(id)a11 deviceSubtypeFallBackOrder:(id)a12 adjustRenditionKeyWithBlock:(id /* block */)a13;
- (void)_resourceUnPinnedNotification:(id)a0;
- (void)_setPreferredLocalization:(id)a0;
- (unsigned long long)_themeRef;
- (id)_themeStore;
- (void)_vibrantColorMatrixBrightnessSaturationForColor:(struct CGColor { } *)a0 saturation:(double *)a1 brightness:(double *)a2;
- (int)blendModeForStylePresetWithName:(id)a0 styleConfiguration:(id)a1;
- (BOOL)canGetShapeEffectRenditionWithKey:(id)a0;
- (id)colorWithName:(id)a0 displayGamut:(long long)a1;
- (id)compositingFilterForStylePresetWithName:(id)a0 styleConfiguration:(id)a1;
- (id)compositingFilterForStylePresetWithName:(id)a0 styleConfiguration:(id)a1 foregroundColor:(struct CGColor { } *)a2;
- (id)dataWithName:(id)a0 appearanceName:(id)a1;
- (id)dataWithName:(id)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 memoryClass:(unsigned long long)a3 graphicsClass:(unsigned long long)a4 appearanceIdentifier:(long long)a5 graphicsFallBackOrder:(id)a6 deviceSubtypeFallBackOrder:(id)a7;
- (id)dataWithName:(id)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 memoryClass:(unsigned long long)a3 graphicsClass:(unsigned long long)a4 graphicsFallBackOrder:(id)a5 deviceSubtypeFallBackOrder:(id)a6;
- (id)defaultNamedAssetWithScaleFactor:(double)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 sizeClassHorizontal:(long long)a3 sizeClassVertical:(long long)a4;
- (void)enumerateNamedLookupsUsingBlock:(id /* block */)a0;
- (struct CGColor { } *)equivalentForegroundColorForStylePresetWithName:(id)a0 styleConfiguration:(id)a1;
- (struct CGColor { } *)equivalentForegroundColorForStylePresetWithName:(id)a0 styleConfiguration:(id)a1 baseForegroundColor:(struct CGColor { } *)a2;
- (BOOL)fillStyledPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 stylePresetName:(id)a2 styleConfiguration:(id)a3;
- (BOOL)fillStyledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 stylePresetName:(id)a2 styleConfiguration:(id)a3;
- (BOOL)hasStylePresetWithName:(id)a0 styleConfiguration:(id)a1;
- (id)iconImageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 desiredSize:(struct CGSize { double x0; double x1; })a8;
- (id)iconImageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 desiredSize:(struct CGSize { double x0; double x1; })a8 appearanceName:(id)a9;
- (id)iconImageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(unsigned long long)a2 layoutDirection:(long long)a3 desiredSize:(struct CGSize { double x0; double x1; })a4;
- (id)iconImageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(unsigned long long)a2 layoutDirection:(long long)a3 desiredSize:(struct CGSize { double x0; double x1; })a4 appearanceName:(id)a5;
- (BOOL)imageExistsWithName:(id)a0;
- (BOOL)imageExistsWithName:(id)a0 scaleFactor:(double)a1;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 appearanceName:(id)a2;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 appearanceName:(id)a4;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 memoryClass:(long long)a8 graphicsClass:(long long)a9;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 memoryClass:(unsigned long long)a8 graphicsClass:(unsigned long long)a9 appearanceIdentifier:(long long)a10 graphicsFallBackOrder:(id)a11 deviceSubtypeFallBackOrder:(id)a12;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7 memoryClass:(unsigned long long)a8 graphicsClass:(unsigned long long)a9 graphicsFallBackOrder:(id)a10 deviceSubtypeFallBackOrder:(id)a11;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5 appearanceName:(id)a6;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 layoutDirection:(long long)a3 adjustRenditionKeyWithBlock:(id /* block */)a4;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 layoutDirection:(long long)a3;
- (id)imageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 layoutDirection:(long long)a3 appearanceName:(id)a4;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 fromBundle:(id)a1;
- (id)layerStackWithName:(id)a0;
- (id)layerStackWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2;
- (id)layerStackWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
- (id)localObjectCache;
- (id)lookupCache;
- (id)modelWithName:(id)a0;
- (id)namedImageAtlasWithName:(id)a0 scaleFactor:(double)a1;
- (id)namedImageAtlasWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2;
- (id)namedImageAtlasWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 displayGamut:(long long)a3 deviceSubtype:(unsigned long long)a4 memoryClass:(unsigned long long)a5 graphicsClass:(unsigned long long)a6 graphicsFallBackOrder:(id)a7 deviceSubtypeFallBackOrder:(id)a8;
- (id)namedImageAtlasWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(unsigned long long)a2;
- (id)namedLookupWithName:(id)a0 scaleFactor:(double)a1;
- (id)namedLookupWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7;
- (id)namedLookupWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
- (id)namedRecognitionGroupWithName:(id)a0;
- (id)namedTextureWithName:(id)a0 scaleFactor:(double)a1;
- (id)namedTextureWithName:(id)a0 scaleFactor:(double)a1 appearanceName:(id)a2;
- (id)namedTextureWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2;
- (id)namedTextureWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 appearanceName:(id)a3;
- (id)namedVectorGlyphWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 glyphSize:(long long)a3 glyphWeight:(long long)a4 glyphPointSize:(double)a5 appearanceName:(id)a6;
- (id)namedVectorImageWithName:(id)a0 scaleFactor:(double)a1 deviceIdiom:(long long)a2 deviceSubtype:(unsigned long long)a3 displayGamut:(long long)a4 layoutDirection:(long long)a5 sizeClassHorizontal:(long long)a6 sizeClassVertical:(long long)a7;
- (id)namedVectorImageWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 layoutDirection:(long long)a3;
- (id)negativeCache;
- (id)newShapeEffectPresetForStylePresetName:(id)a0 styleConfiguration:(id)a1;
- (id)newShapeEffectPresetWithRenditionKey:(id)a0;
- (id)newShapeEffectStackForStylePresetName:(id)a0 styleConfiguration:(id)a1 foregroundColor:(struct CGColor { } *)a2;
- (id)newTextEffectStackForStylePresetName:(id)a0 styleConfiguration:(id)a1 foregroundColor:(struct CGColor { } *)a2;
- (id)parentNamedImageAtlasForImageNamed:(id)a0 scaleFactor:(double)a1 displayGamut:(unsigned long long)a2;
- (id)parentNamedImageAtlastForImageNamed:(id)a0 scaleFactor:(double)a1;
- (struct CGPDFDocument { } *)pdfDocumentWithName:(id)a0;
- (struct CGPDFDocument { } *)pdfDocumentWithName:(id)a0 appearanceName:(id)a1;
- (void)preloadNamedAtlasWithScaleFactor:(double)a0 andNames:(id)a1 completionHandler:(id /* block */)a2;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)a0 styleConfiguration:(id)a1;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)a0 state:(long long)a1 presentationState:(long long)a2 value:(long long)a3 resolution:(unsigned long long)a4 dimension1:(unsigned long long)a5;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)a0 state:(long long)a1 presentationState:(long long)a2 value:(long long)a3 resolution:(unsigned long long)a4 dimension1:(unsigned long long)a5 appearance:(long long)a6;
- (BOOL)strokeStyledPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 stylePresetName:(id)a2 styleConfiguration:(id)a3;
- (id)textStyleWithName:(id)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 displayGamut:(long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5;
- (id)textStyleWithName:(id)a0 deviceIdiom:(long long)a1 deviceSubtype:(unsigned long long)a2 displayGamut:(long long)a3 sizeClassHorizontal:(long long)a4 sizeClassVertical:(long long)a5 appearanceName:(id)a6;
- (id)textStyleWithName:(id)a0 displayGamut:(long long)a1 appearanceName:(id)a2;

@end
