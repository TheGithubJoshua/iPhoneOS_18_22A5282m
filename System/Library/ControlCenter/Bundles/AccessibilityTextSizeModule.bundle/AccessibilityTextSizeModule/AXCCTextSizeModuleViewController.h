@class AXCCTextSizeHelper, NSString, AXCCTextSizeDetailViewController, UIViewPropertyAnimator, AXCCIconViewController;
@protocol AXCCTextSizeModuleViewControllerDelegate;

@interface AXCCTextSizeModuleViewController : UIViewController <AXCCIconViewControllerDelegate, CCUIContentModuleContentViewController, CCUITouchContinuationProviding> {
    AXCCTextSizeDetailViewController *_detailController;
    AXCCIconViewController *_iconController;
    BOOL _expanded;
}

@property (weak, nonatomic) id<AXCCTextSizeModuleViewControllerDelegate> textSizeDelegate;
@property (retain, nonatomic) AXCCTextSizeHelper *helper;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)viewForTouchContinuation;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)iconViewWasTapped:(id)a0;

@end
