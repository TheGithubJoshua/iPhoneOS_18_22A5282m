@class NSString, NSMutableDictionary;

@interface SBSceneHandleBlockObserver : NSObject <BSInvalidatable, SBSceneHandleObserver> {
    NSMutableDictionary *_createBlocks;
    NSMutableDictionary *_destroyBlocks;
    NSMutableDictionary *_didUpdateContentStateBlocks;
    NSMutableDictionary *_didUpdateSettingsBlocks;
    NSMutableDictionary *_didUpdateClientSettingsBlocks;
    NSMutableDictionary *_didUpdatePairingStatusBlocks;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (void)removeObserverForToken:(id)a0;
- (id)observeDidUpdateClientSettings:(id /* block */)a0;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (id)observeDidUpdatePairingStatusForExternalIdentifiers:(id /* block */)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)observeDidUpdateContentState:(id /* block */)a0;
- (id)observeCreate:(id /* block */)a0;
- (id)observeDidUpdateSettings:(id /* block */)a0;
- (void)dealloc;
- (id)observeDestroy:(id /* block */)a0;
- (void)sceneHandle:(id)a0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)a1;

@end
