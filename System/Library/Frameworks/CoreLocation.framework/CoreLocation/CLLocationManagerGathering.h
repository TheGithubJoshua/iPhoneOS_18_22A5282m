@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CLLocationManagerGathering : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) NSXPCConnection *connection;

- (id)init;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)fetchAdvertisementsWithHandler:(id /* block */)a0;
- (id)getConnection;
- (id)getRemoteObjectProxy;

@end
