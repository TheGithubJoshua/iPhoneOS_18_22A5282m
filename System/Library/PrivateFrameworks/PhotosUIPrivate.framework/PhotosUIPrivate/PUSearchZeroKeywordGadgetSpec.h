@class PXExtendedTraitCollection;

@interface PUSearchZeroKeywordGadgetSpec : PXGadgetSpec {
    struct CGSize { double width; double height; } _layoutReferenceSize;
    PXExtendedTraitCollection *_traitCollection;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (id)initWithTraitCollection:(id)a0 scrollAxis:(long long)a1;
- (id)_contentInsetsInterpolator;

@end
