@class NSObject;
@protocol OS_dispatch_queue, CMVO2MaxRetrocomputeDelegate;

@interface CMVO2MaxRetrocomputeManager : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
}

@property (weak, nonatomic) id<CMVO2MaxRetrocomputeDelegate> delegate;

- (id)init;
- (void)disconnect;
- (void)connect;
- (void).cxx_destruct;
- (void)dealloc;
- (void)triggerRetrocomputeWithHandler:(id /* block */)a0;
- (void)retrocomputeStateWithHandler:(id /* block */)a0;
- (void)retrocomputeStatusWithHandler:(id /* block */)a0;
- (void)startRetrocomputeStatusUpdates;
- (void)stopRetrocomputeStatusUpdates;

@end