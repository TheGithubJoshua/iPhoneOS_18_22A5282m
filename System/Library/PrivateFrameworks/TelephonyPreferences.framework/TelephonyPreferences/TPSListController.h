@class NSOrderedSet, CTXPCServiceSubscriptionContext;

@interface TPSListController : PSListController

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (copy, nonatomic) NSOrderedSet *subscriptions;

- (void).cxx_destruct;
- (void)setSpecifier:(id)a0;

@end
