@class NSString;

@interface PLTaggedPointerDataStoreKey : PLTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey, PLChooserKeyProperties>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyWithKeyStruct:(const void *)a0 keyLength:(unsigned long long)a1 forStoreClassID:(unsigned short)a2 inLibraryWithID:(id)a3;

- (BOOL)isDerivative;
- (id)keyData;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (unsigned int)resourceType;
- (id)uniformTypeIdentifier;
- (BOOL)isEqualToKey:(id)a0;
- (void)tableType:(unsigned int *)a0 index:(int *)a1;
- (id)fileURLForAssetID:(id)a0;
- (BOOL)representsSquareResource;
- (id)descriptionForAssetID:(id)a0;
- (unsigned int)resourceVersion;
- (id)_heapAllocatedRepresentationInLibraryWithID:(id)a0;
- (id)initWithKeyStruct:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned int)recipeIDForAssetID:(id)a0;

@end
