@class XPCServer, CPCoreXPCService;

@interface CPCoreServerWrapper : NSObject

@property (retain, nonatomic) XPCServer *server;
@property (retain, nonatomic) CPCoreXPCService *service;

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
