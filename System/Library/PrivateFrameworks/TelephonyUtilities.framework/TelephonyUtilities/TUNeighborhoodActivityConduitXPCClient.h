@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUNeighborhoodActivityConduitXPCClientDelegate;

@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>

@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *neighborhoodActivityServerXPCInterface;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) int token;
@property (weak, nonatomic) id<TUNeighborhoodActivityConduitXPCClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedXPCClasses;
+ (void)setAsynchronousServer:(id)a0;
+ (id)asynchronousServer;

- (id)init;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (void)approveSplitSessionForConversation:(id)a0 requestedFromDevice:(id)a1 pullContext:(long long)a2 completion:(id /* block */)a3;
- (id)server;
- (oneway void)splitSessionStarted:(id)a0;
- (void)activeSplitSessionTVDeviceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (oneway void)tvDeviceDisappeared:(id)a0;
- (void)disconnectTVDevice:(id)a0 completion:(id /* block */)a1;
- (oneway void)splitSessionEnded:(id)a0;
- (oneway void)tvDeviceAppeared:(id)a0;
- (void)dealloc;
- (void)inviteTVDevice:(id)a0 toConversationWithUUID:(id)a1 completion:(id /* block */)a2;
- (void)nearbyTVDevicesWithCompletion:(id /* block */)a0;
- (void)registerApprovalClientEnabled:(BOOL)a0;
- (void)ensureConnection;
- (void)cancelSplitSessionApproval;

@end
