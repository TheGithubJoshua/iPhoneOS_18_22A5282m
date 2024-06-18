@class HKSharingRecipientIdentifier;

@interface HKSharingRecipientAuthorizationStoreTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
