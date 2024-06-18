@class NSString, NSArray, UICollectionView, TIKeyboardCandidate, UIView, NSIndexPath, TUICandidateLayout;
@protocol TUICandidateGridDelegate, TUICandidateViewStyle;

@interface TUICandidateGrid : UIView <TUICandidateLayoutDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) TUICandidateLayout *singleRowLayout;
@property (retain, nonatomic) TUICandidateLayout *multiRowLayout;
@property (readonly, nonatomic) double rowHeight;
@property (retain, nonatomic) NSIndexPath *firstVisibleIndexPath;
@property (nonatomic) double lastUserSelectedCursorX;
@property (nonatomic) double selectedRowY;
@property (retain, nonatomic) UIView *selectedRowHighlightView;
@property (nonatomic) BOOL collectionViewLayoutWasSkipped;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) id<TUICandidateViewStyle> stylePending;
@property (nonatomic) double maximumRowHeight;
@property (retain, nonatomic) NSArray *candidateGroups;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath;
@property (readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
@property (readonly, nonatomic) NSArray *visibleCandidates;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) long long rowType;
@property (nonatomic) BOOL candidateNumberEnabled;
@property (retain, nonatomic) UIView *customHeader;
@property (weak, nonatomic) id<TUICandidateGridDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } arrowButtonSize;
@property (nonatomic) BOOL suppressCollectionViewLayout;
@property (readonly, nonatomic) NSIndexPath *firstIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSafariPasswordSuggestionCandidate:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)_sectionIndexTitlesForCollectionView:(id)a0;
- (void)scrollToTop;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionViewLayout;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGPoint { double x0; double x1; })collectionView:(id)a0 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)commonInit;
- (id)_collectionView:(id)a0 indexPathForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)handleNumberKey:(unsigned long long)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)hasCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)scrollViewDidChangeContentSize:(id)a0;
- (id)indexPathForCandidate:(id)a0;
- (long long)rowForCandidate:(id)a0;
- (void)setSelectedIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (unsigned long long)slottedCandidatesCount;
- (long long)viewOffsetForCandidate:(id)a0;
- (void)addAppCandidatesRenderSignposts;
- (unsigned long long)autofillExtraCandidatesCount;
- (BOOL)canExpandCandidateGrid;
- (id)candidateAtIndexPath:(id)a0;
- (unsigned long long)candidateNumberForIndexPath:(id)a0;
- (unsigned long long)candidateNumberInHorizontalLayoutForIndexPath:(id)a0;
- (unsigned long long)candidateNumberInVerticalLayoutForIndexPath:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 widthForGroupHeaderInSection:(long long)a2;
- (void)didMoveHighlightFrame;
- (void)forceUpdateVisibleCells;
- (id)indexPathForCandidateNumber:(unsigned long long)a0;
- (id)indexPathForVerticalCandidateNumber:(unsigned long long)a0;
- (id)indexPathInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)indexPathIsFullyVisible:(id)a0;
- (BOOL)indexPathIsValid:(id)a0;
- (id)indexPathsForSelectedRow;
- (id)indexPathsInTheRowThatContainsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)lastIndexPath;
- (long long)numberOfNonPartialCandidatesInSection:(long long)a0;
- (long long)numberOfTransliterationCandidatesInSection:(long long)a0;
- (void)scrollToCandidateAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)scrollToFirstCandidate;
- (void)setRowType:(long long)a0 animated:(BOOL)a1;
- (void)setRowType:(long long)a0 options:(unsigned long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setRowType:(long long)a0 options:(unsigned long long)a1 style:(id)a2 animated:(BOOL)a3 animator:(id)a4 completion:(id /* block */)a5;
- (void)setSlottedSeparatorHidden:(BOOL)a0 inCollectionView:(id)a1 nearHighlightItemAtIndexPath:(id)a2;
- (void)setStyle:(id)a0 reload:(BOOL)a1;
- (BOOL)showingSlottedCandidates;
- (void)updateBounce;
- (void)updateContentInset;
- (void)updateIndex;
- (void)updateSelectedRowHighlightView;
- (id)visibleAttributes;

@end