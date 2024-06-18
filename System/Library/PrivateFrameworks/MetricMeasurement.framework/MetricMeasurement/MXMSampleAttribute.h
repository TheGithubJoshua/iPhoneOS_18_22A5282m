@class NSString, NSNumber;

@interface MXMSampleAttribute : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long valueType;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSNumber *numericValue;
@property (readonly, copy, nonatomic) id value;

+ (id)attributeWithName:(id)a0 numericValue:(id)a1;
+ (id)attributeWithName:(id)a0;
+ (id)attributeWithName:(id)a0 stringValue:(id)a1;
+ (id)attributeWithName:(id)a0 valueType:(long long)a1;
+ (id)attributeWithName:(id)a0 valueType:(long long)a1 value:(id)a2;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttribute:(id)a0;
- (id)initWithAttributeName:(id)a0;
- (id)initWithAttributeName:(id)a0 numericValue:(id)a1;
- (id)initWithAttributeName:(id)a0 stringValue:(id)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1;
- (id)initWithAttributeName:(id)a0 valueType:(long long)a1 value:(id)a2;

@end
