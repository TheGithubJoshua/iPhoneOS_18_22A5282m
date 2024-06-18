@class NSDate;

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)a0 date:(id)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithGroupName:(id)a0 date:(id)a1;

@end
