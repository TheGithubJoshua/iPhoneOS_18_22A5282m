@class NSArray, AVOutputDeviceDiscoverySession;
@protocol MRUMirroringDiscoverySessionControllerDelegate;

@interface MRUMirroringDiscoverySessionController : NSObject

@property (retain, nonatomic) AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
@property (retain, nonatomic) NSArray *cachedAvailableOutputDevices;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) BOOL detailedDiscovery;
@property (weak, nonatomic) id<MRUMirroringDiscoverySessionControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;

- (id)init;
- (BOOL)sortDeviceToTop:(id)a0;
- (void)startDetailedDiscovery;
- (void)updateOutputDevicesIfNeeded;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)updateOutputDevicesForAvailableOutputDevices:(id)a0;
- (void)updateDiscoveryMode;
- (id)filterAndSortOutputDevices:(id)a0;
- (void)stopDetailedDiscovery;
- (void)availableOutputDevicesChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateOutputDevicesImmediately;

@end
