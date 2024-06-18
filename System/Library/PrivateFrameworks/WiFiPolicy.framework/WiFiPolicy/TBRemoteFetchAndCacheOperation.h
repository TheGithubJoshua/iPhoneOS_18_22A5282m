@class TBRemoteFetchAndCacheDataSource, NSDate;
@protocol TBFetchRequest, TBFetchResponse;

@interface TBRemoteFetchAndCacheOperation : NSOperation {
    BOOL _finished;
    NSDate *_start;
}

@property (retain, nonatomic) id<TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id<TBFetchResponse> response;
@property (retain, nonatomic) TBRemoteFetchAndCacheDataSource *dataSource;

- (void)finish;
- (BOOL)isReady;
- (void)start;
- (id)name;
- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)a0 dataSource:(id)a1;
- (BOOL)isFinished;

@end
