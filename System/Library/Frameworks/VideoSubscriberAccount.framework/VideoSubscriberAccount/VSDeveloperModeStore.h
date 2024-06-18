@class VSPersistentContainer, NSString, VSRemoteNotifier, NSObject;
@protocol OS_dispatch_queue;

@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>

@property (retain, nonatomic) VSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)settingsPropertiesURL;
- (id)init;
- (void)addDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)_developerIdentityProviderInContext:(id)a0;
- (void)_performIdentityProviderBlock:(id /* block */)a0;
- (void)_noteSettingsDidChange;
- (void)_noteServiceDidChange;
- (void).cxx_destruct;
- (id)_nullableObjectOrNSNull:(id)a0;
- (void)fetchDeveloperSettingsWithCompletionHandler:(id /* block */)a0;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDeveloperSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateSettingsPropertyFileIfNecessary;
- (id)legacySettingsPropertiesPath;
- (void)_noteProvidersDidChange;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(id /* block */)a0;
- (void)updateExistingDeveloperIdentityProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)_identityProviderFetchRequest;

@end
