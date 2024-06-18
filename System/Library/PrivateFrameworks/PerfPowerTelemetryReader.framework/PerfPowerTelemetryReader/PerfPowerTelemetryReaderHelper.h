@class NSXPCConnection;

@interface PerfPowerTelemetryReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void)closeXPCConnection;
- (void).cxx_destruct;
- (id)createXPCConnection;
- (id)postDataRequest:(id)a0 outError:(id *)a1;

@end
