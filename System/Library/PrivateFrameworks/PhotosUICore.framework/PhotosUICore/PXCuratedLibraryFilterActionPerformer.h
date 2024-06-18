@class NSString, PXUIFilterController;

@interface PXCuratedLibraryFilterActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) PXUIFilterController *filterController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activityType;
- (void)filterController:(id)a0 libraryFilterStateChanged:(id)a1;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (void)filterControllerDidClose:(id)a0;
- (id)libraryFilterHiddenTypesForFilterController:(id)a0;
- (void).cxx_destruct;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (BOOL)_isAlreadyDone;
- (BOOL)performerResetsAfterCompletion;

@end
