@class NSArray, MCProfileInfo, LSApplicationWorkspace, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol, MCUIDataManagerProtocol>

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) BOOL observing;
@property (nonatomic) int appsChangedNotifyToken;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (retain, nonatomic) MCProfileInfo *mdmProfileInfo;
@property (retain, nonatomic) NSArray *configurationProfilesInfo;
@property (retain, nonatomic) NSArray *uninstalledProfilesInfo;
@property (retain, nonatomic) NSArray *freeDeveloperAppSigners;
@property (retain, nonatomic) NSArray *enterpriseAppSigners;
@property (retain, nonatomic) NSArray *blockedApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (BOOL)_isDeviceManagementHiddenConcrete;

- (void)applicationsDidInstall:(id)a0;
- (unsigned long long)itemCount;
- (void)applicationsDidUninstall:(id)a0;
- (unsigned long long)appSignerCount;
- (id)init;
- (void)appMovedToForeground:(id)a0;
- (BOOL)isProfileSectionEmpty;
- (void)allDeviceManagementOutMDMProfileInfo:(id *)a0 outConfigurationProfilesInfo:(id *)a1 outUninstalledProfilesInfo:(id *)a2 outEnterpriseAppSigners:(id *)a3 outFreeDevAppSigners:(id *)a4 outBlockedApplications:(id *)a5;
- (void).cxx_destruct;
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(BOOL)a0 appSigners:(BOOL)a1 blockedApplications:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isDeviceManagementHidden;
- (void)reloadAllDataInBackgroundWithCompletion:(id /* block */)a0;
- (id)configurationProfiles;
- (void)appMovedToBackground:(id)a0;
- (void)dealloc;
- (unsigned long long)installedProfileCount;
- (void)profilesChanged:(id)a0;
- (id)mdmProfile;
- (void)reloadProfilesInBackgroundWithCompletion:(id /* block */)a0;
- (void)reloadDataInBackgroundIncludingProfiles:(BOOL)a0 appSigners:(BOOL)a1 blockedApplications:(BOOL)a2 completion:(id /* block */)a3;
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(id /* block */)a0;

@end
