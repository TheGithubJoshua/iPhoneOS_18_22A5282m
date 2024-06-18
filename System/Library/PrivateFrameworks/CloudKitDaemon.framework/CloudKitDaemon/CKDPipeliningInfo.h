@class NSMutableArray, NSObject;
@protocol OS_dispatch_group, CKDOperationPipelining, CKDURLRequestPipelining, OS_dispatch_queue;

@interface CKDPipeliningInfo : NSObject

@property (nonatomic) BOOL perRequestCallbackQueueSuspended;
@property (retain, nonatomic) NSMutableArray *perRequestCallbackBlocks;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) id<CKDURLRequestPipelining> request;
@property (weak, nonatomic) id<CKDOperationPipelining> operation;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue;

- (void)resumeCallbackQueue;
- (void)suspendCallbackQueue;
- (void)cancelAndDisablePerRequestCallbackBlocks;
- (void)addPerRequestCallbackBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 operation:(id)a1;
- (void)disablePerRequestCallbackBlocks;
- (void)dealloc;

@end
