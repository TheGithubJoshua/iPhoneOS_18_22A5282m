@class NSString, MFHeaderLabelView, UIView;

@interface MFComposeHeaderView : UIView {
    id _delegate;
    UIView *_separator;
    UIView *_highlightBackgroundView;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (readonly, nonatomic) MFHeaderLabelView *labelView;
@property (nonatomic) BOOL showsHighlightWhenTouched;

+ (double)preferredHeight;
+ (double)separatorHeight;
+ (id)defaultFont;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutMarginsDidChange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)label;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)_automationID;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRect;
- (id)labelColor;
- (id)_baseAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleLabelBaselineAlignmentRectForLabel:(id)a0;
- (double)labelTopPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_exclusionRectForView:(id)a0 alongEdge:(unsigned long long)a1;
- (id)_highlightedBackgroundView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_recipientViewEdgeInsets;
- (BOOL)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (void)refreshPreferredContentSize;

@end
