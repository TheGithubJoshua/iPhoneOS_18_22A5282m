@interface SeymourUI.GuidedWorkoutBrickRowCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ showSeparator;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ downloadButton;
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkViewWidthConstraint;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ oldWindowSize;
}

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)downloadButtonTapped:(id)a0;

@end