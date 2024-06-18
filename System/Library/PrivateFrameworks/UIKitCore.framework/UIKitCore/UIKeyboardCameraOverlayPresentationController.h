@class UIPanGestureRecognizer, UIKeyboardCameraGrabberView, NSLayoutConstraint;

@interface UIKeyboardCameraOverlayPresentationController : UIKeyboardCameraBasePresentationController {
    NSLayoutConstraint *_topLayoutConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIKeyboardCameraGrabberView *_grabberView;
    double _keyboardCameraNormalHeight;
    double _keyboardCameraFullScreenHeight;
    double _keyboardCameraHeight;
    double _panningStartingHeight;
    BOOL _isLandscape;
}

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)updatesGuideDuringRotation;
- (void)_handlePan:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (void)_installGrabber;
- (void)_determinePortraitHeights;

@end
