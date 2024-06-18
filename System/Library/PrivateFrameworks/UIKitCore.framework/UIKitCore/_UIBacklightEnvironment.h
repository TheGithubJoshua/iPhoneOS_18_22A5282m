@class UIScene, NSString, NSHashTable, BLSBacklightSceneVisualState, UITraitCollection;

@interface _UIBacklightEnvironment : NSObject <_UIWindowSceneComponentProviding, BLSBacklightSceneEnvironmentDelegate> {
    BLSBacklightSceneVisualState *_visualState;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_backlightEnvironmentSupported;
+ (double)_defaultAnimationDuration;
+ (BOOL)_alwaysOnSupported;
+ (void)_performOnChildViewControllersForAlwaysOnTimelines:(id)a0 performBlock:(id /* block */)a1 withCompletion:(id /* block */)a2;

- (void)removeObserver:(id)a0;
- (void)transitionTraitsInUpdate:(id)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_commit:(BOOL)a0 andPerformPostSynchronizeBlock:(id /* block */)a1;
- (void)_notifyObserversIfEnvironmentVisualStateDidChangeFromActiveOn:(id)a0;
- (void)environment:(id)a0 performBacklightSceneUpdate:(id)a1;
- (BOOL)isObserver:(id)a0;
- (void).cxx_destruct;
- (void)environment:(id)a0 timelinesForDateInterval:(id)a1 previousSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)updateSceneWithFrameSpecifier:(id)a0 layout:(BOOL)a1 completion:(id /* block */)a2;
- (void)_enumerateAllObserversWithBlock:(id /* block */)a0;
- (void)_notifyObserversIfEnvironmentVisualStateDidChangeToActiveOn:(id)a0;
- (id)initWithScene:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyObserversEnvironmentVisualStateWillChangeToState:(id)a0;
- (id)_windowScene;

@end
