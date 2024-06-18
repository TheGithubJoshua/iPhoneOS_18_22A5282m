@class NSString, NSNotificationCenter, NSHashTable, NSMutableSet;

@interface NUApplicationAppActivityMonitorMacOS : NSObject <NUAppActivityMonitor, FCAppActivityReceiver>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, copy, nonatomic) NSString *windowBecameFrontmostNotificationName;
@property (readonly, copy, nonatomic) NSString *windowLostFrontmostNotificationName;
@property (readonly, nonatomic) NSMutableSet *foregroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *backgroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowForegroundObserverBlocks;
@property (readonly, nonatomic) NSMutableSet *windowBackgroundObserverBlocks;
@property (nonatomic, getter=isWindowForeground) BOOL windowIsForeground;
@property (nonatomic, getter=isBecomingActive) BOOL becomingActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void)performOnApplicationDidBecomeActive:(id /* block */)a0;
- (void)performOnApplicationWillEnterForeground:(id /* block */)a0;
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
- (void)sceneDidEnterBackgroundWithSceneID:(id)a0;
- (void)_markWindowAsBackground;
- (void)_markWindowAsForeground;
- (id)initWithNotificationCenter:(id)a0 windowBecameFrontmostNotificationName:(id)a1 windowLostFrontmostNotificationName:(id)a2;

@end
