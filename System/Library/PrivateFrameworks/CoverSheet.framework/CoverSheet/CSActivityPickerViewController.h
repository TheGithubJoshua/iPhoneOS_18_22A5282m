@class FCUIActivityPickerViewController, NSString, _UIPortalView, UITapGestureRecognizer, UIView, CSDismissableModalViewController, MTMaterialView;
@protocol CSActivityPickerViewControllerDelegate, CSActivityPickerViewControllerParentContainer;

@interface CSActivityPickerViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate> {
    UIView *_contentView;
    MTMaterialView *_backgroundMaterialView;
    _UIPortalView *_presentingPortalView;
    UIView *_grabberView;
    FCUIActivityPickerViewController *_activityPickerViewController;
    UITapGestureRecognizer *_tapGesture;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceViewInitialFrame;
}

@property (weak, nonatomic) id<CSActivityPickerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<CSActivityPickerViewControllerParentContainer> parentContainer;
@property (weak, nonatomic) CSDismissableModalViewController *modalPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)aggregateBehavior:(id)a0;
- (long long)presentationTransition;
- (long long)presentationStyle;
- (long long)presentationType;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)handleTap:(id)a0;
- (void)addGrabberView:(id)a0;
- (void)_dismissWithRepresentedActivity:(id)a0 transitionCoordinator:(id)a1;
- (void)_presentFromView:(id)a0 representedActivity:(id)a1 transitionCoordinator:(id)a2;
- (void)dismissForHomeButton;
- (void)handleBarSwipeHomeGesturePerformed;

@end
