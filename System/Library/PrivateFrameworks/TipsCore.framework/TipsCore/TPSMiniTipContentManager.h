@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSMiniTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)init;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_contentWithContentIDCompletionOnClientQueue:(id /* block */)a0;
- (void)hintDismissedForIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)restartTrackingForContentIdentifiers:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)validateAndPrepareContentForDisplay:(id)a0 bundleID:(id)a1 context:(id)a2 synchronous:(BOOL)a3 skipUsageCheck:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)_performSyncWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)contentWithContentIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)hintDisplayedForIdentifier:(id)a0 correlationID:(id)a1 context:(id)a2;
- (void)personalizationFailedForContentID:(id)a0 bundleID:(id)a1 context:(id)a2;

@end
