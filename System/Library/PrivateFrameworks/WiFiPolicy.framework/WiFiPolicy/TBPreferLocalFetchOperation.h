@class NSArray, NSOperationQueue, NSDate, TBPreferLocalFetchDataSource;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBPreferLocalFetchOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchRequest> fetchRequestCopy;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBPreferLocalFetchDataSource *dataSource;
@property (retain, nonatomic) NSOperationQueue *fetchQueue;
@property (retain, nonatomic) NSArray *remoteKeysToFetch;
@property (retain, nonatomic) NSArray *satisfiedLocalKeys;

- (void)finish;
- (void)_fetchLocal;
- (BOOL)isReady;
- (void)_mergeLocalAndRemoteResults:(id)a0;
- (void)_fetchRemote;
- (void)start;
- (id)name;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1 fetchQueue:(id)a2;
- (void)finishAndCallCompletionWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)_tileItemsFromTileKeys:(id)a0;
- (BOOL)isFinished;
- (void)_captureCacheEventWithStatus:(unsigned long long)a0 userInfo:(id)a1 error:(id)a2 type:(unsigned long long)a3;
- (BOOL)_doResults:(id)a0 satisfyFetchRequest:(id)a1 keysToFetchRemotely:(id *)a2 satisfiedKeys:(id *)a3;

@end
