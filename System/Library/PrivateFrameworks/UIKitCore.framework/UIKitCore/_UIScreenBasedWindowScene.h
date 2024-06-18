@class UIScreen, UIMutableApplicationSceneSettings, NSMutableSet;
@protocol BSInvalidatable, NSCopying;

@interface _UIScreenBasedWindowScene : UIWindowScene {
    id<NSCopying> _lookupKey;
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationEvaluatorRegistered;
    BOOL _needsInvalidation;
    id<BSInvalidatable> _screenDisconnectionPreventionAssertion;
    NSMutableSet *_autoInvalidationPreventionAssertions;
}

+ (BOOL)alwaysKeepContexts;
+ (BOOL)shouldAllowComponents;
+ (id)unassociationCacheAccessQueue;
+ (id)_unassociatedWindowSceneForScreen:(id)a0 create:(BOOL)a1;
+ (id)unassociationCache;
+ (BOOL)autoInvalidates;

- (id)screen;
- (void)_attachWindow:(id)a0;
- (id)_displayInfoProvider;
- (void)_detachWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (void)_screenInterfaceOrientationChanged:(id)a0;
- (id)initWithScreen:(id)a0 session:(id)a1 lookupKey:(id)a2;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)_shouldAllowFencing;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForOrientation:(long long)a0;
- (void)_openURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)a0;
- (void)_updateClientSettingsToInterfaceOrientation:(long long)a0 withAnimationDuration:(double)a1;
- (void)_removeAutoInvalidationPreventionAssertion:(id)a0;
- (void)_screenDisconnected:(id)a0;
- (id)_synthesizedSettings;
- (void)_invalidate;
- (void)_setKeepContextAssociationInBackground:(BOOL)a0;

@end
