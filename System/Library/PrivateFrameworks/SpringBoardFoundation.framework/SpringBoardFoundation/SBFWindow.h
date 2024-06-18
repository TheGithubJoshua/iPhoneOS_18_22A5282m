@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow {
    NSNumber *_isHiddenOverride;
}

@property (retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack;

- (BOOL)isContentHidden;
- (void).cxx_destruct;
- (BOOL)_canBecomeKeyWindow;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (id)autorotationPreventionReasons;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)makeKeyWindow;
- (BOOL)_isEffectivelyHiddenForKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (void)_resignKeyFromKeyWindowStack;
- (id)hostedSceneIdentityTokens;
- (void)resignAsKeyWindow;

@end
