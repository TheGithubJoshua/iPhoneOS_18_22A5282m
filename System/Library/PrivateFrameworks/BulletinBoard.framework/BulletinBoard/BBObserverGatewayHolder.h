@class BBMaskedSet, NSString, PCPersistentTimer, NSMutableArray, NSObject, BBObserverClientProxy;
@protocol OS_dispatch_queue;

@interface BBObserverGatewayHolder : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
}

@property (retain, nonatomic) BBObserverClientProxy *gateway;
@property (nonatomic) unsigned long long gatewayPriority;
@property (nonatomic) unsigned long long feed;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BBMaskedSet *observerFeedSet;

- (void)_startTimerWithFireDate:(id)a0;
- (BOOL)_invalidateTimeout:(id)a0;
- (id)initWithQueue:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (void)_startNextTimer;
- (void)_handleTimeout;
- (void)sendObserversAddBulletin:(id)a0 playLightsAndSirens:(BOOL)a1 forFeeds:(unsigned long long)a2;
- (void)dealloc;
- (void)_invalidateTimer;
- (void)sendAddBulletin:(id)a0 playLightsAndSirens:(BOOL)a1 forFeeds:(unsigned long long)a2 withTimeout:(double)a3 handler:(id /* block */)a4;
- (void)sendObserver:(id)a0 addBulletin:(id)a1 playLightsAndSirens:(BOOL)a2 forFeeds:(unsigned long long)a3 withHandler:(id /* block */)a4;
- (id)_addTimeout:(double)a0 forBulletinID:(id)a1 inSectionID:(id)a2 handler:(id /* block */)a3;

@end
