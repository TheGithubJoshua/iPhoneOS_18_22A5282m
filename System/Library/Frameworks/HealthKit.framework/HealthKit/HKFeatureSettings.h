@class NSDictionary;

@interface HKFeatureSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *keyValueStorage;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)stringForKey:(id)a0;
- (id)dataForKey:(id)a0 error:(id *)a1;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)dataForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)numberForKey:(id)a0 error:(id *)a1;

@end
