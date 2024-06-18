@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCSoundDetectionModuleViewControllerDelegate;

@interface AXCCSoundDetectionModuleViewController : CCUIMenuModuleViewController {
    CCUIContentModuleContext *_contentModuleContext;
}

@property (retain, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCSoundDetectionModuleViewControllerDelegate> soundDetectionDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)contentModuleContext;
- (void)setContentModuleContext:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)_confirmedEnableSoundDetection:(BOOL)a0;
- (void)_axSettingsDidChange;
- (double)_calculateAmountOfVisibleItems;
- (void)_configureMenuItems;
- (id)_confirmationAlertController;
- (void)_confirmedToggleSoundDetectionStatusForCustomType:(id)a0;
- (void)_confirmedToggleSoundDetectionStatusForType:(id)a0;
- (BOOL)_isHeySiriRunning;
- (BOOL)_needsHeySiriConfirmationAlert;
- (void)_showConfirmationAlertForCustomType:(id)a0;
- (void)_showConfirmationAlertForType:(id)a0;
- (void)_toggleSoundDetectionStatusForCustomType:(id)a0;
- (void)_toggleSoundDetectionStatusForType:(id)a0;
- (void)_updateSoundDetectionState;

@end
