@class UIVisualEffectView;

@interface _UISearchCarPlayPresentationController : _UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (void)containerViewWillLayoutSubviews;
- (id)adaptivePresentationController;
- (BOOL)shouldAccountForStatusBar;
- (id)backgroundObscuringView;
- (long long)adaptivePresentationStyle;
- (BOOL)animatorShouldLayoutPresentationViews;
- (void)showBackgroundObscuringView;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (BOOL)searchBarToBecomeTopAttached;
- (double)statusBarAdjustment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForContainerView;
- (BOOL)searchBarCanContainScopeBar;
- (BOOL)forceObeyNavigationBarInsets;
- (void)hideBackgroundObscuringView;
- (BOOL)searchBarShouldClipToBounds;
- (BOOL)resultsUnderlapsSearchBar;
- (void)setContentVisible:(BOOL)a0;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x0; long long x1; })a0;
- (double)resultsControllerContentOffset;
- (unsigned long long)edgeForHidingNavigationBar;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
