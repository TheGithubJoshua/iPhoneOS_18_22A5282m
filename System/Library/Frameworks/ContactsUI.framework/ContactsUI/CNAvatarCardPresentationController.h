@class UIViewController, UIVisualEffectView, CNAvatarCardTransition, UIView, UITapGestureRecognizer;
@protocol CNCardTransitioning;

@interface CNAvatarCardPresentationController : UIPresentationController

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIViewController *sourceViewController;
@property (retain, nonatomic) CNAvatarCardTransition *transition;
@property (retain, nonatomic) id<CNCardTransitioning> originalTransitioning;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceTargetRect;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) double alignmentY;
@property (nonatomic) unsigned int alignmentEdge;

- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)shouldPresentInFullscreen;
- (id)presentedView;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_layoutViews;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)tapGestureRecognized:(id)a0;

@end
