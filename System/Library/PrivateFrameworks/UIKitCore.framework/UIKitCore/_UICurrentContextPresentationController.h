@interface _UICurrentContextPresentationController : UIPresentationController

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)shouldPresentInFullscreen;
- (void)transitionDidFinish:(BOOL)a0;
- (long long)presentationStyle;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (id)_firstCurrentContextChildInWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (BOOL)shouldRemovePresentersView;

@end
