@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (id)init;
- (void)_initNowPlayingPause;
- (id)_init;
- (void)_handlePause;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_persist;
- (void)_initNowPlayingPlay;
- (void).cxx_destruct;
- (void)_initStarkDisconnect;
- (void)_handlePlay;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_initStarkConnect;

@end
