@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)init;
- (void)addAssetBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (BOOL)isEmpty;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)successfulBatches;
- (void)addFailedBatch:(id)a0;

@end
