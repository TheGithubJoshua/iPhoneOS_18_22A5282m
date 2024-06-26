@protocol MCMXPCMessage, MCMReply;

@interface MCMCommandOperationReclaimDiskSpace : MCMCommand

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) id<MCMReply> handoffReply;
@property (readonly, nonatomic) BOOL asynchronously;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void)_deleteContainersOnDeathRowWithCompletion:(id /* block */)a0;
- (BOOL)_removeItemOrMoveToTempAtURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2 handoffForReply:(id)a3;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2 asyncResultPromise:(id)a3;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
