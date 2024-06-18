@class PKAccountInvitationController;

@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
    PKAccountInvitationController *_controller;
    BOOL _didBeginOnboardingSubject;
}

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)_reportContinueTapped;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
