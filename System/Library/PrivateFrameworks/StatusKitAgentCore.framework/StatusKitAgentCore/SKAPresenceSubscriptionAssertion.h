@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithSubscriptionIdentifier:(id)a0;
- (BOOL)isEqualToPresenceSubscription:(id)a0;

@end
