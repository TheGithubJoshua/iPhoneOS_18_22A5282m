@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {
    PSSSSubscriptionManager *_internal;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:(id)a0;
- (void)unregisterAllSubscriptions;
- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;

@end
