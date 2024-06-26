@class NSString, PKMiniDiscoveryCard, NSArray, PKDiscoveryCallToAction, PKDiscoveryCard, PKDiscoveryItem;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long priority;
@property (retain, nonatomic) PKDiscoveryItem *item;
@property (readonly, nonatomic) BOOL entitledToForceLargeCard;
@property (readonly, nonatomic, getter=hasHitMaxLargeViewCount) BOOL hitMaxLargeViewCount;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) PKDiscoveryCard *card;
@property (readonly, nonatomic) PKMiniDiscoveryCard *miniCard;
@property (readonly, nonatomic) NSArray *shelves;
@property (readonly, nonatomic) PKDiscoveryCallToAction *footerLockup;
@property (copy, nonatomic) id /* block */ actionOnDismiss;
@property (readonly, nonatomic, getter=hasRequestedBadge) BOOL requestedBadge;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualForUI:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;

@end
