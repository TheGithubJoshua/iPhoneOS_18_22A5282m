@class NSObject;
@protocol OS_dispatch_queue;

@interface MNRingerSwitchObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) BOOL ringerSwitchEnabled;

+ (id)sharedObserver;

- (id)init;
- (unsigned long long)stateForNotifyToken:(int)a0;
- (void)registerForRingerStateNotifications;
- (void).cxx_destruct;
- (void)unregisterForRingerStateNotifications;
- (BOOL)fetchRingerSwitchEnabled;
- (void)dealloc;
- (void)loadPropertiesOnConcurrentQueue;

@end
