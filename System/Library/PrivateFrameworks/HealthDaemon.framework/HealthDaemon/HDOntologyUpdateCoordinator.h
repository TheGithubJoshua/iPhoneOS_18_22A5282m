@class HDOntologyFeatureCoordinator, HDPeriodicActivity, HDXPCGatedActivity, HDDaemon, HDOntologyShardRegistry, HDAssertion, HDOntologyShardPruner, NSString, HDOntologyManifestUpdater, HDPrimaryProfile, NSOperationQueue, HDOntologyShardImporter, HDOntologyShardDownloader;

@interface HDOntologyUpdateCoordinator : NSObject <HDPeriodicActivityDelegate, HDProfileReadyObserver, NSURLSessionTaskDelegate> {
    HDPeriodicActivity *_periodicActivity;
    HDXPCGatedActivity *_gatedActivity;
    HDXPCGatedActivity *_fallbackActivity;
    HDAssertion *_lock_preparedDatabaseAccessibilityAssertion;
    HDAssertion *_lock_preparedRegistryAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_threadLocalKeyIsRunningTransaction;
    NSOperationQueue *_updateOperationQueue;
}

@property (copy, nonatomic) id /* block */ unitTesting_willTriggerGatedActivity;
@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDOntologyFeatureCoordinator *featureCoordinator;
@property (readonly, nonatomic) HDOntologyManifestUpdater *manifestUpdater;
@property (readonly, nonatomic) HDOntologyShardDownloader *downloader;
@property (readonly, nonatomic) HDOntologyShardImporter *importer;
@property (readonly, nonatomic) HDOntologyShardRegistry *shardRegistry;
@property (readonly, nonatomic) HDOntologyShardPruner *pruner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (id)initWithDaemon:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)downloadRequiredShardsWithCompletion:(id /* block */)a0;
- (void)updateOntologyWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)setOntologyServerURL:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (id)ontologyServerURL;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)updateOntologyWithShardIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(int)a2 localShardURL:(id)a3 shardVersion:(long long)a4 error:(id *)a5;
- (void)triggerGatedUpdateWithMaximumDelay:(double)a0 completion:(id /* block */)a1;
- (void)updateShardRegistryWithCompletion:(id /* block */)a0;
- (BOOL)performOntologyTransactionForWrite:(BOOL)a0 databaseTransaction:(id)a1 error:(id *)a2 transactionHandler:(id /* block */)a3;

@end
