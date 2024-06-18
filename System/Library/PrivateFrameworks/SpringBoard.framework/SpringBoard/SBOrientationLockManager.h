@class NSMutableSet, NSMutableDictionary;

@interface SBOrientationLockManager : NSObject {
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;

- (BOOL)isEffectivelyLocked;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (id)init;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isUserLocked;
- (void)lock:(long long)a0;
- (void)_handler_runLoopObserverDispose;
- (void)enableLockOverrideForReason:(id)a0 suggestOrientation:(long long)a1;
- (void)_endShimmingForReason:(id)a0;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)a0 andInitialLockState:(BOOL)a1;
- (id)succinctDescription;
- (void)_updateLockStateWithChanges:(id /* block */)a0;
- (void)enableLockOverrideForReason:(id)a0 forceOrientation:(long long)a1;
- (void)_beginShimmingForReason:(id)a0;
- (long long)effectiveLockedOrientation;
- (void)unlock;
- (void)restoreStateFromPrefs;
- (void).cxx_destruct;
- (void)_removeLockOverrideReason:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)description;
- (BOOL)lockOverrideEnabled;
- (void)setLockOverrideEnabled:(BOOL)a0 forReason:(id)a1;
- (long long)userLockOrientation;
- (void)lock;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_addLockOverrideReason:(id)a0 orientation:(long long)a1 force:(BOOL)a2;
- (void)_updateLockStateWithOrientation:(long long)a0 forceUpdateHID:(BOOL)a1 changes:(id /* block */)a2;

@end
