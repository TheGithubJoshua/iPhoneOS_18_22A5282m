@class NSString;

@interface QLSpotlightSearchableItemInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSString *searchableItemUniqueIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;

+ (id)spotlightInfoWithUniqueIdentifier:(id)a0 queryString:(id)a1 applicationBundleIdentifier:(id)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
