@interface PXPhotoKitAssetCollectionPlayMovieActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_systemImageName;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
