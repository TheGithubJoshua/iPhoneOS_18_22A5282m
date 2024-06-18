@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConnectClientProxy : NSObject <NSSecureCoding, SUCoreConnectClientProxyProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) id /* block */ genericBlock;
@property (readonly, nonatomic) id /* block */ progressBlock;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) NSString *clientIDRaw;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithClientID:(id)a0 completionQueue:(id)a1 genericBlock:(id /* block */)a2;
- (id)initWithClientID:(id)a0 completionQueue:(id)a1 genericBlock:(id /* block */)a2 progressBlock:(id /* block */)a3;
- (void)executeProgressBlock:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (void)executeGenericBlock:(id)a0;
- (id)initWithClientID:(id)a0 completionQueue:(id)a1 progressBlock:(id /* block */)a2;

@end
