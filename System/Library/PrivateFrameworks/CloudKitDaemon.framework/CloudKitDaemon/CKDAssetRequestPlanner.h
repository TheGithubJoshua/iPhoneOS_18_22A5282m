@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain, nonatomic) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (void)planRegisterBatches;
- (BOOL)hasSuccessfulBatches;
- (void)addMMCSSectionItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)CKPropertiesDescription;
- (void)resetAssetTokenRequests;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (void)planGetChunkKeysBatches;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)a0;
- (void)failBatch:(id)a0;
- (void)planAssetRequests;

@end
