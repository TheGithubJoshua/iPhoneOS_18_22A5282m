@interface SeymourUI.ProgramBrickItemCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentContainerSize;
    void /* unknown type, empty encoding */ currentLayout;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ programContentView;
    void /* unknown type, empty encoding */ supportsScrolling;
    void /* unknown type, empty encoding */ vibrantShadowView;
    void /* unknown type, empty encoding */ oldWidth;
}

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
