@class NSXPCConnection;

@interface INDaemonConnection : NSObject {
    NSXPCConnection *_connection;
}

- (BOOL)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 error:(id *)a2;
- (BOOL)unregisterAccount:(id)a0 fromiCloudNotificationsWithError:(id *)a1;
- (id)init;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (void)unregisterAccount:(id)a0 fromiCloudNotificationsWithCompletion:(id /* block */)a1;
- (void)registerAccount:(id)a0 foriCloudNotificationsWithReason:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)clearAllRegistrationDigestsWithError:(id *)a0;
- (id)diagnosticReport;
- (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)notifyDeviceStorageLevel:(long long)a0 completion:(id /* block */)a1;
- (void)teardownOffersForAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)remoteFreshmintFlowCompletedWithSuccess:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)presentHiddenFreshmintWithContext:(id)a0 completion:(id /* block */)a1;
- (void)renewCredentialsWithCompletion:(id /* block */)a0;
- (void)displayDelayedOfferWithContext:(id)a0 completion:(id /* block */)a1;
- (void)iCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)updateOfferForAccount:(id)a0 offerId:(id)a1 buttonId:(id)a2 info:(id)a3 completion:(id /* block */)a4;

@end
