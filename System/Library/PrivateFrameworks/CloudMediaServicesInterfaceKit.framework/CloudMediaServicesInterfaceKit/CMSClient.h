@class NSXPCConnection;

@interface CMSClient : NSObject <NSCopying>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)clientWithConnection:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
