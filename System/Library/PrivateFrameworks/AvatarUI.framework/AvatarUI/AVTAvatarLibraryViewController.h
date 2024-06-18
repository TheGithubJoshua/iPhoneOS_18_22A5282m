@class _AVTAvatarRecordImageProvider, AVTUIEnvironment, UICollectionView, NSString, AVTAvatarLibraryModel, UILongPressGestureRecognizer;
@protocol AVTAvatarLibraryViewControllerDelegate;

@interface AVTAvatarLibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarLibraryModelDelegate>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (readonly, nonatomic) AVTAvatarLibraryModel *model;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (weak, nonatomic) id<AVTAvatarLibraryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didLongPress:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)didTapDoneButton:(id)a0;
- (void)insertItemsAtIndexes:(id)a0 deleteItemsAtIndexes:(id)a1 reloadItemsAtIndexes:(id)a2;
- (void)didAddRecord:(id)a0;
- (void)didDeleteRecord:(id)a0;
- (void)didEditRecord:(id)a0;
- (void)didUpdateLibraryItems:(id)a0;
- (void)dismissController:(id)a0 completion:(id /* block */)a1;
- (id)initWithAvatarStore:(id)a0;
- (id)initWithAvatarStore:(id)a0 environment:(id)a1;
- (id)initWithModel:(id)a0 imageProvider:(id)a1 environment:(id)a2;
- (void)presentUIViewController:(id)a0 forItem:(id)a1;
- (void)presetEditorViewController:(id)a0;
- (BOOL)shouldUseLargeLayout;
- (void)updateVisibleHeaders;

@end
