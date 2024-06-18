@class UICollectionView, NSArray, LibraryItemController, WebBookmarkCollection, NSString, UICollectionViewDiffableDataSource, LibraryConfiguration;
@protocol LibraryViewControllerDelegate;

@interface LibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, LibraryContentObserver> {
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionView *_collectionView;
    struct { BOOL needsReload; BOOL animated; } _reloadFlags;
}

@property (weak, nonatomic) id<LibraryViewControllerDelegate> delegate;
@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (retain, nonatomic) LibraryConfiguration *configuration;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (retain, nonatomic) LibraryItemController *selectedItemController;
@property (retain, nonatomic) LibraryItemController *presentedItemController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)viewWillLayoutSubviews;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 performPrimaryActionForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSelection;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)librarySectionContentDidChange:(id)a0;
- (void)_applySnapshotForSection:(id)a0 animated:(BOOL)a1;
- (void)_collectionViewDidSelectItem:(id)a0 atIndexPath:(id)a1;
- (id)_diffableDataSourceForCollectionView:(id)a0;
- (void)_enumerateItemControllersWithBlock:(id /* block */)a0;
- (void)_reloadSectionControllersImmediatelyAnimated:(BOOL)a0;
- (id)_swipeActionsConfigurationForIndexPath:(id)a0;
- (void)reloadSectionControllersIfNeeded;
- (void)setNeedsReloadSectionControllersAnimated:(BOOL)a0;
- (void)updateSelectionByIgnoringExistingSelection:(BOOL)a0;

@end
