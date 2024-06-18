@class NSString, NSConditionLock, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface GEOTelephonyInfo : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    struct __CTServerConnection { } *_telephonyConnection;
    CoreTelephonyClient *_telephonyClient;
    NSConditionLock *_carrierLock;
    NSConditionLock *_deviceAuthLock;
    NSConditionLock *_mapsAuthLock;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    NSString *_carrier;
    BOOL _deviceAuthorized;
    BOOL _mapsAuthorized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInfo;
+ (BOOL)hasCellularCapability;

- (id)init;
- (void)dataSettingsChanged:(id)a0;
- (void)_updateMapsAuthed;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (void).cxx_destruct;
- (void)setupClient;
- (id)cellularCarrierIfAvailable;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (int)cellularDataStateIfAvailable;
- (void)isMapsAuthorizedForCellular:(id)a0 result:(id /* block */)a1;

@end
