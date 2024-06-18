@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject {
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)installedSystemProfileDataWithIdentifier:(id)a0;
+ (id)installedUserProfileWithIdentifier:(id)a0;
+ (id)installedUserProfileDataWithIdentifier:(id)a0;
+ (id)installedProfileDataWithIdentifier:(id)a0;
+ (id)installedProfileWithIdentifier:(id)a0;
+ (id)installedSystemProfileWithIdentifier:(id)a0;
+ (id)sharedManifest;
+ (void)_setSystemManifestPath:(id)a0 userManifestPath:(id)a1;

- (id)installedUserProfileWithIdentifier:(id)a0;
- (id)installedProfileDataWithIdentifier:(id)a0;
- (id)installedProfileWithIdentifier:(id)a0;
- (id)installedSystemProfileWithIdentifier:(id)a0;
- (id)init;
- (void)invalidateCache;
- (void)removeIdentifierFromUserManifest:(id)a0 flag:(int)a1;
- (id)identifiersOfProfilesWithFilterFlags:(int)a0;
- (id)installedMDMProfile;
- (void)addIdentifierToUserManifest:(id)a0 flag:(int)a1;
- (id)allInstalledSystemProfileIdentifiers;
- (id)userManifest;
- (void)removeIdentifierFromSystemManifest:(id)a0 flag:(int)a1;
- (id)_userManifest;
- (void).cxx_destruct;
- (id)allInstalledPayloadsOfClass:(Class)a0;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)a0;
- (id)_systemManifest;
- (void)_adjustManifestIdentifier:(id)a0 isUserInstall:(BOOL)a1 flag:(int)a2 addingIdentifier:(BOOL)a3;
- (void)addIdentifierToSystemManifest:(id)a0 flag:(int)a1;
- (void)dealloc;
- (void)_setSystemManifest:(id)a0 userManifest:(id)a1;
- (id)allInstalledUserProfileIdentifiers;
- (id)allInstalledProfileIdentifiers;
- (id)systemManifest;

@end
