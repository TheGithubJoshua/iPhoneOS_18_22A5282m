@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_serviceConnectionWithName:(id)a0;
+ (id)defaultBroker;
+ (id)_storeKitClientInterface;
+ (id)_storeKitServiceInterface;

- (id)init;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)a0;
- (id)_serviceConnection;
- (void).cxx_destruct;
- (void)_serviceConnectionInvalidated;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;

@end
