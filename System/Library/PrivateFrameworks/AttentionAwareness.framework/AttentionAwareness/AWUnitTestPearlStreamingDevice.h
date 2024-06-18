@class NSObject;
@protocol OS_dispatch_queue, BKDevicePearlDelegate;

@interface AWUnitTestPearlStreamingDevice : NSObject {
    NSObject<OS_dispatch_queue> *_awQueue;
}

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedDevice;

- (id)init;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)a0;

@end
