@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {
    NSDictionary *_backingDictionary;
    NSArray *_subscriptionArray;
    NSDictionary *_account;
    NSDictionary *_family;
    NSDictionary *_subscriptionsByAdamID;
    long long _activeSubscriptionsCount;
    NSDictionary *_activeTVPlusSubscription;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)currentFamily;
- (id)subscriptions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isTVPlusSubscriber;
- (unsigned long long)hash;
- (unsigned long long)activeSubscriptionsCount;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)currentAccount;
- (id)activeTVPlusSubscription;
- (id)subscriptionByAdamID:(id)a0;

@end
