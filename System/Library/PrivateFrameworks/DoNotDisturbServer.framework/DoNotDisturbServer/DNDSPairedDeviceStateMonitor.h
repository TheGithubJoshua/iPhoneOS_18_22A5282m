@class NSSet, NSString, DNDSPairedDevice, DNDAccountFeatureSupport, NSObject, IDSService;
@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_localService;
    IDSService *_cloudService;
    int _pairedDeviceDidChangeNotificationToken;
}

@property (copy) DNDSPairedDevice *previousPairedDevice;
@property (copy) DNDSPairedDevice *pairedDevice;
@property (copy) NSSet *cloudDevices;
@property (readonly, copy, nonatomic) DNDAccountFeatureSupport *accountFeatureSupport;
@property (weak, nonatomic) id<DNDSPairedDeviceStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void)_queue_updatePairedState;
- (id)_getCurrentPairedDevice;
- (void)_beginMonitoringForChanges;
- (void)_queue_updateCloudDevices;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (id)sysdiagnoseDataIdentifier;
- (void).cxx_destruct;
- (void)_endMonitoringForChanges;
- (void)resume;
- (id)pairedDeviceForDeviceIdentifier:(id)a0;
- (void)_queue_informDelegatesOfPairedStateChange;
- (void)dealloc;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)_pairedDeviceStateChanged:(id)a0;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (id)initWithLocalIDSService:(id)a0 cloudIDSService:(id)a1;

@end
