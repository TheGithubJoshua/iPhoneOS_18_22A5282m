@class RPFileTransferSession, MBManager, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _started;
    _Atomic BOOL _canceled;
    _Atomic BOOL _finished;
    _Atomic BOOL _suspended;
}

@property (retain, nonatomic) MBManager *manager;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *completionError;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ connectionStateHandler;
@property (copy, nonatomic) id /* block */ connectionInfoHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)_suspend;
- (BOOL)started;
- (BOOL)finished;
- (BOOL)canceled;
- (void)managerDidLoseConnectionToService:(id)a0;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void)start;
- (void)_cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resume;
- (long long)taskType;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didUpdateDeviceTransferConnectionInfo:(id)a1;
- (BOOL)_startWithError:(id *)a0;
- (BOOL)_handleCompletionWithError:(id *)a0;

@end
