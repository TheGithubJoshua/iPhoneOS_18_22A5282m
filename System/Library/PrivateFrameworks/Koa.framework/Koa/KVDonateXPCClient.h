@class KVXPCClient;

@interface KVDonateXPCClient : NSObject <KVDonateService> {
    KVXPCClient *_client;
}

- (void)terminate;
- (void)removeItemId:(id)a0 completion:(id /* block */)a1;
- (oneway void)closeDatasetStream:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addItems:(id)a0 completion:(id /* block */)a1;
- (oneway void)abortDatasetStream;
- (oneway void)openDatasetStream:(unsigned long long)a0 validity:(id)a1 itemType:(long long)a2 originAppId:(id)a3 deviceId:(id)a4 userId:(id)a5 options:(unsigned short)a6 completion:(id /* block */)a7;
- (id)initWithClientId:(id)a0;

@end
