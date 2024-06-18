@class NSString, UIViewController, UIView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalViewController : UIViewController <_UISheetPresentationControllerDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (readonly) BOOL shouldUsePadLayout;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (copy, nonatomic) id /* block */ viewControllerWillDismissBlock;
@property (nonatomic) BOOL shouldPresentFullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)presentationControllerWillDismiss:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;

@end
