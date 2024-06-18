@class NSString, BKFaceDetectOperation, BKDevicePearl, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWPearlAttentionStreamer : StreamingOperation <BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    id /* block */ _callbackBlock;
    id /* block */ _notificationBlock;
    BOOL _attentionStreamerRunning;
    BOOL _unitTest;
    NSObject<OS_dispatch_queue> *_queue;
    int _attentionAwareFeaturesEnabledNotification;
    BOOL _isAttentionAwareFeaturesEnabled;
    int _displayNotifyToken;
    BOOL _displayOn;
    BOOL _smartCoverClosed;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisplayState:(BOOL)a0;
- (void)setSmartCoverState:(BOOL)a0;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (BOOL)isStreamerRunning;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (id)initForUnitTest:(BOOL)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)setDisplayStateFromNotification;
- (union { })getStreamerOptions;
- (id)cancelEventStream;
- (id)streamEventWithBlock:(id /* block */)a0 options:(union { })a1;
- (void)setNotificationHandler:(id /* block */)a0;

@end
