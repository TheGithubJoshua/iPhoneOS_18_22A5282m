@class NSString, AMSStoreReviewGatingController, AMSBagKeySet, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSSharedStoreReview : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue;
@property (retain, nonatomic) AMSStoreReviewGatingController *storeReviewGatingController;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_logNewSessionWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (BOOL)_isGroupedLogicSupported;
+ (void)_applicationDidForegroundWithCurrentTime:(id)a0 storeReviewMetrics:(id)a1 sessionInterval:(long long)a2;
+ (id)_storeReviewMetrics;
+ (BOOL)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)a0 currentTime:(id)a1 sessionInterval:(long long)a2;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 sessionCount:(long long)a1;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 currentTime:(id)a1 sessionCount:(long long)a2 promptInterval:(long long)a3;
+ (id)createBagForSubProfile;
+ (void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (void)_persistStoreReviewMetrics:(id)a0;
+ (BOOL)_isRepeatedPromptsSupported;

- (id)shouldAttemptReview;
- (id)isReviewEnabled;
- (void)didAttemptPromptReview;
- (BOOL)isEnabled;
- (BOOL)shouldAttemptPromptReview;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0;
- (void)applicationDidForeground;

@end
