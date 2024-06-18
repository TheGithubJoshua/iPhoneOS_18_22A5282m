@class geo_isolater, NSMapTable, NSHashTable;

@interface GEOETARequester : NSObject {
    geo_isolater *_isolater;
    NSHashTable *_pendingSimpleRequests;
    NSMapTable *_pendingRequests;
}

+ (id)sharedRequester;

- (id)init;
- (BOOL)_finishRequest:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRequest:(id)a0;
- (BOOL)_finishSimpleRequest:(id)a0;
- (void)cancelSimpleETARequest:(id)a0;
- (void)startRequest:(id)a0 connectionProperties:(id)a1 auditToken:(id)a2 throttleToken:(id)a3 callbackQueue:(id)a4 willSendRequest:(id /* block */)a5 finished:(id /* block */)a6 networkActivity:(id /* block */)a7 error:(id /* block */)a8;
- (void)startSimpleETARequest:(id)a0 auditToken:(id)a1 throttleToken:(id)a2 callbackQueue:(id)a3 finished:(id /* block */)a4 networkActivity:(id /* block */)a5 error:(id /* block */)a6;

@end