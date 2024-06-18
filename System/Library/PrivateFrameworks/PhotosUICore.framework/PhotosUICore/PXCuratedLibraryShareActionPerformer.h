@interface PXCuratedLibraryShareActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activityType;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;

@end
