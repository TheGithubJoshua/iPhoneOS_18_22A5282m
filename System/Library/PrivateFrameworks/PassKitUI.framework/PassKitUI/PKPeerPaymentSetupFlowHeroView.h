@class UIImageView, PKPeerPaymentCredential, PKPeerPaymentHeroBubbleView;

@interface PKPeerPaymentSetupFlowHeroView : UIView {
    UIImageView *_passSnapshotView;
    PKPeerPaymentHeroBubbleView *_bubbleView;
    PKPeerPaymentCredential *_credential;
    long long _animationState;
}

- (void)startAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (BOOL)_bubbleIsOnLeftSide;
- (id)_defaultCurrencyAmount;
- (BOOL)_shouldShowBubbleView;
- (void)_updateImageViewDynamicColors;
- (id)initWithPeerPaymentPassSnapShot:(id)a0 peerPaymentCredential:(id)a1;
- (void)startAnimationWithCompletion:(id /* block */)a0;

@end
