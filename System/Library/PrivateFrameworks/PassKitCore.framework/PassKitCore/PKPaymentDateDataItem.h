@class NSTimeZone, NSDate;

@interface PKPaymentDateDataItem : PKPaymentDataItem

@property (retain, nonatomic) NSDate *paymentDate;
@property (retain, nonatomic) NSTimeZone *paymentTimeZone;
@property (nonatomic) long long paymentFrequency;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithModel:(id)a0;

@end
