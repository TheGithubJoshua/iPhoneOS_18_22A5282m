@class NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FCAssetsFetchOperation : FCFetchOperation {
    NSArray *_assetHandles;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;

- (id)initWithAssetHandle:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithAssetHandles:(id)a0;

@end
