@class BTSDevice;

@interface BTSFitTestWelcomeController : UIViewController

@property (retain, nonatomic) BTSDevice *currentDevice;

- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelFitTest;
- (void)continueToFitTest;
- (void)deviceDisconnectedHandler:(id)a0;
- (void)powerChangedHandler:(id)a0;

@end
