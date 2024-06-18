@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (id)routeUID;
- (id)connection;
- (long long)routeSubtype;
- (long long)routeType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTelevision:(void *)a0;

@end
