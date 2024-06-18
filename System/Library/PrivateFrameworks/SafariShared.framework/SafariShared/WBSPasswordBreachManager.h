@class WBSPasswordBreachQueuedPasswordBagManager, WBSPasswordBreachContext, WBSPasswordBreachChecker, NSObject, WBSPasswordBreachResults;
@protocol OS_os_transaction, WBSPasswordBreachCredentialSource;

@interface WBSPasswordBreachManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_sessionTransaction;
    WBSPasswordBreachContext *_context;
    id<WBSPasswordBreachCredentialSource> _credentialSource;
    WBSPasswordBreachChecker *_checker;
    WBSPasswordBreachResults *_results;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
}

@property (class, nonatomic, getter=isPasswordBreachDetectionOn) BOOL passwordBreachDetectionOn;

+ (id)testableManagerWithTestCredentialSource:(id)a0 store:(id)a1 configuration:(id)a2;
+ (void)_getStandardContextWithCompletionHandler:(id /* block */)a0;
+ (void)getSharedManagerWithCompletionHandler:(id /* block */)a0;

- (id)recentlyBreachedSavedAccounts;
- (id)resultRecordsForQueries:(id)a0;
- (BOOL)_canPerformSessionIgnoringMinimumDelay:(BOOL)a0;
- (void).cxx_destruct;
- (void)performNextSessionLookupIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_showActiveWarningsIfNecessaryWithInitialBagFillState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)addResultRecords:(id)a0;
- (id)recentlyBreachedResultRecords;
- (void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedResultRecords;
- (void)_completeSessionWithResults:(id)a0 completionHandler:(id /* block */)a1;
- (id)_checker;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0 credentialSource:(id)a1;

@end
