@class MPNotificationObserver, NSError, MPCSceneCollection, AVPlayer;

@interface MPCScriptedLooper : NSObject

@property (class, nonatomic, getter=isScriptedLoopingDisabled) BOOL scriptedLoopingDisabled;

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ pauseFinishedBlock;
@property (retain, nonatomic) MPCSceneCollection *sceneCollection;
@property (retain, nonatomic) id timeObserver;
@property (retain, nonatomic) MPNotificationObserver *itemDidPlayToEndObserver;
@property (nonatomic) long long currentSceneIndex;
@property (nonatomic) long long currentLoopCount;
@property (nonatomic, getter=isExecutingPauseScene) BOOL executingPauseScene;
@property (nonatomic, getter=isSceneExecutionPaused) BOOL sceneExecutionPaused;
@property (readonly, nonatomic) AVPlayer *player;

- (void)pauseScenes;
- (void)restartScenes;
- (long long)frameForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_pause;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_CMTimeForFrame:(long long)a0;
- (id)initWithAsset:(id)a0 sceneCollection:(id)a1;
- (void)_updateRateIfNeeded;
- (void)_sharedInitWithItem:(id)a0;
- (void)_createSceneCollectionForAssetWithPreloadedKeys:(id)a0;
- (void).cxx_destruct;
- (void)_loopIfNeeded;
- (void)_executeSceneCollection;
- (id)initWithURL:(id)a0 sceneCollection:(id)a1;
- (void)dealloc;
- (void)playScenes;
- (id)currentScene;
- (void)_advanceScene;
- (void)seekToFrameIfNeeded:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_executeCurrentScene;
- (id)initWithAsset:(id)a0;

@end
