@class NSString, AAUIDeviceToDeviceEncryptionHelper;

@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>

@property (retain, nonatomic) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountStore;
- (id)authenticationContext;
- (void).cxx_destruct;
- (id)primaryAppleAccount;
- (id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)a0;
- (id)AKSecurityUpgradeContextMessages;
- (Class)authenticationContextClass;
- (void)beginRepairWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)deviceToDeviceEncryptionHelper:(id)a0 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)a1;

@end
