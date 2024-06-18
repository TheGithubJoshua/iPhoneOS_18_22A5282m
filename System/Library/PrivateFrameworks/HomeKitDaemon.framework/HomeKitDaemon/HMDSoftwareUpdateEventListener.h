@class HMSoftwareUpdateDescriptor, NSString, HMDSoftwareUpdateEventListenerContext;

@interface HMDSoftwareUpdateEventListener : HMFObject <HMFLogging, HMEEventConsumer>

@property (readonly) HMDSoftwareUpdateEventListenerContext *context;
@property (readonly) BOOL isSoftwareUpdateDownloadedAndReadyForInstallation;
@property (readonly) BOOL isSoftwareUpdateAvailable;
@property (readonly) HMSoftwareUpdateDescriptor *softwareUpdateDescriptorForLastEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReceiveCachedEvent:(id)a0 topic:(id)a1 source:(id)a2;
- (id)initWithContext:(id)a0;
- (id)logIdentifier;
- (void)registerForEvents;
- (void)didReceiveEvent:(id)a0 topic:(id)a1;
- (void).cxx_destruct;

@end
