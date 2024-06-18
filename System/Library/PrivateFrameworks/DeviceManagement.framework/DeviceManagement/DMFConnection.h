@class CATOperationQueue, NSString, CATTaskClient;
@protocol DMFTransportProvider;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider>

@property (class, readonly, nonatomic) DMFConnection *sharedConnection;
@property (class, readonly, nonatomic) DMFConnection *systemConnection;
@property (class, readonly, nonatomic) DMFConnection *currentUserConnection;

@property (readonly, weak, nonatomic) id<DMFTransportProvider> transportProvider;
@property (readonly, nonatomic) CATTaskClient *taskClient;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) BOOL isSystemConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionForAppleID:(id)a0;
+ (id)connectionForUID:(unsigned int)a0;

- (void)clientDidInvalidate:(id)a0;
- (id)initWithUserInfo:(id)a0;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void)_operationDidFinish:(id)a0 completion:(id /* block */)a1;
- (void)performRequest:(id)a0 completion:(id /* block */)a1;
- (void)clientDidDisconnect:(id)a0;
- (void)_reconnectTaskClient;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTransportProvider:(id)a0 userInfo:(id)a1;
- (id)prepareOperationForRequest:(id)a0;
- (void)clientDidConnect:(id)a0;
- (id)makeNewTransport;
- (void)dealloc;
- (id)batchOperationToPerformOperations:(id)a0;

@end