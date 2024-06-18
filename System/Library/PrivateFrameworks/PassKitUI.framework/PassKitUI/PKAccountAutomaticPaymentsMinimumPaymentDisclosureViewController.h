@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
