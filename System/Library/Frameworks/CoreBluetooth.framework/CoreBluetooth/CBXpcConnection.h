@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CBXpcConnectionDelegate, OS_xpc_object;

@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _uiAppIsBackgrounded;
    id /* block */ _whbReplyHandler;
    NSMutableDictionary *_whbRemoteToLocalUuidMap;
}

@property (weak, nonatomic) id<CBXpcConnectionDelegate> delegate;

- (id)getWhbLocalIdForRemoteId:(id)a0;
- (void)didReceiveForwardedMessage:(id)a0;
- (void)setWhbLocalId:(id)a0 forRemoteId:(id)a1;
- (void)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)disconnect;
- (void)_checkIn;
- (void)forwardWhbMsg:(unsigned short)a0 args:(id)a1 cnx:(id)a2;
- (void)removeWhbRemoteId:(id)a0;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleFinalized;
- (void)setTargetQueue:(id)a0;
- (id)getEventQueue;
- (void)didReceiveForwardedDelegateCallbackMessage:(id)a0;
- (void)sendMsgWithReply:(unsigned short)a0 args:(id)a1 replyBlock:(id /* block */)a2;
- (void)_handleInvalid;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2 sessionType:(int)a3;
- (void)_checkOut;
- (void)_handleConnectionEvent:(id)a0;
- (id)_nameForMessage:(unsigned short)a0;
- (void)_sendBarrier;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_handleReset;
- (void)setWhbReplyHandler:(id /* block */)a0;
- (void)_applicationWillEnterForegroundNotification;
- (id)_allocXpcMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleMsg:(id)a0;

@end
