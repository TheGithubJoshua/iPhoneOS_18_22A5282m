@class NSString, _HKXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface HDHealthRecordsLegacyIngestionServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    _HKXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (void)connectionInvalidated;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)remoteInterface;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (void)pingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dealloc;
- (void)foo;
- (id /* block */)_objectReturnOnClientQueue:(id /* block */)a0;
- (void)performDownloadRequest:(id)a0 completion:(id /* block */)a1;

@end
