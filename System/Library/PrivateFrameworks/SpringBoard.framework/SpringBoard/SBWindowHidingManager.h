@class UIWindowScene, NSString, NSMapTable, SBSceneHandle;
@protocol UIScenePresenter;

@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver> {
    UIWindowScene *_windowScene;
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    SBSceneHandle *_keyboardSceneHandle;
    struct SBWindowLevelRange_struct { double start; double end; } _hideRange;
    id<UIScenePresenter> _keyboardPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopHidingWindowsForContext:(id)a0;
- (void)_takeNoteOfWindow:(id)a0 onScene:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (void)_window:(id)a0 willDetachFromScene:(id)a1;
- (void)setAlpha:(double)a0 forWindow:(id)a1;
- (void)_window:(id)a0 willAttachToScene:(id)a1;
- (void)_adjustWindowsForActiveHideRange;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)_releaseWindow:(id)a0;
- (void).cxx_destruct;
- (id)dumpKnownWindows;
- (void)_captureWindow:(id)a0;
- (void)startHidingWindowsExclusivelyFromLevel:(double)a0 toLevel:(double)a1 forContext:(id)a2 reason:(id)a3;
- (void)_recomputeHideRangeAndAdjustWindows;
- (id)dumpHidingState;
- (BOOL)_isHidingWindows;
- (BOOL)_isHidingWindowLevel:(double)a0;

@end
