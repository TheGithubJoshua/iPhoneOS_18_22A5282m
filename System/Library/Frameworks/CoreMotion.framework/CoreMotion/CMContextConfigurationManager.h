@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContextConfigurationManager : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (id)init;
- (void)disconnect;
- (void)connect;
- (void)dealloc;
- (void)writeContextConfiguration:(id)a0 withHandler:(id /* block */)a1;

@end
