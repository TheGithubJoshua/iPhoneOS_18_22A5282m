@class _UIResilientRemoteViewContainerViewController, REMReminderCreationRemoteViewController, NSError;
@protocol REMReminderCreationViewServiceViewController, REMReminderCreationDelegate;

@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController>

@property (retain, nonatomic, setter=setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<REMReminderCreationViewServiceViewController> viewServiceViewController;
@property (readonly, nonatomic, getter=remoteViewController) REMReminderCreationRemoteViewController *remoteViewController;
@property (readonly, nonatomic) id<REMReminderCreationDelegate> delegate;
@property (copy, nonatomic) NSError *deferredErrorDuringPresentation;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })calculateScreenOriginOffset;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidFinish;

@end
