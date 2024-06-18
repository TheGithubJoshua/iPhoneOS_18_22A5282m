@class PUPhotoKitTrashActionPerformer, NSString;

@interface PUPhotoKitRemoveSharingSuggestionAssetActionPerformer : PUPXPhotoKitActionPerformerAdapter <PUAssetActionPerformerDelegate>

@property (retain, nonatomic) PUPhotoKitTrashActionPerformer *trashActionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pxActionPerformerClass;

- (void)performUserInteractionTask;
- (BOOL)assetActionPerformer:(id)a0 presentViewController:(id)a1;
- (void).cxx_destruct;
- (id)undoManagerForAssetActionPerformer:(id)a0;
- (BOOL)assetActionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performTrashTask;
- (id)pxActionType;

@end
