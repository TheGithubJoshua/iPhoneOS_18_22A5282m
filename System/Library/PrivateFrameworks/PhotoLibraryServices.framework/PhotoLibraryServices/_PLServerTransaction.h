@class NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface _PLServerTransaction : _PLClientTransaction {
    NSCountedSet *_enqueuedChangeScopes;
    NSObject<OS_dispatch_queue> *_changeScopeQueue;
}

- (BOOL)isClientTransaction;
- (void)completeTransactionScope:(id)a0;
- (id)generateChangeScopesDescription;
- (void)popChangeScopesBatch;
- (void)completeTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void).cxx_destruct;
- (void)abortTransaction;
- (void)pushChangeScopesBatch;
- (void)_enqueueChangeScopes:(id)a0;
- (void)dealloc;
- (id)changeScopes;
- (void)addChangeScopes:(id)a0;

@end
