@class AWUnitTestPearlStreamingDevice, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AWUnitTestStreamingFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSTimer *_streamingtimer;
}

@property (weak, nonatomic) AWUnitTestPearlStreamingDevice *unitTestDevice;

- (BOOL)startWithError:(id *)a0;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)awDeliverStreamingEvent;
- (void)dealloc;
- (void)startWithReply:(id /* block */)a0;

@end
