@class NSXPCConnection;

@interface BMXPCConnectionWrapper : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
