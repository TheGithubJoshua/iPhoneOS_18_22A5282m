@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject

@property (retain, nonatomic) CPLChangeBatch *batch;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;

- (void)addRecord:(id)a0;
- (id)init;
- (id)batchesSplitForError;
- (void).cxx_destruct;
- (id)lastAddedRecord;
- (id)description;
- (void)incrementRetryCount;
- (unsigned long long)count;

@end
