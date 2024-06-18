@class NSString, NSArray;

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long configMethod;
@property (copy) NSString *router;
@property (readonly) NSArray *addresses;
@property (readonly) NSArray *networkPrefixLengths;
@property (copy) NSArray *includedRoutes;
@property (copy) NSArray *excludedRoutes;

+ (id)settingsWithLinkLocalAddressing;
+ (id)settingsWithAutomaticAddressing;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)init;
- (id)initFromLegacyDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasDefaultRoute;
- (id)initWithAddresses:(id)a0 networkPrefixLengths:(id)a1;
- (id)initWithConfigMethod:(long long)a0;

@end
