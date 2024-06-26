@class NSString;

@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)startObserving;
- (void)stopObserving;
- (id)initWithBundleIdentifier:(id)a0;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
