@class NSMapTable, NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPCFuture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) NSMutableArray *successBlocks;
@property (readonly, nonatomic) NSMutableArray *failureBlocks;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (readonly, nonatomic) NSMapTable *invalidBlocks;
@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly, nonatomic, getter=isDisconnected) BOOL disconnected;
@property (copy, nonatomic) NSString *debugLabel;

- (void)disconnect;
- (id)onSuccess:(id /* block */)a0;
- (id)onInvalid:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (id)onFailure:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)finishWithError:(id)a0;
- (void)finishWithValue:(id)a0;
- (id)onCompletion:(id /* block */)a0;
- (void)_onQueue_finalize;

@end