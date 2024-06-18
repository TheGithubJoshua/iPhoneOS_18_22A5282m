@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_recordStateQueue;
}

@property (nonatomic) BOOL isSiriClientConsideredAsRecord;
@property (retain, nonatomic) NSString *pendingRecordingStopUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (id)init;
- (BOOL)_isInPhoneCallStateWithHSPhoneCallCapableRoute;
- (void)_subscribeEventMonitors;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)_addConditionsForIOSBargeIn;
- (BOOL)_isSpeechDetectionDevicePresent;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didChangedRecordState:(BOOL)a1 withEventUUID:(id)a2 withContext:(id)a3;
- (void)_addConditionsForIOSAOP;
- (void).cxx_destruct;
- (BOOL)_isHearstRoutedAndWithNoPhoneCall;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;

@end
