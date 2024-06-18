@interface PXCuratedLibraryToggleAspectFitActionPerformer : PXCuratedLibraryActionPerformer

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)initWithViewModel:(id)a0;
- (id)activityType;
- (id)activitySystemImageName;
- (void)performActionWithCompletionHandler:(id /* block */)a0;

@end
