@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (id)init;
- (id)vendorProtocolDelegate;
- (id)initWithConnection:(id)a0;
- (BOOL)isConnected;
- (int)processIdentifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (void).cxx_destruct;
- (void)dealloc;
- (id)identifier;

@end
