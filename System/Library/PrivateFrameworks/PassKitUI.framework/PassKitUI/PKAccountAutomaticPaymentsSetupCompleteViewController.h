@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayNameString;
- (id)_paymentDayString;
- (id)bodyString;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
