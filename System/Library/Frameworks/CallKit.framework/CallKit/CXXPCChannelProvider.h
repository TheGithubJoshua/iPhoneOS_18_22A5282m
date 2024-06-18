@class CXChannelServiceDefinition, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CXXPCChannelProvider : CXChannelProvider

@property (retain, nonatomic) BSServiceConnection *connection;
@property (readonly, nonatomic) CXChannelServiceDefinition *definition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithConfiguration:(id)a0;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)requiresProxyingAVAudioSessionState;

@end
