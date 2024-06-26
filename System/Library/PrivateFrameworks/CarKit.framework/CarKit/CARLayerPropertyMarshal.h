@class NSXPCConnection;

@interface CARLayerPropertyMarshal : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)_setupConnection;
- (void)_handleConnectionReset;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendLayerProperties:(id)a0;

@end
