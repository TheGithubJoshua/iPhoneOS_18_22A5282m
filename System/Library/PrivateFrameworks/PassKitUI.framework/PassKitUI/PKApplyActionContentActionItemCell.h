@class NSArray, PKApplyActionContentActionItem, UIImageView;

@interface PKApplyActionContentActionItemCell : UICollectionViewListCell {
    NSArray *_titleLabels;
    NSArray *_subtitleLabels;
    UIImageView *_disclosureView;
}

@property (retain, nonatomic) PKApplyActionContentActionItem *actionItem;

+ (id)backgroundColor;

- (void)_resetState;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
