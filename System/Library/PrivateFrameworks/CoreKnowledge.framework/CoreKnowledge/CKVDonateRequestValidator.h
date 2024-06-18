@class CKVSettings;

@interface CKVDonateRequestValidator : NSObject {
    CKVSettings *_settings;
}

- (id)initWithSettings:(id)a0;
- (id)init;
- (unsigned short)validateRequest:(id)a0 connection:(id)a1;
- (id)applicationRecordFromRequest:(id)a0;
- (BOOL)_isUserIdInHome:(id)a0;
- (unsigned short)_validateKoaDonationEntitlementForConnection:(id)a0;
- (unsigned short)_validateRequestForLocalLinkDynamicTermDonation:(id)a0 connection:(id)a1;
- (unsigned short)_validateRequestForMUXContactDonation:(id)a0 connection:(id)a1;
- (void).cxx_destruct;
- (unsigned short)_validateRequestForLocalUserSpecificDonation:(id)a0 connection:(id)a1;
- (id)applicationBundleIdsProxyDonateEntitlement:(id)a0;
- (unsigned short)_validateRequestForLocalDonation:(id)a0 connection:(id)a1;
- (id)applicationBundleIdFromConnection:(id)a0;
- (unsigned short)_validateRequestForRemoteDonation:(id)a0 connection:(id)a1;

@end
