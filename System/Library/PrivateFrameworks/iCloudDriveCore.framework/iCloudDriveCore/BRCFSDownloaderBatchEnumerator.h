@class BRCSyncContext, PQLResultSet;

@interface BRCFSDownloaderBatchEnumerator : NSObject {
    long long _now;
    long long *_retryQueueKick;
    PQLResultSet *_rs;
}

@property (readonly, nonatomic) BRCSyncContext *syncContext;

- (long long)completedUnitCount;
- (void).cxx_destruct;
- (id)etag;
- (void)close;
- (long long)transferSize;
- (id)stageID;
- (id)initWithSyncContext:(id)a0 kind:(int)a1 now:(long long)a2 retryQueueKick:(long long *)a3;
- (id)nextDocumentItem;
- (long long)transferQOS;

@end
