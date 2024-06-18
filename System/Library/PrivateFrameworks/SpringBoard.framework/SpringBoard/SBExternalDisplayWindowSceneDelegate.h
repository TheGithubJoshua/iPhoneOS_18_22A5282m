@class SBWindowSceneStatusBarSettingsAssertion, SBTraitsExternalDisplayPipelineManager, SBTraitsWindowParticipantDelegate, SBExternalDisplayWallpaperController, FBApplicationUpdateScenesTransaction, SBExternalDisplayCoverSheetController;

@interface SBExternalDisplayWindowSceneDelegate : SBAbstractWindowSceneDelegate {
    FBApplicationUpdateScenesTransaction *_transaction;
    SBTraitsWindowParticipantDelegate *_traitsWindowParticipantsDelegate;
    SBTraitsExternalDisplayPipelineManager *_traitsExternalPipelineManager;
    SBExternalDisplayWallpaperController *_wallpaperController;
    SBExternalDisplayCoverSheetController *_coverSheetController;
    SBWindowSceneStatusBarSettingsAssertion *_showStatusBarAssertion;
}

+ (id)_individuallyManagedRoles;

- (id)init;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (void)sceneDidDisconnect:(id)a0;
- (id)_traitsDelegateForWindowRole:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)_pipelineManager;
- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;

@end
