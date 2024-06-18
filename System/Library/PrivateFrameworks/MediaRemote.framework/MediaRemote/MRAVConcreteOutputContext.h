@class MRAVConcreteOutputDevice, NSArray, NSString, MRAVOutputDeviceSourceInfo, NSMutableDictionary, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVConcreteOutputDevice *_predictedOutputDevice;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    AVOutputContext *_avOutputContext;
    NSMutableDictionary *_notifications;
}

@property (class, readonly, nonatomic) AVOutputContext *outputContextForLocalDevice;
@property (class, copy, nonatomic) id /* block */ outputContextForLocalDeviceDataSource;

@property (retain, nonatomic) AVOutputContext *avOutputContext;
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (nonatomic) BOOL isVolumeControlAvailable;

+ (id)sharedSystemAudioContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)iTunesContext;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemScreenContext;

- (unsigned int)volumeControlCapabilities;
- (id)predictedOutputDevice;
- (void)_handleClusterMemberVolumeDidChangeNotification:(id)a0;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (float)volume;
- (void)setVolume:(float)a0;
- (void)resetPredictedOutputDevice;
- (void)adjustVolume:(long long)a0;
- (void)_handleClusterMemberVolumeControlTypeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (id)contextID;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)a0;
- (void)_reloadOutputDevices;
- (BOOL)supportsVolumeControl;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void).cxx_destruct;
- (id)description;
- (void)attemptLogicalDeviceRecovery;
- (id)debugDescription;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (id)uniqueIdentifier;
- (void)dealloc;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (unsigned int)type;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (BOOL)supportsMultipleBluetoothOutputDevices;

@end
