@class NSString, NSXPCListenerEndpoint;

@interface LNConnectionActionResponse : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithXPCListenerEndpoint:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
