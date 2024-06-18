@class UILabel, PKPeerPaymentBubbleView, UIView;

@interface PKPeerPaymentHeroBubbleView : UIImageView {
    PKPeerPaymentBubbleView *_peerPaymentBubbleView;
    unsigned long long _bubbleState;
}

@property (readonly, nonatomic) UILabel *bubbleAmountLabel;
@property (readonly, nonatomic) UIView *pluginBalloonView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_bubbleAmountLabelTextAttributes;
- (id)_bubbleAmountLabelTextWithAmount:(id)a0;
- (unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)a0;
- (id)initWithCurrencyAmount:(id)a0 regitrationFlowState:(unsigned long long)a1;

@end
