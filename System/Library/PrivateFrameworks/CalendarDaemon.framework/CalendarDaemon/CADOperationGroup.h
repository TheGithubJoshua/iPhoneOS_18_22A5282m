@class ClientConnection;

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn;

+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;

- (BOOL)accessGranted;
- (void).cxx_destruct;
- (id)initWithClientConnection:(id)a0;

@end
