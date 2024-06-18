@class PKShapeView;

@interface PKPeerPaymentNumberPadActionButton : PKPeerPaymentMessagesButton {
    PKShapeView *_maskView;
}

@property (nonatomic) unsigned long long action;

+ (struct CGSize { double x0; double x1; })referenceSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateMask;
- (void)layoutSubviews;
- (id)_titleForAction:(unsigned long long)a0;

@end