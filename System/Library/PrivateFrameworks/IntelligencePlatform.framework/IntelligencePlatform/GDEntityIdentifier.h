@class NSString;

@interface GDEntityIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long intValue;
@property (readonly, nonatomic) long long entityClass;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)prefixedIdentifierStringForIdentifierString:(id)a0;
+ (id)prefixedIdentifierStringForIdentifierValue:(unsigned long long)a0;
+ (id)unprefixedIdentifierStringForIdentifierString:(id)a0;
+ (id)unprefixedIdentifierStringForIdentifierValue:(unsigned long long)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithValue:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
