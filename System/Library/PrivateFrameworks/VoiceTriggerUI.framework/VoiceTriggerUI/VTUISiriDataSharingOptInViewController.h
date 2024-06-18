@protocol VTUISiriDataSharingOptInViewControllerDelegate;

@interface VTUISiriDataSharingOptInViewController : OBWelcomeController

@property (weak, nonatomic) id<VTUISiriDataSharingOptInViewControllerDelegate> delegate;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)initWithViewStyle:(long long)a0;

@end
