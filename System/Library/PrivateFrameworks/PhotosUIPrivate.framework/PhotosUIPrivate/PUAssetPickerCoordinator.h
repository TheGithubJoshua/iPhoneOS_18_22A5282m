@class NSString, PUPickerConfiguration, PUAssetPickerManagedViewController, PXSelectionCoordinator, PUPhotosGridDownloadHelper, NSMutableDictionary, PUAssetPickerActivityProgressController, PUPhotoPickerResizeTaskDescriptorViewModel, UIViewController, PXLoadingStatusManager;
@protocol PUPhotoPicker, PUAssetPickerCoordinatorActionHandler;

@interface PUAssetPickerCoordinator : NSObject <PUUIImageViewControllerCancellationDelegate, PUUIImageViewControllerFileResizingDelegate, PUAssetPickerContainerControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PUAssetPickerManagedViewController *managedViewController;
@property (readonly, weak, nonatomic) id<PUAssetPickerCoordinatorActionHandler> coordinatorActionHandler;
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper;
@property (readonly, nonatomic) NSMutableDictionary *downloadProgresses;
@property (readonly, nonatomic) PUAssetPickerActivityProgressController *progressController;
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (nonatomic) BOOL selectionDidChange;
@property (readonly, weak, nonatomic) id<PUPhotoPicker> photoPicker;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (copy, nonatomic) id /* block */ selectionDidChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_assetCanPlay:(id)a0;
+ (BOOL)_editingEnabled:(id)a0;
+ (id)_extraArgumentsForResizeTaskDescriptor:(id)a0;
+ (void)_logPhotosPickerPresentedForClient:(id)a0;
+ (BOOL)_shouldTreatAssetAsLivePhoto:(id)a0 photoPicker:(id)a1 configuration:(id)a2;
+ (BOOL)_skipSelectionConfirmation:(id)a0;
+ (BOOL)_viewImageBeforeSelectingEnabled:(id)a0;
+ (BOOL)pu_legacy_shouldDownloadVideoComplement:(id)a0 configuration:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)searchWithString:(id)a0;
- (void)presentAlertController:(id)a0;
- (void)selectionCoordinator:(id)a0 didUpdateSelectedObjectsWithRemovedOIDs:(id)a1 insertedOIDs:(id)a2;
- (void)selectionCoordinator:(id)a0 willUpdateSelectedObjectsForSnapshot:(id)a1 withRemovedIndexes:(id)a2 insertedIndexes:(id)a3;
- (void)pu_legacy_selectMultipleAssets:(id /* block */)a0;
- (void)updateProgressControllerMessage;
- (void)_completeMultipleSelection:(id)a0;
- (void)_completeSingleSelection:(id)a0 showConfirmation:(BOOL)a1;
- (id)_createFetchResultUsingSelectedObjectIDs;
- (id)_downscalingTargetDimension;
- (id)_fileSizeActionsForAssets:(id)a0;
- (void)_logPhotosAccessWithNonEmptyUserSelection;
- (void)_presentAssetExplorer;
- (void)_presentViewControllerDismissingPresentedViewControllerIfNeeded:(id)a0;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 canPerformActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (void)assetExplorerReviewScreenViewController:(id)a0 didPerformCompletionAction:(unsigned long long)a1 withSelectedAssetUUIDs:(id)a2 livePhotoDisabledAssetUUIDs:(id)a3 substituteAssetsByUUID:(id)a4;
- (id)assetExplorerReviewScreenViewController:(id)a0 fileSizeMenuForSelectedUUIDs:(id)a1;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)a0;
- (id)assetsForResizing;
- (id)beginShowingProgressForAsset:(id)a0 inCollection:(id)a1;
- (void)cancelProgressController;
- (void)containerController:(id)a0 didTapAddButton:(id)a1;
- (void)containerController:(id)a0 didTapBatchedItems:(id)a1;
- (void)containerController:(id)a0 didTapCancelButton:(id)a1;
- (void)containerController:(id)a0 didTapClearButton:(id)a1;
- (void)containerController:(id)a0 didTapShowSelectedButton:(id)a1;
- (void)containerControllerDidAppear:(id)a0;
- (void)deselectAssetsWithIdentifiers:(id)a0;
- (void)emitDidFinishPickingAnalytics;
- (void)endShowingProgressWithIdentifier:(id)a0 succeeded:(BOOL)a1 canceled:(BOOL)a2 error:(id)a3;
- (void)imageViewControllerDidCancel:(id)a0;
- (void)imageViewControllerDidConfirmSelection:(id)a0;
- (id)imageViewControllerFileSizeMenuActions:(id)a0;
- (id)initWithConfiguration:(id)a0 coordinatorActionHandler:(id)a1 loadingStatusManager:(id)a2;
- (id)initWithPHConfiguration:(id)a0 coordinatorActionHandler:(id)a1 loadingStatusManager:(id)a2;
- (id)initWithPUConfiguration:(id)a0 coordinatorActionHandler:(id)a1 loadingStatusManager:(id)a2;
- (id)initWithPhotoPicker:(id)a0 mediaTypes:(id)a1 connection:(id)a2;
- (void)moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (BOOL)popViewController;
- (id)ppt_scrollTestViewController;
- (void)presentProgressControllerFromViewController:(id)a0 progress:(id)a1;
- (void)pu_legacy_cancelPicker;
- (void)pu_legacy_didDisplayPicker;
- (void)pu_legacy_selectSingleAsset;
- (void)pu_legacy_selectSingleAssetWithFileResizing;
- (void)replaceConfirmationButtonWithActivityIndicator:(BOOL)a0;
- (void)updateProgressWithIdentifier:(id)a0 withValue:(double)a1;
- (void)updateUsesEmbeddedMessagesLayout:(BOOL)a0;

@end
