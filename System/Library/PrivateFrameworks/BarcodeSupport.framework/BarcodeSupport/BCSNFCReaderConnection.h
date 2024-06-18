@class BCSNotificationServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)disconnect;
- (BOOL)_needsRadioEnabledCheck;
- (void)checkNFCEnabledWithCompletionHandler:(id /* block */)a0;
- (long long)_hardwareSupportState;
- (void)startReaderWithDelegate:(id)a0 errorHandler:(id /* block */)a1 interruptionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enableNFCWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isNFCEnabled;
- (void)checkHardwareSupportStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)_enableNFC;
- (void)stopReaderWithErrorHandler:(id /* block */)a0;

@end
