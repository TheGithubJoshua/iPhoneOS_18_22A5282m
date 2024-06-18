@class NSMutableDictionary, NSMapTable, FPDServer, FPDPushConnection, NSObject;
@protocol OS_dispatch_queue;

@interface FPDExtensionManager : NSObject {
    NSMutableDictionary *_providersByIdentifier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _matchingContext;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSMapTable *_sessionQueueForExtensionIdentifier;
    id /* block */ _updateHandler;
}

@property (weak, nonatomic) FPDServer *server;
@property (readonly, nonatomic) FPDPushConnection *pushConnection;

- (void)purge:(id)a0;
- (void)afterFirstDiscovery;
- (id)allProviders;
- (id)alternateContentsURLForItemID:(id)a0;
- (id)_deserializedAlternateContentsDictionary;
- (void)setAlternateContentsURL:(id)a0 forItemID:(id)a1;
- (void)migrateEnabledStateIfNecessary:(id)a0;
- (id)nonEvictableSizeByProviderDomain;
- (id)clouddocsExtensionIdentifier;
- (void)providerUpdateOnVolume:(id)a0;
- (id)domainWithID:(id)a0;
- (id)_matchingAttributes;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)a0;
- (id)_domainForURL:(id)a0;
- (void)_loadAlternateContentsDictionary;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)a0;
- (id)providersWithGroupContainers:(id)a0 bundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_updateProviderListForMatchingExtensions:(id)a0 allExtensionStartedHandler:(id /* block */)a1;
- (void)forceSynchronousProviderUpdate;
- (void)accountsChanged:(id)a0;
- (void)updateActiveProvidersForSpotlight;
- (id)providerDomainsByID;
- (id)domainForActionOperationLocator:(id)a0;
- (id)initWithServer:(id)a0 updateHandler:(id /* block */)a1;
- (id)providersWithTopLevelBundleIdentifier:(id)a0;
- (id)domainFromItemID:(id)a0;
- (void)_serializeAlternateContentsURLDictionary:(id)a0;
- (id)domainsForAppBundleIdentifier:(id)a0;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)uniquedExtensions:(id)a0;
- (id)providerDomainsByIDFromExtensionsByID:(id)a0;
- (id)providerWithIdentifier:(id)a0;
- (void)loadProvidersAndMonitor;
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)a0;
- (id)domainForURL:(id)a0;
- (id)extensionsByID:(id)a0;
- (void)_updateWithMatchingExtensions:(id)a0;
- (void)garbageCollectDomainsExceptIdentifiers:(id)a0 fromDirectory:(id)a1 isUserData:(BOOL)a2;

@end
