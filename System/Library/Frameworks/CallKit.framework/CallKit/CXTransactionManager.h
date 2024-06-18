@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CXTransactionManagerDelegate;

@interface CXTransactionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *outstandingTransactionGroups;
@property (weak, nonatomic) id<CXTransactionManagerDelegate> delegate;

- (void)addOutstandingTransactionGroup:(id)a0;
- (void)failOutstandingActionsForCallWithUUID:(id)a0;
- (id)init;
- (void)failOutstandingActionsForChannelWithUUID:(id)a0;
- (void)updateWithCompletedAction:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_timeoutReachedForAction:(id)a0 callSource:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)_setUpTimeoutForActionIfNecessary:(id)a0 callSource:(id)a1;

@end
