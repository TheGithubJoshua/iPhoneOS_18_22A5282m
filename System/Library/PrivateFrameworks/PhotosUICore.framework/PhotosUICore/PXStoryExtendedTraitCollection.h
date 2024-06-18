@class NSShadow;

@interface PXStoryExtendedTraitCollection : PXExtendedTraitCollection {
    double _displayScale;
    struct CGSize { double width; double height; } _layoutReferenceSize;
}

@property (readonly, nonatomic) double viewportCornerRadius;
@property (readonly, nonatomic) NSShadow *viewportShadow;
@property (readonly, nonatomic) double bottomTitleContentOffset;

- (struct CGSize { double x0; double x1; })layoutReferenceSize;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (long long)layoutOrientation;
- (void)performChanges:(id /* block */)a0;
- (void)setLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (void)setDisplayScale:(double)a0;
- (double)displayScale;
- (id)initWithLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1;
- (void).cxx_destruct;

@end
