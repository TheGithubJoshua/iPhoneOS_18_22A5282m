@class SearchUICardSectionView, NUIContainerBoxView;

@interface SearchUICardSectionCollectionViewCell : SearchUICollectionViewCell

@property (retain) NUIContainerBoxView *boxView;
@property (retain) SearchUICardSectionView *cardSectionView;

- (void)updateWithRowModel:(id)a0;
- (void)setDelegate:(id)a0;
- (id)leadingView;
- (void).cxx_destruct;
- (id)leadingTextView;
- (id)embeddedViewController;
- (id)sizingView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;
- (void)updateRoundedCornersForView:(id)a0 cornerMask:(unsigned long long)a1;

@end
