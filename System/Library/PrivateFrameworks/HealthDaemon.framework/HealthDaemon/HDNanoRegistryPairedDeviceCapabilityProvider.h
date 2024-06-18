@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
}

@property (weak, nonatomic) id<HDPairedDeviceCapabilityProvidingDelegate> delegate;

- (id)init;
- (void)startListeningForUpdates;
- (id)activePairedDevice;
- (void).cxx_destruct;
- (BOOL)isCapabilitySupported:(id)a0 onDevice:(id)a1;
- (void)dealloc;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;

@end
