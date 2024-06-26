@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (id)payloadID;
- (void)willSave;
- (void)prepareForDeletion;
- (id)payloadForChangedKeys:(id)a0;
- (id)duplicateSortPropertyNames;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNamesSkip;

@end
