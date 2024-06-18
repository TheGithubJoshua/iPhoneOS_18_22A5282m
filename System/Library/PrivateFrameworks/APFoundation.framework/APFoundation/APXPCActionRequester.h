@class Protocol, NSUUID, APXPCRemoteConnection, APUnfairLock, NSString;

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol>

@property (class, readonly, nonatomic) APUnfairLock *unfairLock;

@property (retain, nonatomic) id remoteObjectProxy;
@property (retain, nonatomic) APXPCRemoteConnection *connection;
@property (retain, nonatomic) NSUUID *delegateID;
@property (readonly, nonatomic) Protocol *exportedInterface;
@property (readonly, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (void)finished;
- (id)init;
- (void)connectionInvalidated;
- (void)extendCollectionClassesForRemoteInterface:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)xpcConnection;
- (void)dealloc;
- (void)extendCollectionClassesForExportedInterface:(id)a0;

@end
