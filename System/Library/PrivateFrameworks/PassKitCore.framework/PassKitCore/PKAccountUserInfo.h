@class PKSavingsAccountUserInfo, CNContact;

@interface PKAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CNContact *creditPrimaryUser;
@property (copy, nonatomic) PKSavingsAccountUserInfo *savingsUserInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
