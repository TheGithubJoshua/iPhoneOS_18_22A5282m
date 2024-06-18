@class NSString, NSXPCConnection;

@interface COCoordinationServiceClient : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;

- (id)initWithConnection:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
