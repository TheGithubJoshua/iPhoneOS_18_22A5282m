@class NSString, NSArray;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *domainName;
@property (getter=isRoamingEnabled) BOOL roamingEnabled;
@property (copy) NSArray *roamingConsortiumOIs;
@property (copy) NSArray *naiRealmNames;
@property (copy) NSArray *MCCAndMNCs;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomainName:(id)a0 roamingEnabled:(BOOL)a1;

@end
