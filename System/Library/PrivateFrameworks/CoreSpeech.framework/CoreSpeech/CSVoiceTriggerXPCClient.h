@class NSObject;
@protocol OS_xpc_object, CSVoiceTriggerXPCClientDelegate;

@interface CSVoiceTriggerXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (weak, nonatomic) id<CSVoiceTriggerXPCClientDelegate> delegate;

- (void)_handleListenerEvent:(id)a0;
- (id)init;
- (id)fetchVoiceTriggerStats;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)connect;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)_handleListenerError:(id)a0;
- (void)dealloc;
- (void)_handleListenerDisconnectedError:(id)a0;

@end
