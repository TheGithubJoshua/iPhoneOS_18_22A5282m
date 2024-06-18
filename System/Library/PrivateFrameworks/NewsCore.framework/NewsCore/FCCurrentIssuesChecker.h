@class NSString, FCIssueReadingHistory, FCSubscriptionController;
@protocol FCBundleSubscriptionProviderType, FCContentContext;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {
    id<FCContentContext> _context;
    FCSubscriptionController *_subscriptionController;
    FCIssueReadingHistory *_issueReadingHistory;
    id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(id)a0 subscriptionController:(id)a1 issueReadingHistory:(id)a2 bundleSubscriptionProvider:(id)a3;
- (void)fetchUsersCurrentIssuesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchCurrentIssuesWithCompletion:(id /* block */)a0;

@end
