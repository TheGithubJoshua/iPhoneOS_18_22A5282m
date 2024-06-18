@class HDHAHealthAppPluginHostConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject

@property (retain, nonatomic) HDHAHealthAppPluginHostConnection *connection;

- (id)init;
- (void)handleJournaledSharingEntries:(id)a0;
- (id)synchronousHealthAppPluginHost;
- (void)runBackgroundGenerationForAllPlugins;
- (void).cxx_destruct;
- (void)invalidateStoreCache;
- (id)healthAppPluginHost;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)a0 commitUrgentTransaction:(BOOL)a1 feedItemsOnly:(BOOL)a2;

@end
