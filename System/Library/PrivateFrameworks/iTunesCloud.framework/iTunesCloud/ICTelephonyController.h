@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    NSString *_phoneNumber;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (class, readonly, nonatomic) ICTelephonyController *sharedController;

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)phoneNumberAvailable:(id)a0;
- (void)phoneNumberChanged:(id)a0;
- (id)_telephonySubscriptionContext;
- (id)_init;
- (void)activeSubscriptionsDidChange;
- (id)_telephonyClient;
- (void).cxx_destruct;
- (BOOL)_ensureTelephonyHandlesAreReady;
- (void)dealloc;
- (void)_handleActiveSubscriptionsDidChange;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)a0;
- (BOOL)sendSMSWithText:(id)a0 toPhoneNumber:(id)a1 error:(id *)a2;

@end
