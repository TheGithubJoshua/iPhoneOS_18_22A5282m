@class _GCControllerManagerServer, NSArray, NSMutableDictionary, NSString, GCSProfile, NSObject;
@protocol _GCIPCIncomingConnection, NSSecureCoding, OS_xpc_object, NSCopying, NSObject, GCSSettingsStoreService;

@interface _GCHapticClientProxy : NSObject <CHHapticServerInterface> {
    BOOL _playersPlayedHapticsThisSlice;
    _GCControllerManagerServer *_server;
    struct HapticSharedMemory { void /* function */ **_vptr$SharableMemoryBase; BOOL mIsOwner; BOOL mWasMapped; unsigned long long mSize; void *mBuffer; unsigned int mPort; int mFileDesc; int mSerial; NSObject<OS_xpc_object> *mXPCObject; } _sharedMemory;
    id<GCSSettingsStoreService> _settingsStore;
    GCSProfile *_activeProfile;
    BOOL _dirtyMuteState;
    BOOL _muted;
    BOOL _neverMute;
    int _muteReasons[5];
    float _hapticStrength;
    _Atomic BOOL _invalid;
    BOOL _running;
    BOOL _stopping;
    id<_GCIPCIncomingConnection> _connection;
    id _connectionInvalidationRegistration;
    id _connectionInterruptedRegistration;
    double _initializationTime;
}

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy, nonatomic) NSMutableDictionary *hapticPlayers;
@property (copy, nonatomic) NSArray *invalidationHandlers;
@property (nonatomic) unsigned long long clientID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) id<NSCopying, NSObject, NSSecureCoding> identifier;
@property (readonly, copy, nonatomic) NSString *persistentControllerIdentifier;
@property (readonly, copy, nonatomic) NSString *controllerProductCategory;
@property (readonly, copy, nonatomic) NSArray *actuators;
@property (nonatomic) BOOL complete;
@property (nonatomic, getter=isMockClient) BOOL mockClient;
@property (nonatomic) unsigned int applicationState;
@property (readonly, nonatomic) int totalPlayers;
@property (readonly, nonatomic) double totalLifetimeInSeconds;
@property (readonly, nonatomic) double activeLifetimeInSeconds;

+ (id)clientProxyWithConnection:(id)a0 server:(id)a1 clientID:(unsigned long long)a2;

- (BOOL)running;
- (id)init;
- (void)stopPrewarm;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)prewarm:(id /* block */)a0;
- (id).cxx_construct;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isMuted;
- (void)dealloc;
- (id)addInvalidationHandler:(id /* block */)a0;
- (void)stopRunning;
- (void)detachSequence:(unsigned long long)a0;
- (void)releaseChannels;
- (void)allocateClientResources:(id /* block */)a0;
- (void)configureWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)copyCustomAudioEvent:(unsigned long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)createCustomAudioEvent:(id)a0 format:(id)a1 frames:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)debugExpectNotifyOnFinishAfter:(double)a0 reply:(id /* block */)a1;
- (void)getHapticLatency:(id /* block */)a0;
- (void)loadHapticEvent:(id)a0 reply:(id /* block */)a1;
- (void)loadHapticSequenceFromData:(id)a0 reply:(id /* block */)a1;
- (void)loadHapticSequenceFromEvents:(id)a0 reply:(id /* block */)a1;
- (void)loadVibePattern:(id)a0 reply:(id /* block */)a1;
- (void)notifyClientOnStopWithReason:(long long)a0 error:(id)a1;
- (void)prepareHapticSequence:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)queryCapabilities:(id)a0 reply:(id /* block */)a1;
- (void)referenceCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)releaseClientResources;
- (void)releaseCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)removeChannel:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)requestChannels:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setChannelEventBehavior:(unsigned long long)a0 behavior:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)setPlayerBehavior:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setSequenceEventBehavior:(unsigned long long)a0 behavior:(unsigned long long)a1 channelIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)startRunning:(id /* block */)a0;
- (void)stopRunning:(id /* block */)a0;
- (void *)sharedMemory;
- (void)notifyClientCompletedWithError:(id)a0;
- (void)_configureActuatorsLegacyWithOptions:(id)a0;
- (id)_initWithConnection:(id)a0 server:(id)a1 clientID:(unsigned long long)a2;
- (void)addActiveTime:(double)a0;
- (void)debugEngineIsRunning:(id /* block */)a0;
- (float)hapticStrength;
- (void)invalidateDueToControllerDisconnect;
- (BOOL)isMutedForReason:(unsigned long long)a0;
- (void)refreshUserSettingForMuteHaptics;
- (void)removeCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)setHapticStrength:(float)a0;
- (void)setMute:(BOOL)a0 forReason:(unsigned long long)a1;
- (BOOL)stopping;
- (void)teardownAndReleaseChannels;

@end