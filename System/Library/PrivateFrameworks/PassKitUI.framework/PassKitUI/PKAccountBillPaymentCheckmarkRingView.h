@class LAUICheckmarkLayer, UIView;

@interface PKAccountBillPaymentCheckmarkRingView : UIView

@property (retain, nonatomic) UIView *ringView;
@property (retain, nonatomic) LAUICheckmarkLayer *checkmarkLayer;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithRingView:(id)a0;

@end
