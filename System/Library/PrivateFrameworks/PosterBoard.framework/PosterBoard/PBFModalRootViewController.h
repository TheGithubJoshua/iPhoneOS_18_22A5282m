@class PBFPosterExtensionDataStore, UIScene, NSString, PBFPosterConfigurationUpdateResult, PRMutablePosterDescriptor, PBFGalleryMutableDataProvider, PBFLegacyPosterMigrationHelper;
@protocol PBFBehaviorAssertionProviding, PRUIModalEntryPoint, BSInvalidatable;

@interface PBFModalRootViewController : UIViewController <_UISceneComponentProviding, _UISceneSettingsDiffAction, _UISceneBSActionHandler, BSDescriptionProviding, UISheetPresentationControllerDelegate, PBFFocusPosterSelectionViewControllerDelegate, PBFPosterSelectionViewControllerDelegate, PBFPosterRackCollectionViewControllerDelegate, PREditingSceneViewControllerDelegate, PBFPosterGalleryPreviewViewControllerDelegate, PBFPosterEditingIngestionManagerDelegate, PREditingSceneViewControllerObserver> {
    UIScene *_parentScene;
    BOOL _invalidated;
    BOOL _didAppearOnce;
    PRMutablePosterDescriptor *_temporaryDescriptor;
    PBFPosterConfigurationUpdateResult *_temporaryConfigurationUpdateResult;
    id<PRUIModalEntryPoint> _entryPoint;
    PBFGalleryMutableDataProvider *_galleryDataProvider;
    PBFLegacyPosterMigrationHelper *_legacyMigrationHelper;
    id<BSInvalidatable> _snapshotterInUseAssertion;
    id<BSInvalidatable> _editingSessionInProgressAssertion;
    PBFPosterExtensionDataStore *_dataStore;
    id<PBFBehaviorAssertionProviding> _behaviorAssertionProvider;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_topButtonLayout;
+ (void)prewarmTopButtonLayout;

- (void)presentationControllerDidDismiss:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)presentationControllerWillDismiss:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)_reload;
- (void)viewDidDisappear:(BOOL)a0;
- (id)succinctDescription;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (id)initWithScene:(id)a0;
- (id)_actionHandlersForScene:(id)a0;
- (void)editingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)editingSceneViewControllerDidFinalize:(id)a0;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForEditingSceneViewController:(id)a0;
- (void)_presentGallery;
- (void)_createLegacyMigrationHelperWithConfiguration:(id)a0;
- (void)_displayViewControllerAsSheet:(id)a0;
- (void)_galleryEditingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)_handleSheetDidDismissWithResponse:(id)a0;
- (void)_handleSheetWillDismissWithResponse:(id)a0;
- (BOOL)_isPhotosEntryPoint;
- (void)_logEditWithEditingViewController:(id)a0 posterUUID:(id)a1 lastModifiedDate:(id)a2;
- (void)_performLegacyMigration;
- (id)_posterLimitExceededAlertWithButtonActionHandler:(id /* block */)a0;
- (void)_presentEditingForNewPosterFromConfiguration:(id)a0;
- (void)_presentEditingForPosterConfiguration:(id)a0;
- (void)_presentEditingForPosterConfiguration:(id)a0 sessionInfo:(id)a1;
- (void)_presentEditingSceneViewController:(id)a0;
- (void)_presentLegacyAddNewAlert;
- (void)_presentLegacyMigrationAlert;
- (void)_presentLegacyMigrationFailedAlert;
- (void)_presentPartialMigrationPrompt;
- (void)_setupGalleryDataProviderIfNeeded;
- (void)_standaloneEditingSceneViewController:(id)a0 userDidDismissWithAction:(long long)a1 updatedConfiguration:(id)a2 updatedConfiguredProperties:(id)a3 completion:(id /* block */)a4;
- (void)dataStoreDidTearDown:(id)a0;
- (void)editingIngestionManager:(id)a0 didAccept:(id)a1 userChoice:(long long)a2;
- (void)focusPosterSelectionViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)focusPosterSelectionViewController:(id)a0 willDismissWithResponse:(id)a1;
- (void)galleryViewController:(id)a0 didSelectPreview:(id)a1 fromPreviewView:(id)a2;
- (void)galleryViewController:(id)a0 willDisplayPreview:(id)a1;
- (id)galleryViewController:(id)a0 willUseAnimationController:(id)a1 forDismissingEditingViewControllerWithAction:(long long)a2;
- (id)initWithScene:(id)a0 dataStore:(id)a1 behaviorAssertionProvider:(id)a2;
- (void)posterExtensionDataStore:(id)a0 didUpdateGalleryConfiguration:(id)a1;
- (void)posterRackCollectionViewControllerDidPressCancel:(id)a0;
- (BOOL)posterRackCollectionViewControllerDidPressDone:(id)a0;
- (void)posterSelectionViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)posterSelectionViewController:(id)a0 willDismissWithResponse:(id)a1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })topButtonLayoutForFocusPosterSelectionViewController:(id)a0;

@end
