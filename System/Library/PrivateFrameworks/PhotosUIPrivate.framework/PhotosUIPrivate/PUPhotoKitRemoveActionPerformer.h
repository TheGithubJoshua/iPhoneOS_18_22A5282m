@class NSDictionary, PUPhotoKitTrashActionPerformer, NSString;

@interface PUPhotoKitRemoveActionPerformer : PUPhotoKitActionPerformer <PUAssetActionPerformerDelegate>

@property (readonly, nonatomic) BOOL shouldShowConfirmation;
@property (retain, nonatomic) NSDictionary *fetchResultsByAssetCollection;
@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (void).cxx_destruct;
- (id)undoManagerForAssetActionPerformer:(id)a0;
- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)performBackgroundTask;
- (void)_performTrashTask;

@end