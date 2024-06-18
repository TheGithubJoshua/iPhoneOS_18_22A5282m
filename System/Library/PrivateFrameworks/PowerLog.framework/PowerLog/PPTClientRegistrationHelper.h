@class NSXPCConnection;

@interface PPTClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (BOOL)permissionsForSubsystem:(id)a0 category:(id)a1;
- (void)closeXPCConnection;
- (void).cxx_destruct;
- (id)createXPCConnection;

@end
