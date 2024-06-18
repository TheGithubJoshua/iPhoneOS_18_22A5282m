@class TabDocument, _SFLinkPreviewHeader, NSString, _SFBrowserView, SFScreenTimeOverlayViewController;

@interface LinkPreviewViewController : UIViewController <WBSFluidProgressControllerWindowDelegate, SFScreenTimeOverlayHostingViewController>

@property (readonly, weak, nonatomic) TabDocument *previewTabDocument;
@property (readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (readonly, nonatomic) _SFBrowserView *browserView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFScreenTimeOverlayViewController *screenTimeOverlayViewController;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)fluidProgressRocketAnimationDidComplete;
- (void)displayHostedScreenTimeView;
- (id)currentFluidProgressStateSource;
- (id)initWithTabDocument:(id)a0;
- (void)updatePreviewLoadingUIWithURLString:(id)a0;
- (void)willCommitPreviewedWebView;

@end
