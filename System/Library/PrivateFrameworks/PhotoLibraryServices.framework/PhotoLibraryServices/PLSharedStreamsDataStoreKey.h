@class NSString;

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties> {
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}

+ (id)_keyDataWithRelativePath:(id)a0 type:(unsigned int)a1;
+ (id)_relativeDCIMFilePathForPersonID:(id)a0 albumID:(id)a1 dcimDirectory:(id)a2 fileName:(id)a3;
+ (id)_relativeFilePathForPersonID:(id)a0 albumID:(id)a1 fileName:(id)a2;
+ (id)_replacementPathExtensionForType:(unsigned int)a0;
+ (unsigned long long)dataLengthFromPreviewByte:(unsigned char)a0;

- (BOOL)isDerivative;
- (id)keyData;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (unsigned int)resourceType;
- (id)uniformTypeIdentifier;
- (BOOL)isEqualToKey:(id)a0;
- (id)fileURLForAssetID:(id)a0;
- (id)descriptionForAssetID:(id)a0;
- (unsigned int)resourceVersion;
- (id)initWithKeyStruct:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned int)recipeIDForAssetID:(id)a0;
- (id)initWithAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;

@end
