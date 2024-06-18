@class CKVDonateRequest, NSXPCConnection, CKVIndexUpdater, NSObject;
@protocol OS_dispatch_queue, CKVDonateRequestDelegate;

@interface CKVDonateConnection : NSObject <KVDonateService> {
    NSObject<CKVDonateRequestDelegate> *_delegate;
    NSXPCConnection *_xpc;
    CKVDonateRequest *_request;
    id /* block */ _openStreamCompletion;
    CKVIndexUpdater *_updater;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)removeItemId:(id)a0 completion:(id /* block */)a1;
- (oneway void)closeDatasetStream:(id /* block */)a0;
- (void)interrupt;
- (void).cxx_destruct;
- (void)resume;
- (void)addItems:(id)a0 completion:(id /* block */)a1;
- (oneway void)abortDatasetStream;
- (id)initWithRequestDelegate:(id)a0 xpc:(id)a1;
- (void)cleanupDatasetStream:(long long)a0;
- (BOOL)isXPC;
- (oneway void)openDatasetStream:(unsigned long long)a0 validity:(id)a1 itemType:(long long)a2 originAppId:(id)a3 deviceId:(id)a4 userId:(id)a5 options:(unsigned short)a6 completion:(id /* block */)a7;

@end
