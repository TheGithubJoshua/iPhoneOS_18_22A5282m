@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCShortcutModuleViewControllerDelegate;

@interface AXCCShortcutModuleViewController : CCUIMenuModuleViewController {
    BOOL _suppressGuidedAccess;
    BOOL _moduleNeedsLiveUpdates;
    CCUIContentModuleContext *_contentModuleContext;
}

@property (weak, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCShortcutModuleViewControllerDelegate> shortcutDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)contentModuleContext;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setContentModuleContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_hasScreenSwitch;
- (void)_updateShortcutActionsIfVisible;
- (id)_menuItemForOption:(id)a0;
- (id)_menuItemOpenAccessibilityShortcutSettings;
- (id)_titlesForVisibleShortcuts;
- (void)_toggleOption:(long long)a0;
- (void)_updateShortcutActions;
- (void)_updateShortcutActions:(BOOL)a0;
- (BOOL)switchControlRendersDeviceUnusable;
- (id)visibleShortcuts;

@end
