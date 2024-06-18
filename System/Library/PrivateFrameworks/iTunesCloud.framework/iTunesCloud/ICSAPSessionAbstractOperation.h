@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

@property (retain, nonatomic) ICSAPSession *sapSession;

- (void)executeWithSAPContext:(id)a0;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithSAPContextPreparationError:(id)a0;
- (void)finishWithError:(id)a0;

@end
