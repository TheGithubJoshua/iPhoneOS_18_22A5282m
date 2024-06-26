@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) long long actionZoomLevel;

- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activityType;
- (id)activitySystemImageName;
- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
