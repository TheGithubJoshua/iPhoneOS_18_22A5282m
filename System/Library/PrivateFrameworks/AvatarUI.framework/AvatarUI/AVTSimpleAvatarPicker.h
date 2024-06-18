@class UIView, NSString, _AVTAvatarRecordImageProvider, AVTRenderingScope, NSMutableDictionary, AVTEdgeDisappearingCollectionViewLayout, AVTViewSessionProvider, UICollectionView, AVTAvatarPickerDataSource, AVTImageStore, AVTSimpleAvatarPickerHeaderView;
@protocol AVTPresenterDelegate, AVTStickerViewControllerImageDelegate, AVTAvatarPickerDelegate, AVTStickerTaskScheduler;

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AVTEdgeDisappearingCollectionViewLayout *collectionViewLayout;
@property (retain, nonatomic) AVTAvatarPickerDataSource *dataSource;
@property (retain, nonatomic) AVTImageStore *imageStore;
@property (retain, nonatomic) NSMutableDictionary *itemsToTasksMap;
@property (readonly, nonatomic) id<AVTStickerTaskScheduler> taskScheduler;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider;
@property (readonly, nonatomic) AVTViewSessionProvider *viewSessionProvider;
@property (readonly, nonatomic) AVTRenderingScope *renderingScope;
@property (weak, nonatomic) AVTSimpleAvatarPickerHeaderView *headerView;
@property (nonatomic) BOOL allowEditing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (weak, nonatomic) id<AVTStickerViewControllerImageDelegate> imageDelegate;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate;
@property (weak, nonatomic) id<AVTAvatarPickerDelegate> avatarPickerDelegate;

- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)loadView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })itemSize;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)canCreateAvatar;
- (void)avatarEditorViewController:(id)a0 didFinishWithAvatarRecord:(id)a1;
- (void)avatarEditorViewControllerDidCancel:(id)a0;
- (void)reloadDataSource;
- (id)actionsModelForRecord:(id)a0;
- (id)avatarActionsViewController:(id)a0 recordUpdateForDeletingRecord:(id)a1;
- (void)avatarActionsViewControllerDidFinish:(id)a0;
- (void)cancelCurrentRenderingTaskForRecordItem:(id)a0;
- (id)currentCellForRecordItem:(id)a0 atIndexPath:(id)a1 displaySessionUUID:(id)a2 previousCell:(id)a3;
- (id /* block */)currentRenderingTaskForRecordItem:(id)a0;
- (void)deselectPreviousSelectedItemExcludingIndexPath:(id)a0;
- (void)headerViewButtonPressed;
- (long long)indexForSelectedAvatar;
- (id)initWithDataSource:(id)a0 recordImageProvider:(id)a1 avtViewSessionProvider:(id)a2 taskScheduler:(id)a3 allowEditing:(BOOL)a4;
- (id)initWithStore:(id)a0 environment:(id)a1 allowAddItem:(BOOL)a2;
- (BOOL)isItemAtIndexPathOffscreen:(id)a0;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize { double x0; double x1; })a0;
- (void)presentActionsForAvatarForPPT:(id)a0;
- (void)presentActionsForAvatarRecord:(id)a0;
- (void)presentMemojiEditorForCreation;
- (void)registerRenderingTask:(id /* block */)a0 forRecordItem:(id)a1;
- (void)renderThumbnailsIfNeeded;
- (void)scheduleRenderingTask:(id /* block */)a0 forRecordItem:(id)a1;
- (void)selectAvatarRecordWithIdentifier:(id)a0 animated:(BOOL)a1;
- (id)selectedAvatar;
- (BOOL)shouldShowHeaderButton;
- (void)unregisterCurrentRenderingTaskForRecordItem:(id)a0;
- (void)updateCell:(id)a0 withImage:(id)a1 animated:(BOOL)a2;
- (void)updateHeaderButtonForSelectedAvatar:(id)a0 invalidateLayout:(BOOL)a1 animated:(BOOL)a2;
- (id)viewForAddItem;
- (void)wrapAndPresentViewController:(id)a0 animated:(BOOL)a1;

@end