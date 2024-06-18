@class UIColor, NSString, UIView;

@interface CPSLabelWithPlaceholder : UILabel {
    UIView *_placeholderView;
    NSString *_text;
}

@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic) double placeholderWidth;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)text;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_desiredPlaceholderSize;
- (void)_placeholderInputsDidChange;

@end
