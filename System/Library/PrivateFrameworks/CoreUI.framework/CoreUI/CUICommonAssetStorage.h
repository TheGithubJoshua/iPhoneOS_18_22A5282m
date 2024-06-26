@class NSData, NSDictionary, NSSet;

@interface CUICommonAssetStorage : NSObject {
    unsigned int _thinnedWithCoreUIVersion;
    unsigned char _swap : 1;
    unsigned char _isMemoryMapped : 1;
    unsigned char _hasAppearanceKey : 1;
    unsigned char _hasLocalizationKey : 1;
    unsigned int _reserved : 28;
    NSSet *_externalTags;
    unsigned short _renditionInfoCacheLookup[20];
    id _renditionInfoCache[20];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _renditionInfoCacheLock;
    struct _renditionkeyattributeindex { unsigned long long keymask; unsigned char keyindices[65]; unsigned int nkeys; unsigned int keylist[29]; } _keyfmtindex;
}

@property (nonatomic) struct _carheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; char x5[128]; char x6[256]; unsigned char x7[16]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; } *header;
@property (nonatomic) struct _carextendedMetadata { unsigned int x0; char x1[256]; char x2[256]; char x3[256]; char x4[256]; } *extendedMetadata;
@property (nonatomic) struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *keyfmt;
@property (nonatomic) void *imagedb;
@property (nonatomic) void *colordb;
@property (nonatomic) void *fontdb;
@property (nonatomic) void *fontsizedb;
@property (nonatomic) void *facetKeysdb;
@property (nonatomic) void *bitmapKeydb;
@property (nonatomic) void *appearancedb;
@property (nonatomic) void *localizationdb;
@property (retain, nonatomic) NSData *globals;
@property (readonly, nonatomic) NSDictionary *appearances;

+ (BOOL)isValidAssetStorageWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (BOOL)isValidAssetStorageWithURL:(id)a0;

- (id)deploymentPlatformString;
- (BOOL)usesCUISystemThemeRenditionKey;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)keyFormat;
- (long long)deploymentPlatform;
- (long long)maximumRenditionKeyTokenCount;
- (unsigned short)localizationIdentifierForName:(id)a0;
- (float)fontSizeForFontSizeType:(id)a0;
- (unsigned int)thinnedWithCoreUIVersion;
- (id)renditionInfoForIdentifier:(unsigned short)a0;
- (BOOL)assetExistsForKey:(id)a0;
- (id)localizations;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned int)colorSpaceID;
- (void)_swapHeader;
- (const struct _renditionkeyattributeindex { unsigned long long x0; unsigned char x1[65]; unsigned int x2; unsigned int x3[29]; } *)keyAttributeIndex;
- (id)nameForAppearanceIdentifier:(unsigned short)a0;
- (unsigned int)schemaVersion;
- (BOOL)getFontName:(id *)a0 baselineOffset:(float *)a1 forFontType:(id)a2;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (unsigned short)appearanceIdentifierForName:(id)a0;
- (id)nameForLocalizationIdentifier:(unsigned short)a0;
- (long long)storageTimestamp;
- (void)_buildBitmapInfoIntoDictionary:(id)a0;
- (void)setExternalTags:(id)a0;
- (int)validatekeyformat;
- (int)keySemantics;
- (struct _BOMStorage { } *)_bomStorage;
- (id)allAssetKeys;
- (BOOL)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)renditionInfoCacheLock;
- (id)initWithPath:(id)a0;
- (struct _renditionkeytoken { unsigned short x0; unsigned short x1; })_swapRenditionKeyToken:(struct _renditionkeytoken { unsigned short x0; unsigned short x1; })a0;
- (const struct FontValue { char x0[128]; float x1; } *)_fontValueForFontType:(id)a0;
- (void)enumerateRenditionInfosUsingBlock:(id /* block */)a0;
- (unsigned int)renditionCount;
- (id)path;
- (id)uuid;
- (id)keyFormatData;
- (unsigned int)associatedChecksum;
- (id)assetKeysMatchingBlock:(id /* block */)a0;
- (BOOL)swapped;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(id /* block */)a0;
- (BOOL)writeToPath:(id)a0 withTreePageSize:(unsigned int)a1;
- (id)description;
- (BOOL)hasColorForName:(const char *)a0;
- (BOOL)_commonInitWithStorage:(struct _BOMStorage { } *)a0 forWritting:(BOOL)a1;
- (unsigned int)storageVersion;
- (const char *)versionString;
- (void)_loadExtendedMetadata;
- (const char *)mainVersionString;
- (id)renditionNameForKeyBaseList:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (BOOL)getBaselineOffset:(float *)a0 forFontType:(id)a1;
- (void)_addBitmapIndexForNameIdentifier:(unsigned short)a0 attribute:(int)a1 withValue:(unsigned short)a2 toDictionary:(id)a3;
- (void)_swapKeyFormat;
- (struct os_unfair_lock_s { unsigned int x0; } *)lock;
- (long long)_storagefileTimestamp;
- (void)_bringHeaderInfoUpToDate;
- (id)initWithPath:(id)a0 forWriting:(BOOL)a1;
- (void)dealloc;
- (BOOL)assetExistsForKeyData:(const void *)a0 length:(unsigned long long)a1;
- (void)_initDefaultHeaderVersion:(double)a0 versionString:(const char *)a1;
- (id)renditionNamesWithKeys;
- (unsigned int)coreuiVersion;
- (id)catalogGlobalData;
- (id)externalTags;
- (id)thinningArguments;
- (id)_readAppearances;
- (int)validateFile;
- (BOOL)getColor:(struct _colordef { unsigned int x0; unsigned int x1; struct _rgbquad { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned char x3 : 8; } x2; } *)a0 forName:(const char *)a1;
- (int)validateBitmapInfo;
- (void)_swapRenditionKeyArray:(unsigned short *)a0;
- (id)authoringTool;
- (id)deploymentPlatformVersion;
- (id)assetForKey:(id)a0;
- (const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)renditionKeyForName:(const char *)a0 hotSpot:(struct CGPoint { double x0; double x1; } *)a1;
- (id)allRenditionNames;
- (void)enumerateBitmapIndexUsingBlock:(id /* block */)a0;

@end
