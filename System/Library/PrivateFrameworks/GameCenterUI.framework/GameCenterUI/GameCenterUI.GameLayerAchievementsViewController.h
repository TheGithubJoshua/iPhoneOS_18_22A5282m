@class NSArray;

@interface GameCenterUI.GameLayerAchievementsViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ preferredLargeTitleDisplayMode;
    void /* unknown type, empty encoding */ bootstrapPresenter;
    void /* unknown type, empty encoding */ content;
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ childPresenters;
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ impressionsCalculator;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ scrollDirection;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCollectionViewLayout:(id)a0;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
