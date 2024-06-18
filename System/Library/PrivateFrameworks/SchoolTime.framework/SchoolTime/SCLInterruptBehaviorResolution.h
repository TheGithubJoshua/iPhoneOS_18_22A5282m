@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SCLInterruptBehaviorResolution : NSObject {
    NSString *_clientIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

+ (id)resolutionForClientIdentifier:(id)a0;

- (id)initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setServerConnection:(id)a0;
- (id)serverConnection;
- (id)resolveBehaviorForEvent:(id)a0 error:(out id *)a1;

@end
