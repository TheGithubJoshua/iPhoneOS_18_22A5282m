@interface DBIconListPageControl : SBIconListPageControl

@property (nonatomic) BOOL showsButtons;

- (double)_indicatorSpacing;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)defaultHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
