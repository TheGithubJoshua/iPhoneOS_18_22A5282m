@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AXAssetsService : NSObject {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

- (id)init;
- (id)_serviceProxy;
- (void)updateTTSResourcesForActionType:(unsigned long long)a0;
- (void)runFirstBootTasks:(BOOL)a0;
- (void)refreshAssetCatalogForPolicy:(id)a0 withOverrideTimeout:(id)a1 forceCatalogRefresh:(BOOL)a2;
- (void)informSiriVoiceSubscriptionsWithVoiceId:(id)a0 addition:(BOOL)a1;
- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)updateAssetForPolicy:(id)a0;
- (id)xpcConnection;
- (void)restartTTSResourceMigration;
- (void)dealloc;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (void)downloadTTSResourceForVoiceId:(id)a0;
- (void)componentCacheChanged;

@end
