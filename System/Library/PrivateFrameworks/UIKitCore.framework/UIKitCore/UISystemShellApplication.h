@class FBDisplayLayoutTransition;

@interface UISystemShellApplication : UIApplication {
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    id _didFinishLaunchingObserver;
}

+ (BOOL)registerAsSystemApp;
+ (BOOL)rendersLocally;

- (BOOL)_openURL:(id)a0;
- (BOOL)canOpenURL:(id)a0;
- (long long)startupInterfaceOrientation;
- (BOOL)_saveSnapshotWithName:(id)a0;
- (BOOL)isFrontBoard;
- (BOOL)handleStatusBarHoverActionForRegion:(long long)a0;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)handleDoubleHeightStatusBarTapWithStyleOverride:(unsigned long long)a0;
- (id)init;
- (void)resetIdleTimerAndUndim;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithSettings:(id)a1 fromOrientation:(long long)a2;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (BOOL)isSuspendedUnderLock;
- (BOOL)isSuspended;
- (void).cxx_destruct;

@end
