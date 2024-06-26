@class UIColor, NSString, PKContinuousButton, UIImageView, UILabel;

@interface PKDashboardBalanceView : PKDashboardCollectionViewCell {
    BOOL _isTemplateLayout;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_availableCreditLabel;
    NSString *_title;
    PKContinuousButton *_actionButton;
    UIImageView *_disclosureView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *balance;
@property (copy, nonatomic) NSString *availableCredit;
@property (copy, nonatomic) NSString *topUpTitle;
@property (copy, nonatomic) id /* block */ topUpAction;
@property (nonatomic) BOOL topUpEnabled;
@property (nonatomic) BOOL showDisclosure;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_buttonPressed:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createSubviews;
- (void)resetFonts;

@end
