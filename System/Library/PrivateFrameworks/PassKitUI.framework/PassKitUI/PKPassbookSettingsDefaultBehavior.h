@class PKPassLibraryDefaultDataProvider, NSString, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;
@protocol PKPaymentSetupDelegate;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
    id<PKPaymentSetupDelegate> _setupDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceName;
- (id)init;
- (BOOL)supportsCredentialType:(long long)a0;
- (void).cxx_destruct;
- (id)secureElementID;
- (void)dealloc;
- (BOOL)secureElementIsProductionSigned;
- (id)paymentDataProvider;
- (id)optionsDelegate;
- (BOOL)canRegisterForPeerPayment;
- (BOOL)deviceInRestrictedMode;
- (BOOL)deviceSupportsInAppPayments;
- (BOOL)hasFelicaSecureElement;
- (id)passLibraryDataProvider;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (void)setSetupDelegate:(id)a0;
- (id)setupDelegate;

@end
