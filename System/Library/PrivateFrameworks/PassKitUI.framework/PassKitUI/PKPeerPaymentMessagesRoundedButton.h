@class PKShapeView;

@interface PKPeerPaymentMessagesRoundedButton : PKPeerPaymentMessagesButton {
    PKShapeView *_maskView;
}

+ (struct CGSize { double x0; double x1; })referenceSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateMask;
- (void)layoutSubviews;

@end
