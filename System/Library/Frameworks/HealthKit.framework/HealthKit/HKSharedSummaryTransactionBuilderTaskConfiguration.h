@class NSUUID;

@interface HKSharedSummaryTransactionBuilderTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) NSUUID *transactionUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
