@class HKSharedSummaryTransaction, NSString;

@interface _HKSharedSummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKSharedSummaryTransaction *transaction;
@property (copy, nonatomic) NSString *package;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
