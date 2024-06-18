@class NSString, NSData, LSApplicationProxy, NSNumber;

@interface DMCApplicationProxy : NSObject

@property (retain, nonatomic) LSApplicationProxy *lsApp;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSString *signerID;
@property (readonly, nonatomic) NSString *appIDEntitlement;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isBetaApp;
@property (readonly, nonatomic) BOOL isUserApp;
@property (readonly, nonatomic) BOOL isBlocked;
@property (readonly, nonatomic) NSData *misCDHash;
@property (readonly, nonatomic) NSNumber *misHashType;

+ (id)bookIconForVariant:(unsigned long long)a0;
+ (id)_allApplications;
+ (id)_bundlePathsForApplications:(id)a0;
+ (id)blockedApplications;
+ (id)userApplications;

- (BOOL)_isExcludedFromCloudSync;
- (BOOL)_isUninstalledOnMDMRemoval;
- (id)initWithLSApplicationRecord:(id)a0;
- (BOOL)_isUnableToImportFromUnmanaged;
- (id)_lsIconDataForVariant:(unsigned long long)a0 scale:(double)a1;
- (BOOL)_isUnableToUseCellData;
- (BOOL)_hasAppDNSProxy;
- (id)managedAppConfigurationInfo;
- (id)initWithBundleID:(id)a0;
- (void)setBlockedInfo:(id)a0;
- (BOOL)_isExcludedFromBackup;
- (BOOL)_hasManagedRestrictions;
- (void).cxx_destruct;
- (BOOL)_hasAppContentFilter;
- (BOOL)checkIsBlocked;
- (BOOL)_isUnableToExportToUnmanaged;
- (BOOL)_isNotRemovable;
- (unsigned long long)misStateIncludingPending:(BOOL)a0;
- (BOOL)_hasAppVPN;
- (id)initWithLSApplicationProxy:(id)a0;
- (id)misStateString;
- (BOOL)_isUnableToUseRoamingCellData;
- (BOOL)_hasAssociatedDomains;
- (id)iconForVariant:(unsigned long long)a0;
- (id)_managedAppAttribute:(id)a0;
- (BOOL)_isTapToPayScreenLock;

@end
