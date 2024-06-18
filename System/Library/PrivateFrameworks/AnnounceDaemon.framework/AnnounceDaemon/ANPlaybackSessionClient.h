@class NSString, NSUUID, NSXPCConnection;

@interface ANPlaybackSessionClient : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSUUID *endpointID;

+ (id)clientWithXPCConnection:(id)a0;

- (id)copy;
- (void).cxx_destruct;
- (id)description;

@end
