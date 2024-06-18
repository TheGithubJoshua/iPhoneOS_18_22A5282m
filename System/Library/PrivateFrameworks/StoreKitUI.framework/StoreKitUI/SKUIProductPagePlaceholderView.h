@class UIColor, UIImageView, UILabel;

@interface SKUIProductPagePlaceholderView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
}

@property (retain, nonatomic) UIColor *textColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithPlaceholderString:(id)a0 isPad:(BOOL)a1;

@end
