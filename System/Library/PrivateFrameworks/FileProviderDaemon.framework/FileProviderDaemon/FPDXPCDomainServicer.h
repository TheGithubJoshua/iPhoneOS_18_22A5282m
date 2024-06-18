@class FPDExtensionSession, NSString, FPDServer, NSXPCConnection, FPDProvider, FPDXPCDomainServicerLifetimeExtender, NSObject, FPDDomain;
@protocol OS_os_log, OS_os_transaction, OS_dispatch_queue, FPProgressProtocol;

@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDServer *_server;
    FPDProvider *__provider;
    FPDDomain *_domain;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_requestQueue;
    id _activePresenterObservation;
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;
    BOOL _isALifetimerExtender;
    NSObject<OS_os_transaction> *_serviceTransaction;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property (readonly, nonatomic) FPDDomain *domainOrNil;
@property (retain, nonatomic) id<FPProgressProtocol> uploadProxy;
@property (retain, nonatomic) id<FPProgressProtocol> downloadProxy;

- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)evictItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDomainEjectable:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)a0;
- (int)pid;
- (void)stopExtendingLifetime;
- (void)signalErrorResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerLifetimeExtension;
- (void)reimportItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)startAccessingServiceWithName:(id)a0 itemID:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithServer:(id)a0 providerDomainID:(id)a1 domain:(id)a2 connection:(id)a3;
- (void)_t_setFilePresenterObserver:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)subscribeToDownloadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (id)description;
- (void)runTestingOperations:(id)a0 completionHandler:(id /* block */)a1;
- (id)newFileProviderProxy;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)materializeItemWithIdentifier:(id)a0 requestedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 completionHandler:(id /* block */)a2;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)a0;
- (id)__providerIfExists;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToUploadProgressUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)ingestFromCacheItemWithIdentifier:(id)a0 requestedFields:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)enumeratePendingSetFromSyncAnchor:(id)a0 suggestedBatchSize:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_unregisterLifetimeExtension;
- (id)providerOrNil;
- (void)didChangeItemID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startExtendingLifetime;

@end
