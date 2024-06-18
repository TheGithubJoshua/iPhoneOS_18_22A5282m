@class NRDevice, NSString, NSConditionLock, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {
    BOOL _nanoRegEntitled;
    NSConditionLock *_pairedDeviceLock;
    NSObject<OS_dispatch_queue> *_nanoregQueue;
    NSNumber *_hasPairedDevice;
    NRDevice *_currentDevice;
    NSString *_deviceSystemVersion;
    NSString *_deviceSystemBuildVersion;
    NSString *_deviceProductType;
    NSNumber *_deviceIsAltAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInfo;

- (id)hasPairedDeviceIfAvailable;
- (id)_deviceIsAltAcctBlocking:(BOOL)a0;
- (id)init;
- (id)deviceIsAltAcctIfAvailable;
- (id)deviceSystemBuildVersionIfAvailable;
- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (void)_readDeviceInfo:(id)a0;
- (id)deviceIsAltAcct;
- (id)deviceSystemBuildVersion;
- (id)_observingProperties;
- (id)hasPairedDevice;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (void).cxx_destruct;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)deviceProductType;
- (void)_startObservingDevice:(id)a0;
- (void)setupClient;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (id)deviceOsVersionIfAvailable;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemVersion;
- (void)_stopObservingDevice:(id)a0;

@end
