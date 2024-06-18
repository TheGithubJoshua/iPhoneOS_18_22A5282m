@class NSData, PLCloudMaster, PLAdditionalAssetAttributes;

@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) PLCloudMaster *cloudMaster;
@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;

+ (id)entityName;

- (id)payloadID;
- (id)payloadsForChangedKeys:(id)a0;
- (void)_addPayloadIfValidForAsset:(id)a0 changedKeys:(id)a1 toPayloads:(id)a2 modelProperties:(id)a3;

@end
