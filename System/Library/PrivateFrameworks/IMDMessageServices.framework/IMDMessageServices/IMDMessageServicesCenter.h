@class NSObject;
@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)_connect;
- (void)_requestWatchdogWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)requestRoutingWithCompletion:(id /* block */)a0;
- (void)requestRoutingForMessageGuid:(id)a0 inChat:(id)a1 error:(unsigned int)a2 completionBlock:(id /* block */)a3;
- (void)requestExpireStateWithCompletion:(id /* block */)a0;
- (void)requestExpireStateForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestWatchdogForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)_disconnect;
- (void)dealloc;
- (void)requestWatchdogWithCompletion:(id /* block */)a0;
- (void)_requestRoutingWithGUID:(id)a0 chatGUID:(id)a1 error:(unsigned int)a2 handler:(id /* block */)a3;
- (void)_requestExpireStateWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)_disconnected;

@end
