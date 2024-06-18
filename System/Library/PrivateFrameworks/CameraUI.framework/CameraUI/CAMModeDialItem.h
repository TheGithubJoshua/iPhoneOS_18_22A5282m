@class NSString, UIFont, CAShapeLayer;

@interface CAMModeDialItem : UIView

@property (readonly, nonatomic) struct __CFAttributedString { } *_attributedTitle;
@property (readonly, nonatomic) CAShapeLayer *_scalableTextLayer;
@property (nonatomic, setter=_setTextFrameSize:) struct CGSize { double width; double height; } _textFrameSize;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL shouldShadowTitleText;

- (id)initWithCoder:(id)a0;
- (void)_commonCAMModeDialItemInitialization;
- (struct CGColor { } *)_textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGPath { } *)_pathForAttributedString:(struct __CFAttributedString { } *)a0;
- (void).cxx_destruct;
- (void)_updateScalableTextPathFromAttributedTitle;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end
