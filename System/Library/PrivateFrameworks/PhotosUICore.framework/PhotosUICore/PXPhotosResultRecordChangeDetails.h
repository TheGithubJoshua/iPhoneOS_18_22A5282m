@class PXPhotosResultRecord, PHFetchResultChangeDetails;

@interface PXPhotosResultRecordChangeDetails : NSObject

@property (readonly, nonatomic) PXPhotosResultRecord *resultRecordBeforeChanges;
@property (readonly, nonatomic) PXPhotosResultRecord *resultRecordAfterChanges;
@property (readonly, nonatomic) PHFetchResultChangeDetails *exposedFetchResultChangeDetails;
@property (readonly, nonatomic) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails;

+ (id)resultRecordChangeDetailsFor:(id)a0 withChange:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithResultRecordBeforeChanges:(id)a0 resultRecordAfterChanges:(id)a1 exposedFetchResultChangeDetails:(id)a2 keyAssetsFetchResultChangeDetails:(id)a3;

@end
