@class NSString, SBSceneHandle;

@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <SBSceneHandleObserver> {
    BOOL _isContentStateReady;
    BOOL _manualListener;
}

@property (copy, nonatomic) SBSceneHandle *sceneHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (void)_begin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_noteSceneContentReadinessDidChange:(BOOL)a0;
- (id)initWithSceneHandle:(id)a0 manualListener:(BOOL)a1;
- (void)noteSceneContentIsReady:(BOOL)a0;

@end
