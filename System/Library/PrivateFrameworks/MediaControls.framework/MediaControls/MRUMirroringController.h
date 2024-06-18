@class AVOutputDevice, NSArray, NSMutableSet, MRUMirroringDiscoverySessionController, MRUOutputContextController, NSString;
@protocol MRUMirroringControllerDelegate;

@interface MRUMirroringController : NSObject <MRUOutputContextControllerDelegate, MRUMirroringDiscoverySessionControllerDelegate>

@property (retain, nonatomic) MRUOutputContextController *outputContextController;
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *outputDeviceDiscoverySessionController;
@property (retain, nonatomic) MRUOutputContextController *audioContextController;
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *audioDiscoverySessionController;
@property (retain, nonatomic) NSMutableSet *busyIdentifiers;
@property (nonatomic) BOOL tetheredDisplayPortModeEnabled;
@property (weak, nonatomic) id<MRUMirroringControllerDelegate> delegate;
@property (readonly, nonatomic) AVOutputDevice *selectedOutputDevice;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDevice *selectedAudioOutputDevice;
@property (readonly, nonatomic) NSArray *availableAudioOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mirroringControllerWithAudioRoutingSupport;
+ (id)symbolNameForOutputDevice:(id)a0;

- (id)init;
- (void)startDetailedDiscovery;
- (void)updateAvailableAudioOutputDevices;
- (void)updateSelectedOutputDevice;
- (id)outputDeviceForID:(id)a0;
- (void)updateAvailableOutputDevices;
- (void)mirrorToOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)startMirroringToOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)selectAudioOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)mirroringDiscoverySessionController:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (void)stopDetailedDiscovery;
- (void)stopMirroringWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateSelectedAudioOutputDevice;
- (void)pairingHandlerNotification:(id)a0;
- (void)outputContextController:(id)a0 didChangeOutputDevice:(id)a1;
- (void)addBusyIdentifier:(id)a0;
- (void)removeBusyIdentifier:(id)a0;

@end
