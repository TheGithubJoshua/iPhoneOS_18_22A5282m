@class PKDiscoveryDriver, NSString;
@protocol PKApplicationWorkspaceProxy;

@interface PKDiscoveryLSWatcher : NSObject <PKApplicationWorkspaceObserverProtocol>

@property (weak) PKDiscoveryDriver *wdriver;
@property (retain) id<PKApplicationWorkspaceProxy> workspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pluginsDidUninstall:(id)a0;
- (id)initWithDriver:(id)a0;
- (void)updateWithUninstalledProxies:(id)a0;
- (void)stopUpdates;
- (void).cxx_destruct;
- (void)update;
- (void)pluginsDidInstall:(id)a0;

@end
