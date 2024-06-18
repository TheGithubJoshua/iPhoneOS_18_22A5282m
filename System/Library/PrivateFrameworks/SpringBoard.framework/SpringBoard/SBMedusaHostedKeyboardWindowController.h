@class UIWindow, NSString, NSHashTable, SBWindowScene, FBSSceneClientSettingsDiffInspector;

@interface SBMedusaHostedKeyboardWindowController : NSObject <FBSceneObserver, BSInvalidatable> {
    NSHashTable *_observers;
    SBWindowScene *_windowScene;
    FBSSceneClientSettingsDiffInspector *_keyboardLayersClientSettingsDiffInspector;
}

@property (readonly, nonatomic) UIWindow *medusaHostedKeyboardWindow;
@property (readonly, nonatomic, getter=isUsingMedusaHostedKeyboardWindow) BOOL isUsingMedusaHostedKeyboardWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (BOOL)shouldKeyboardBeWindowSizedForHostWithIdentity:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_doObserverCalloutWithBlock:(id /* block */)a0;
- (BOOL)isKeyboardVisibleForSpringBoard;
- (id)_keyboardLayersClientSettingsDiffInspector;
- (id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(unsigned long long)a0 windowLevel:(double)a1;
- (void)updateMedusaHostedKeyboardWindow;
- (void)updateMedusaHostedKeyboardWindowForScene:(id)a0 isForeground:(BOOL *)a1;

@end
