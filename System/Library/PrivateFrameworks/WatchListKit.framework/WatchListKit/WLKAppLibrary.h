@class NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSArray *_nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppLibrary;

- (void)applicationsDidInstall:(id)a0;
- (id)refresh;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (id)testAppProxies;
- (id)installedAppProxies;
- (BOOL)isTVAppInstalled;
- (void)beginIgnoringAppLibraryChanges;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (id)subscribedAppProxies;
- (id)subscribedAppBundleIdentifiers;
- (id)dictionaryRepresentation;
- (id)allAppProxies;
- (id)allAppBundleIdentifiers;
- (id)subscriptionInfoForBundle:(id)a0;
- (void)_handleInvalidationWithReason:(id)a0;
- (void)endIgnoringAppLibraryChanges;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)_refreshAppLibrary;
- (id)_nonConformingAppProxies;
- (id)_subscriptionInfosForProxies:(id)a0;
- (id)_nonConformingAppBundleIdentifiers;
- (void).cxx_destruct;
- (id)localizedNameForBundle:(id)a0;
- (id)testAppBundleIdentifiers;
- (void)dealloc;
- (id)installedAppBundleIdentifiers;

@end
