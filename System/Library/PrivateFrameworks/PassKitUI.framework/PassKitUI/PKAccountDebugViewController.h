@class _PKAccountDebugViewController, PKAccountViewInterfaceConfiguration;

@interface PKAccountDebugViewController : UIViewController {
    _PKAccountDebugViewController *_viewController;
    PKAccountViewInterfaceConfiguration *_config;
}

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_handleShareButton:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
