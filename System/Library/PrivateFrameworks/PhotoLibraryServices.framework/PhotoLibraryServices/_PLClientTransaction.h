@class NSString, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction {
    id _processAssertion;
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (BOOL)isClientTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)persistTransactionScopes:(id)a0;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)a0;
- (void)popChangeScopesBatch;
- (void)completeTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void).cxx_destruct;
- (id)description;
- (void)abortTransaction;
- (void)pushChangeScopesBatch;
- (void)dealloc;
- (void)_updateChangeScopesDescriptionSnapshot;
- (id)changeScopes;
- (void)addChangeScopes:(id)a0;

@end
