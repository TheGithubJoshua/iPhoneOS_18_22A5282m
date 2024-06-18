@class NSString, SBSuspendedUnderLockManager;

@interface SBNonInteractiveDisplaySceneManager : SBSceneManager <SBSuspendedUnderLockManagerDelegate> {
    SBSuspendedUnderLockManager *_lazy_suspendedUnderLockManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSuspendedUnderLock;
- (void)_externalCoverSheetVisibilityDidPresent:(id)a0;
- (void)setSuspendedUnderLock:(BOOL)a0;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventSuspendUnderLockForScene:(id)a1;
- (void)_externalCoverSheetVisibilityDidDismiss:(id)a0;
- (id)externalApplicationSceneHandles;
- (id)runningApplicationScenes:(id)a0;
- (id)suspendedUnderLockManager:(id)a0 sceneHandleForScene:(id)a1;
- (void).cxx_destruct;
- (id)suspendedUnderLockManagerVisibleScenes:(id)a0;
- (id)initWithReference:(id)a0 sceneIdentityProvider:(id)a1 presentationBinder:(id)a2 snapshotBehavior:(unsigned long long)a3;
- (BOOL)suspendedUnderLockManager:(id)a0 shouldPreventUnderLockForScene:(id)a1;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (void)dealloc;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)a0;
- (void)setSuspendedUnderLock:(BOOL)a0 alongsideWillChangeBlock:(id /* block */)a1 alongsideDidChangeBlock:(id /* block */)a2;

@end
