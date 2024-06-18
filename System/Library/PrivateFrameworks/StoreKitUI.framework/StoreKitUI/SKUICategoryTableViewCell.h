@class UIView;

@interface SKUICategoryTableViewCell : UITableViewCell {
    UIView *_separatorView;
    BOOL _layoutNeedsLayout;
}

@property (nonatomic) struct CGSize { double width; double height; } expectedImageSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
