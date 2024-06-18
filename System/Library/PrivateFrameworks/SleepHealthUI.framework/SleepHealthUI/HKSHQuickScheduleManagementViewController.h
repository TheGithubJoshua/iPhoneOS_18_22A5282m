@class HKSHQuickScheduleManagementViewControllerInternal, HKSHQuickScheduleManagementViewControllerDelegateWrapper;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

@interface HKSHQuickScheduleManagementViewController : UIViewController {
    HKSHQuickScheduleManagementViewControllerInternal *_internalViewController;
    HKSHQuickScheduleManagementViewControllerDelegateWrapper *_delegateWrapper;
}

@property (weak, nonatomic) id<HKSHQuickScheduleManagementViewControllerDelegate> sleepDelegate;

- (id)initWithSleepStore:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
