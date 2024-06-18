@class NSString, NSArray, SKPublishedStatus;

@interface SKStatusSubscriptionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *subscriptionIdentifier;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic, getter=isPersonalStatusSubscription) BOOL personalStatusSubscription;
@property (readonly, nonatomic) SKPublishedStatus *currentStatus;
@property (readonly, nonatomic) NSArray *ownerHandles;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSubscriptionIdentifier:(id)a0 statusTypeIdentifier:(id)a1 isPersonalStatusSubscription:(BOOL)a2 currentStatus:(id)a3 ownerHandles:(id)a4;

@end
