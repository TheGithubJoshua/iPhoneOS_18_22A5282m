@class AMSDelegatePaymentSheetRequest, AMSPromise;

@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask

@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (retain, nonatomic) AMSDelegatePaymentSheetRequest *request;

- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)perform;

@end
