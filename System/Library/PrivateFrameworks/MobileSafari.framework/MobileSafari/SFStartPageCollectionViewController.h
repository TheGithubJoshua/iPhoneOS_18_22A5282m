@class UIView, NSString, UITapGestureRecognizer, NSMapTable, UICollectionViewDiffableDataSource, UICollectionView, UIVisualEffectView, WBSStartPageSection, UIScrollView;
@protocol SFStartPageCollectionDataSource, SFStartPageVisualStyleProviding, WBSStartPagePreviewProviding, SFStartPageCollectionDelegate;

@interface SFStartPageCollectionViewController : UIViewController <UICollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDragDelegate_Private, UICollectionViewDropDelegate_Private, SFStartPageDataSourceObserving> {
    WBSStartPageSection *_cachedCustomizationSection;
    UICollectionViewDiffableDataSource *_collectionDataSource;
    UICollectionView *_collectionView;
    BOOL _hasActiveDrag;
    BOOL _hasAppliedInitialSnapshot;
    BOOL _hasDeferredUpdates;
    BOOL _hasMadeFirstCommit;
    double _keyboardBottomInset;
    long long _lastLayoutOrientation;
    double _lastLayoutWidth;
    UIVisualEffectView *_navigationBarBackdrop;
    UIView *_navigationBarSeparator;
    UIVisualEffectView *_statusBarBackdrop;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    id<SFStartPageVisualStyleProviding> _visualStyleProvider;
    NSMapTable *_contextMenuToItemIdentifierMap;
}

@property (weak, nonatomic) id<SFStartPageCollectionDataSource> dataSource;
@property (retain, nonatomic) id<SFStartPageCollectionDataSource> strongDataSource;
@property (weak, nonatomic) id<SFStartPageCollectionDelegate, WBSStartPagePreviewProviding> delegate;
@property (nonatomic) BOOL displaysSectionHeaders;
@property (nonatomic) BOOL hidesEmptyNavigationBar;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) BOOL wantsWallpaperHiddenForCurrentBackgroundStyle;
@property (readonly, nonatomic, getter=isTrackingDropSession) BOOL trackingDropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scrollDistance;
- (void)cancelGestures;
- (id)_currentSnapshot;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (void)_updateInteractionEnabled;
- (void)presentViewController:(id)a0 fromItemWithIdentifier:(id)a1;
- (id)collectionView:(id)a0 dropPreviewParametersForItemAtIndexPath:(id)a1;
- (void)reloadNavigationItemAnimated:(BOOL)a0;
- (void)reloadSection:(id)a0 animated:(BOOL)a1;
- (void)updateCollectionViewContentInset;
- (long long)_collectionView:(id)a0 dataOwnerForDropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (void)configureModelWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)collectionView:(id)a0 dropSessionDidEnter:(id)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)sections;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)scrollToTop;
- (BOOL)collectionView:(id)a0 dragSessionAllowsMoveOperation:(id)a1;
- (void)collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (id)initWithVisualStyleProvider:(id)a0;
- (id)_previewForCellAtIndexPath:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (id)collectionView:(id)a0 dragPreviewParametersForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (struct { double x0; long long x1; double x2; double x3; })_siteIconLayoutForEnvironment:(id)a0 sectionInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)_canDrop;
- (void)collectionView:(id)a0 dropSessionDidEnd:(id)a1;
- (void)collectionView:(id)a0 dropSessionDidExit:(id)a1;
- (unsigned long long)_collapsedCapacityForSection:(id)a0;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)_siteIconSectionLayoutForEnvironment:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)_updateNavigationItemAnimated:(BOOL)a0;
- (id)_reuseIdentifierForCellWithIdentifier:(id)a0 indexPath:(id)a1;
- (void)keyboardDidChangeFrame:(id)a0;
- (void)viewDidLoad;
- (id)_bannerSectionLayoutForEnvironment:(id)a0 includingHeader:(BOOL)a1;
- (void)_applyCurrentSnapshotAnimatingDifferences:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_collectionView:(id)a0 supplementaryViewWithKind:(id)a1 forIndexPath:(id)a2;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsets;
- (id)_richLinkSectionLayoutForEnvironment:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)_effectiveLayoutWidth;
- (void).cxx_destruct;
- (void)_setUpDataSource:(id)a0;
- (void)_configureHeader:(id)a0 forSection:(id)a1 atIndexPath:(id)a2;
- (void)navigationBarPositionDidChange;
- (id)_dragPreviewParametersForSourceView:(id)a0 atIndexPath:(id)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_configureCell:(id)a0 forIdentifier:(id)a1 indexPath:(id)a2;
- (id)_customizationSection;
- (id)_layoutForSectionAtIndex:(long long)a0 inEnvironment:(id)a1;
- (id)_makeCollectionViewLayout;
- (id)_siteRowSectionLayoutForEnvironment:(id)a0;
- (void)viewLayoutMarginsDidChange;
- (void)_updateCustomTopBackdrops;
- (unsigned long long)_itemLimitForSection:(id)a0;
- (BOOL)collectionView:(id)a0 canHandleDropSession:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)_siteCardSectionLayoutForEnvironment:(id)a0;
- (BOOL)_shouldShowContextMenuForCellAtIndexPath:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_receivedTapToDismissGesture;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)_sectionForIdentifier:(id)a0;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)_updateInteractionEnabledForView:(id)a0;
- (id)_toggleExpandedActionForSectionIdentifier:(id)a0;
- (void)updateBackgroundStyle;

@end
