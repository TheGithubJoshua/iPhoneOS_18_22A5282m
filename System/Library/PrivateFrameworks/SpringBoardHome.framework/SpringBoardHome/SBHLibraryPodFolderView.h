@class NSString, BSUIScrollView, NSArray, SBHFeatherBlurNavigationBar;
@protocol UIScrollViewDelegate, BSUIScrollViewDelegate;

@interface SBHLibraryPodFolderView : SBFolderView <SBIconListModelObserver, SBIconListLayoutObserver, UINavigationBarDelegate, SBHLibrarySearchControllerContentViewControllerScrollViewProvider> {
    BOOL _usingCenteredLayout;
    double _minimumNavBarHeight;
    double _maximumNavBarHeight;
    NSArray *_podScrollViewGradientMaskLayers;
}

@property (readonly, nonatomic) BSUIScrollView *podScrollView;
@property (readonly, nonatomic) SBHFeatherBlurNavigationBar *navigationBar;
@property (nonatomic) BOOL centersContentIfPossible;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BSUIScrollViewDelegate> librarySearchControllerScrollViewDelegate;

+ (id)defaultIconLocation;
+ (Class)defaultIconListViewClass;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scrollingInteractionVisibleInsets;
- (void)iconListViewDidChangeBoundsSize:(id)a0;
- (void)_orientationDidChange:(long long)a0;
- (void)updateAccessibilityTintColors;
- (struct CGSize { double x0; double x1; })_iconListViewSize;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (double)_pageWidth;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (void)scrollViewWillBeginScrolling:(id)a0;
- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (long long)positionForBar:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)_positionNavBarAbuttingListView;
- (struct CGSize { double x0; double x1; })_iconSpacingForIconListView;
- (void)_layoutNavBarAndContentInsets;
- (void)setFolder:(id)a0;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_updateScrollViewContentSize;
- (void)_zeroFirstListViewOriginIfNeeded;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsforNavigationBar:(id)a0;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIconListAtIndex:(unsigned long long)a0;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (void)_configureIconListView:(id)a0;
- (void)_layoutSubviews;
- (BOOL)_animatesRotationForAllVisibleIconListViews;
- (long long)iconVisibilityHandling;
- (BOOL)_shouldUseScrollableIconViewInteraction;
- (struct CGSize { double x0; double x1; })_scrollViewContentSize;
- (void)_enumerateScrollableIconViewsUsingBlock:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_configureScrollingInteraction:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isLibraryPodCategoryFolderView;
- (struct CGPoint { double x0; double x1; })_restingContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateVisibleRowRange;
- (void)setLegibilitySettings:(id)a0;

@end
