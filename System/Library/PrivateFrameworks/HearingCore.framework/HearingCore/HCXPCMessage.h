@class NSDictionary, NSError, NSObject, HCXPCClient;
@protocol OS_xpc_object;

@interface HCXPCMessage : NSObject

@property (weak, nonatomic) HCXPCClient *client;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;
@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSError *error;

+ (id)messageWithPayload:(id)a0;
+ (id)messageWithPayload:(id)a0 xpcMessage:(id)a1 andClient:(id)a2;

- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)a0;
- (void)dealloc;
- (id)replyMessageWithPayload:(id)a0;

@end
