@class NSString, NSXPCConnection, AVServerWrapper, AVHapticServer;

@interface AVHapticServerInstance : NSObject <NSXPCListenerDelegate, CHHapticServerInterface> {
    NSXPCConnection *_connection;
    struct shared_ptr<HapticSession> { struct HapticSession *__ptr_; struct __shared_weak_count *__cntrl_; } _hapticSession;
    struct shared_ptr<opaqueCMSession> { struct opaqueCMSession *__ptr_; struct __shared_weak_count *__cntrl_; } _clientSession;
    AVServerWrapper *_listenerWrapper;
    BOOL _routeUsesReceiver;
}

@property (readonly) AVHapticServer *master;
@property (readonly) unsigned long long clientID;
@property BOOL clientSuspended;
@property BOOL wasPrewarmedAndSuspended;
@property BOOL clientInterrupted;
@property BOOL wasRunningAndSuspended;
@property BOOL runningInBackground;
@property BOOL prewarmIncludesHaptics;
@property BOOL prewarmIncludesAudio;
@property BOOL runIncludesHaptics;
@property BOOL runIncludesAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPrewarm;
- (void)prewarm:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopRunning;
- (void)handleConnectionError;
- (void)detachSequence:(unsigned long long)a0;
- (void)releaseChannels;
- (void)allocateClientResources:(id /* block */)a0;
- (void)configureWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)copyCustomAudioEvent:(unsigned long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)createCustomAudioEvent:(id)a0 format:(id)a1 frames:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)debugExpectNotifyOnFinishAfter:(double)a0 reply:(id /* block */)a1;
- (void)fadeClientForSessionInterruption:(BOOL)a0 affectHaptics:(BOOL)a1 fadeTime:(float)a2 fadeLevel:(float)a3 stopAfterFade:(BOOL)a4;
- (id)getAsyncDelegateForMethod:(SEL)a0 errorHandler:(id /* block */)a1;
- (void)getHapticLatency:(id /* block */)a0;
- (id)getSyncDelegateForMethod:(SEL)a0 errorHandler:(id /* block */)a1;
- (void)handleClientApplicationStateChange:(id)a0;
- (void)handleClientApplicationStateChangeUsingAppState:(unsigned long long)a0;
- (void)handleClientRouteChange:(id)a0;
- (void)handleClientSessionInterruptionCommand:(unsigned int)a0 dictionary:(id)a1;
- (id)initWithMaster:(id)a0 id:(unsigned long long)a1 connection:(id)a2 outError:(id *)a3;
- (void)loadHapticEvent:(id)a0 reply:(id /* block */)a1;
- (void)loadHapticSequenceFromData:(id)a0 reply:(id /* block */)a1;
- (void)loadHapticSequenceFromEvents:(id)a0 reply:(id /* block */)a1;
- (void)loadVibePattern:(id)a0 reply:(id /* block */)a1;
- (void)muteClientForRingerSwitch:(BOOL)a0;
- (void)notifyClientOnStopWithReason:(long long)a0 error:(id)a1;
- (void)prepareHapticSequence:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)queryCapabilities:(id)a0 reply:(id /* block */)a1;
- (void)referenceCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)releaseClientResources;
- (void)releaseCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)removeChannel:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)removeSessionListeners;
- (void)requestChannels:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setChannelEventBehavior:(unsigned long long)a0 behavior:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)setPlayerBehavior:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setSequenceEventBehavior:(unsigned long long)a0 behavior:(unsigned long long)a1 channelIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (BOOL)setupAudioSessionFromID:(unsigned int)a0 isShared:(BOOL)a1 error:(id *)a2;
- (void)startRunning:(id /* block */)a0;
- (void)stopRunning:(id /* block */)a0;
- (void)unmuteClientAfterSessionInterruption:(float)a0;

@end
