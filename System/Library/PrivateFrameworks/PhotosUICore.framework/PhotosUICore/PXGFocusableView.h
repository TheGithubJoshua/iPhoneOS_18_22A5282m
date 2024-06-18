@class PXGFocusableViewConfiguration;

@interface PXGFocusableView : UIView <PXGReusableView> {
    struct { unsigned char didUpdateUserData : 1; unsigned char didUpdateFocusInContext : 1; unsigned char didHintFocusMovement : 1; } _delegateFlags;
}

@property (copy, nonatomic) PXGFocusableViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (void)didHintFocusMovement:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;

@end