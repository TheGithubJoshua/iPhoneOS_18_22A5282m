@class NSString;

@interface RBSInvalidateUnderConditionAttribute : RBSAttribute

@property (readonly, copy, nonatomic) NSString *condition;
@property (readonly, nonatomic) long long minValue;

+ (id)attributeWithCondition:(id)a0 minValue:(long long)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
