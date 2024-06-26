@protocol NSCopying, NSSecureCoding, NSObject;

@interface HKAttributeConceptSelection : HKConceptSelection

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long operatorType;
@property (readonly, copy, nonatomic) id<NSCopying, NSSecureCoding, NSObject> value;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttribute:(long long)a0 operatorType:(unsigned long long)a1 value:(id)a2;

@end
