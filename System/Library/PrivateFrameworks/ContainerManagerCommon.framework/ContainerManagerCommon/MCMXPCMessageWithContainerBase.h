@class NSString, MCMContainerIdentity, NSObject;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithContainerBase : MCMXPCMessageBase <MCMXPCMessage, MCMParametersWithContainer>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { char *x0; unsigned int x1; char *x2; unsigned int x3; unsigned int x4; struct { unsigned int x0[8]; } x5; int x6; BOOL x7; BOOL x8; BOOL x9; id x10; } *proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
