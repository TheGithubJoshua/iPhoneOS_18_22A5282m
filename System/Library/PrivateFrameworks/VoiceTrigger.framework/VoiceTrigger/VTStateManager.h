@class NSString, VTGestureMonitor, VTRemoteDarwinHIDEventNotifier, VTBuiltInRTModel, VTCoreSpeechKeepAliveHandler, NSObject, VTXPCServiceServer, VTPolicy, VTPhraseSpotter;
@protocol OS_dispatch_queue;

@interface VTStateManager : NSObject <VTFirstUnlockMonitorDelegate, VTGestureMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    VTPhraseSpotter *_phraseSpotter;
    VTBuiltInRTModel *_builtInRTModel;
    id /* block */ _callbackWithMessageAndTimestamp;
    VTPolicy *_enablePolicy;
    VTXPCServiceServer *_xpcServer;
    BOOL _voiceTriggerIsEnabled;
    BOOL _voiceTriggerIsEnabledOnCoreSpeechDaemon;
    BOOL _rtModelDownloaded;
    VTGestureMonitor *_gestureMonitor;
    unsigned long long _wakeGestureHostTime;
    VTRemoteDarwinHIDEventNotifier *_remoteDarwinHIDEventNotifier;
}

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstChanceAudioBuffer;
+ (void)requestPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
+ (void)requestAudioCapture:(double)a0;
+ (void)requestVoiceTriggerEnabled:(BOOL)a0 forReason:(id)a1;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (id)firstChanceVTEventInfo;
+ (void)requestRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
+ (BOOL)isLastTriggerForced;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)requestForcedSecondChance;
+ (long long)getVoiceTriggerCount;
+ (id)firstChanceTriggeredDate;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
+ (void)notifyVoiceTrigger;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (id)_serviceClient;
+ (void)requestForcedTriggerEvent;
+ (BOOL)iPhoneShouldStartVoiceTriggerInCoreSpeech;
+ (void)setCurrentBuiltInRTModelDictionary:(id)a0;
+ (void)clearVoiceTriggerCount;
+ (BOOL)isLastTriggerSecondChanceTriggered;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;

- (void)_stateTransitionDidOccur:(BOOL)a0 fromCallback:(BOOL)a1;
- (void)VTFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (id)initWithProperty:(id)a0 callbackWithMessage:(id /* block */)a1;
- (id)initWithProperty:(id)a0 phraseSpotter:(id)a1 enablePolicy:(id)a2 callbackWithMessageAndTimestamp:(id /* block */)a3;
- (void)_notifyStateTransitionToState:(long long)a0 withStartTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)getModel;
- (void)gestureMonitorDidReceiveWakeGesture:(id)a0;
- (id)initWithProperty:(id)a0 callbackWithMessageAndTimestamp:(id /* block */)a1;
- (void)_powerlog:(id)a0;
- (void)_initializeXPCService;
- (void)gestureMonitorDidReceiveSleepGesture:(id)a0;
- (id)getPhraseSpotter;

@end
