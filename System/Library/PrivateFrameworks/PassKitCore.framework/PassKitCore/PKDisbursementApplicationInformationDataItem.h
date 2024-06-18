@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithModel:(id)a0;

@end
