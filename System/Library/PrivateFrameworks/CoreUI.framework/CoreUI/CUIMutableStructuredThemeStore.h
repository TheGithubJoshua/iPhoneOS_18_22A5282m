@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
    NSMutableDictionary *_apperanceNameIdentifierStore;
    int _maxApperanceNameIdentifier;
    NSMutableDictionary *_renditionInfoStore;
}

- (id)deploymentPlatformString;
- (BOOL)usesCUISystemThemeRenditionKey;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (long long)deploymentPlatform;
- (long long)maximumRenditionKeyTokenCount;
- (id)renditionInfoForIdentifier:(unsigned short)a0;
- (id)nameForAppearanceIdentifier:(unsigned short)a0;
- (unsigned short)appearanceIdentifierForName:(id)a0;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)themeStore;
- (void)insertCGImage:(struct CGImage { } *)a0 withName:(id)a1 andDescription:(id)a2;
- (id)initWithIdentifier:(id)a0;
- (id)path;
- (void)removeImageNamed:(id)a0 withDescription:(id)a1;
- (id)allImageNames;
- (struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForAssetWithName:(id)a0 withDescription:(id)a1;
- (BOOL)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)defaultAppearanceName;
- (void)_removeRenditionInfoForImageWithName:(id)a0;
- (id)appearances;
- (void)removeImagesNamed:(id)a0;
- (void)dealloc;
- (void)_addRenditionInfoForImageWithName:(id)a0 andKey:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0 usingKeySignature:(id)a1;
- (id)imagesWithName:(id)a0;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0;
- (void)clearRenditionCache;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(id)a0 cursorHotSpot:(struct CGPoint { double x0; double x1; } *)a1;

@end
