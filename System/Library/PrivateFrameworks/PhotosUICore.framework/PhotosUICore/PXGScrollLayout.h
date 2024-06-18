@class PXGLayout, NSString, NSNumber, PXGScrollViewModel;
@protocol PXGScrollLayoutDelegate;

@interface PXGScrollLayout : PXGLayout <PXGAnchorDelegate, PXGViewSource, PXGScrollViewContainerDelegate, PXChangeObserver, PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _scrollViewSpriteIndex;
    unsigned short _scrollViewMediaVersion;
    BOOL _isUpdatingContentLayout;
    struct { BOOL willBeginScrolling; BOOL didScroll; BOOL willEndScrollingWithVelocityTargetContentOffset; BOOL didEndScrolling; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (nonatomic) BOOL wantsScrollView;
@property (readonly, nonatomic) BOOL isScrolling;
@property (retain, nonatomic) PXGLayout *contentLayout;
@property (weak, nonatomic) id<PXGScrollLayoutDelegate> delegate;
@property (retain, nonatomic) NSNumber *fixedWidth;
@property (retain, nonatomic) NSNumber *fixedHeight;
@property (nonatomic) float scrollViewSpriteZPosition;
@property (nonatomic) long long scrollDecelerationRate;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL draggingPerformsScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)axContainingScrollViewForAXGroup:(id)a0;
- (id)init;
- (id)layoutForItemChanges;
- (void)_updateContentLayout;
- (void)stopScrolling;
- (void)referenceSizeDidChange;
- (struct CGPoint { double x0; double x1; })anchor:(id)a0 visibleRectOriginForProposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLayout:(id)a2;
- (void)setIsScrolling:(BOOL)a0;
- (void)_invalidateScrollView;
- (void)userInterfaceDirectionDidChange;
- (void)alphaDidChange;
- (void)safeAreaInsetsDidChange;
- (void)willUpdate;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void).cxx_destruct;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)contentSizeDidChange;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)scrollableAxis;
- (void)didUpdate;
- (void)screenScaleDidChange;
- (void)_invalidateContentLayout;
- (void)viewEnvironmentDidChange;
- (void)update;
- (void)isScrollingDidChange;
- (id)axSpriteIndexes;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateLocalContent;
- (void)_updateLocalContent;
- (BOOL)axShouldBeConsideredAsSubgroup;
- (void)contentLayoutDidChange;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (id)focusItemsForScrollViewContainer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithContentLayout:(id)a0;
- (long long)intrinsicScrollRegime;
- (void)lastScrollDirectionDidChange;
- (void)scrollViewContainerDidEndScrolling:(id)a0;
- (void)scrollViewContainerDidScroll:(id)a0;
- (void)scrollViewContainerWillBeginScrolling:(id)a0;
- (void)scrollViewContainerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
