@class UIView;

@interface VideosExtrasPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *extrasMenuBarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extrasMenuBarFrame;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 extrasMenuBarView:(id)a2 extrasmenuBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
