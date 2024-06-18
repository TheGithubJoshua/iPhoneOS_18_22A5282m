@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView

@property (retain, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic) BOOL showAmount;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_amountLabelFontSize;
- (id)initWithCurrencyCode:(id)a0 minimumAmount:(id)a1;

@end
