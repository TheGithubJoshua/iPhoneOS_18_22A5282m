@class PXPeopleBootstrapSummaryViewController, PXPeopleBootstrapConfirmationViewController, PHPerson;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController

@property (retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController;
@property (retain, nonatomic) PXPeopleBootstrapSummaryViewController *summaryViewController;
@property (readonly, nonatomic) PHPerson *sourcePerson;

- (void).cxx_destruct;
- (void)done:(id)a0;
- (id)_postNamingViewControllers;
- (void)computeViewControllersForBootstrapFlow;
- (void)recomputeViewControllersForChangeInKeyPath:(id)a0;

@end
