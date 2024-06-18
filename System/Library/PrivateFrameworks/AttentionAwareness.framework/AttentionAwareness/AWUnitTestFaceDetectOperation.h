@class NSObject, AWUnitTestPearlDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSObject<OS_dispatch_source> *_awInitTimer;
    NSObject<OS_dispatch_source> *_deadlineTimer;
    BOOL _started;
    BOOL _finished;
}

@property (weak, nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (BOOL)startWithError:(id *)a0;
- (void)awSetFaceFound;
- (void)awFinishWithReason:(long long)a0;
- (id)init;
- (long long)state;
- (void)cancel;
- (void)awSetFaceDetectError;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startWithReply:(id /* block */)a0;
- (void)awDeliverFaceFound;

@end
