@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    NSDictionary *_pickableRoutes;
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _routingLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;
+ (BOOL)shouldUseMultideviceV3;

- (id)init;
- (void)updateWirelessSplitterState;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (id)currentPickableAudioRoutesIfExist;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)clearAudioRoutes;
- (id)liveListenDevice;
- (BOOL)currentRouteSupportsBackgroundSounds;
- (void)updateHearingFeatureUsage;
- (id)currentPickableAudioRoutes;
- (void).cxx_destruct;
- (BOOL)hearingAidStreamSelected;
- (BOOL)deviceIsTinker;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (BOOL)hearingAidRouteAvailable;
- (void)mediaServerDied;
- (void)dealloc;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (BOOL)liveListenRouteSelected;
- (void)registerNotifications;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (BOOL)wirelessSplitterEnabled;

@end
