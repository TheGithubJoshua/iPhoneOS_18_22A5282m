@interface VideosUI.PaginatedSwipingContainerView : VUIBaseView {
    void /* unknown type, empty encoding */ metadataPresenter;
    void /* unknown type, empty encoding */ mediaViewOffset;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ mediaView;
    void /* unknown type, empty encoding */ metadataView;
}

- (BOOL)accessibilityScroll:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end