@class NSString, UILabel;

@interface PKDashboardActionButtonCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;

- (void)_layoutTitleLabel;
- (id)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_contentHeightWithWidth:(double)a0;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;

@end