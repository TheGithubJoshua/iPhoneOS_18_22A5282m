@class NSXPCConnection;

@interface CXXPCProvider : CXProvider

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int notifyToken;

- (id)initWithConfiguration:(id)a0;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
