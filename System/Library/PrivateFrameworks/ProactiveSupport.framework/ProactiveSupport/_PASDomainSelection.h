@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)init;
- (id)initWithDomainsFromSet:(id)a0;
- (id)allDomains;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomain:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (id)initWithDomainsFromArray:(id)a0;
- (id)globPatterns;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
