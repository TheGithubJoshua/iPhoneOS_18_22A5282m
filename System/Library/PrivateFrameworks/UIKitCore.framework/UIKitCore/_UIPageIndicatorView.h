@interface _UIPageIndicatorView : UIImageView {
    struct CGSize { double width; double height; } _cachedSize;
}

@property (nonatomic) long long page;

- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (BOOL)isInvalidated;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForImage:(id)a0 withTraitCollection:(id)a1;
- (void)invalidate;
- (id)debugDescription;
- (void)prepare;
- (void)updateSymbolConfigurationForTraitCollection;

@end
