@class NSString, NSHashTable, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface ENCoreTelephonyUtility : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate>

@property (readonly, nonatomic) CoreTelephonyClient *ctClient;
@property (readonly, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)mobileCountryCodeForISO:(id)a0;
+ (id)countryCodeISOForMobileCountryCode:(id)a0;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (id)currentPhoneNumbers;
- (void).cxx_destruct;
- (id)countryCodeISOForMobileCountryCode:(id)a0;
- (void)dealloc;
- (id)currentMobileCountryCode;
- (void)addObserver:(id)a0;

@end
