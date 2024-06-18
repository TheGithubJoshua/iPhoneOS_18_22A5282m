@class NSString;

@interface GDSubEntityIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long intValue;
@property (readonly, nonatomic) long long entityClass;
@property (readonly, nonatomic) NSString *stringValue;

- (id)initWithCoder:(id)a0;
- (id)initWithValue:(unsigned long long)a0;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
