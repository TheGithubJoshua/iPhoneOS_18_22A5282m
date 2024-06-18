@class NSString, NSMutableSet, NSHashTable;

@interface NUApplicationAppActivityMonitorIOS : NSObject <NUAppActivityMonitor, FCAppActivityReceiver>

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowForegroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowBackgroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationWillEnterForeground:(id /* block */)a0;
- (void)_windowDidBecomeBackground;
- (void)performOnApplicationWindowDidBecomeBackground:(id /* block */)a0;
- (void)sceneWillEnterForeground;
- (void).cxx_destruct;
- (void)performOnApplicationDidEnterBackground:(id /* block */)a0;
- (void)performOnApplicationWindowDidBecomeForeground:(id /* block */)a0;
- (void)sceneDidEnterBackground;
- (void)sceneDidBecomeActive;
- (void)dealloc;
- (void)_applicationWillTerminate;
- (void)sceneDidBecomeActiveWithURL:(id)a0 sourceApplication:(id)a1 sceneID:(id)a2;
- (void)sceneWillResignActiveWithSceneID:(id)a0;
- (void)sceneWillConnect;
- (void)addObserver:(id)a0;
- (void)_windowDidBecomeForeground;
- (void)sceneDidEnterBackgroundWithSceneID:(id)a0;

@end
