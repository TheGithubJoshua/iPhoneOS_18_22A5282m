@class CKDAssetZoneKey, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetZone : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *assetRecords;
@property (retain, nonatomic) NSMutableDictionary *assetRecordsByRecordID;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;

- (id)initWithAssetZoneKey:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;

@end
