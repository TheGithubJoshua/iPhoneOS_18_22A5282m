@class NSString, STTelephonyStatusDomainPublisher, STTelephonyStateProvider;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable> {
    STTelephonyStateProvider *_telephonyStateProvider;
    STTelephonyStatusDomainPublisher *_telephonyDomainPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (id)initWithServerHandle:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithServerHandle:(id)a0 stateProvider:(id)a1;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)dealloc;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)stateDidChangeForStateProvider:(id)a0 enabled:(BOOL)a1 inactiveEnabled:(BOOL)a2;

@end
