@class NSData, CKDistributedSiteIdentifier;

@interface CKDistributedTimestamp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *siteIdentifier;
@property (readonly, nonatomic) unsigned char modifier;
@property (readonly, nonatomic) BOOL unordered;
@property (readonly, nonatomic) CKDistributedSiteIdentifier *siteIdentifierObject;
@property (readonly, nonatomic) unsigned long long clockValue;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiteIdentifierObject:(id)a0 clockValue:(unsigned long long)a1;
- (long long)compareToTimestamp:(id)a0;
- (id)descriptionWithStringSiteIdentifiers;
- (id)initWithSiteIdentifier:(id)a0 clockValue:(unsigned long long)a1;
- (id)initWithSiteIdentifier:(id)a0 clockValue:(unsigned long long)a1 modifier:(unsigned char)a2 unordered:(BOOL)a3;

@end
