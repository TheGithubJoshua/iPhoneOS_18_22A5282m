@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (BOOL)isCurrentICloudAccountManaged;
+ (id)sharedInstance;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (id)primaryICloudAccount;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)isAccountInfoAvailable;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (BOOL)isCurrentICloudAccountManaged;
- (BOOL)isCurrentICloudAccountUnderage;
- (id)primaryICloudAccount;
- (BOOL)isCurrentICloudAccountChinaBased;
- (void).cxx_destruct;
- (id)_primaryICloudAccountIsolated;

@end
