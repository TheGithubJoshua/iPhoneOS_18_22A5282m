@interface SeymourUI.TVDetailDescriptionHeaderCell : SeymourUI.TVFloatingContentCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textViewHeightConstraint;
    void /* unknown type, empty encoding */ textViewPaddingConstraints;
    void /* unknown type, empty encoding */ textViewWidthConstraint;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end