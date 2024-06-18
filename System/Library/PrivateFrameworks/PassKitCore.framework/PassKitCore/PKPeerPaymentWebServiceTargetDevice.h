@class NSString, PKPeerPaymentService;
@protocol PKPeerPaymentTargetDeviceDelegate;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService *_peerPaymentService;
    id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)bridgedClientInfo;
- (id)appleAccountInformation;
- (id)secureElementIdentifiers;
- (id)deviceRegion;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (id)deviceClass;
- (void)_handlePreferencesChangedNotification:(id)a0;
- (id)preferences;
- (id)initWithTargetDeviceDelegate:(id)a0;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (BOOL)userHasDisabledPeerPayment;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleAccountChangedNotification:(id)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;
- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (id)account;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 peerPaymentWebService:(id)a1 credential:(id)a2 completion:(id /* block */)a3;

@end
