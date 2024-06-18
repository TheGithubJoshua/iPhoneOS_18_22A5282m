@class NSString, NSArray;

@interface SPBeaconRoleCategory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long categoryId;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *roles;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategoryId:(long long)a0 category:(id)a1 roles:(id)a2;

@end
