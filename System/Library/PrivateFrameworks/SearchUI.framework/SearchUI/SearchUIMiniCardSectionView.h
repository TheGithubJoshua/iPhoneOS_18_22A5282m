@class SearchUILabel, SearchUIImageView;

@interface SearchUIMiniCardSectionView : SearchUICardSectionView

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUILabel *titleLabel;
@property (retain) SearchUILabel *subtitleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)setupContentView;
- (void)updateImplicitVisibilityForWatchNowCardSection:(id)a0 animated:(BOOL)a1;

@end
