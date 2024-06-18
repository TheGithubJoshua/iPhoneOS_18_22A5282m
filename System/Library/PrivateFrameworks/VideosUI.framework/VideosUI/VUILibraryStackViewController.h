@class VUILibraryStackView, NSString, UICollectionView, NSIndexPath;

@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate> {
    double _lastAppearWidth;
    BOOL _requiresRelayout;
    NSIndexPath *_focusedIndexPath;
}

@property (readonly, nonatomic) VUILibraryStackView *stackView;
@property (readonly, nonatomic) UICollectionView *stackCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollToTop;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (void)_invalidateLayouts;
- (void)_updateNavigationBarPadding;
- (void)configureWithCollectionView:(id)a0;

@end
