@class UIColor, UIFont, UIImageView, UIImage, UILabel, NSAttributedString;

@interface PKIconTextLabel : UIView {
    UILabel *_textLabel;
    UIImageView *_iconView;
}

@property (copy, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long iconAlignment;
@property (retain, nonatomic) UIImage *icon;

- (id)init;
- (void)_updateView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)hasContent;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (id)initFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAttributedText:(id)a0 icon:(id)a1;
- (id)initWithText:(id)a0 icon:(id)a1;

@end
