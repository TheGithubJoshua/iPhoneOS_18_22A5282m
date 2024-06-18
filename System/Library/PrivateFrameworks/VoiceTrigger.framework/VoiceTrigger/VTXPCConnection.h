@class NSString, NSMutableSet, VTSiriPHash;

@interface VTXPCConnection : NSObject <VTXPCService> {
    NSMutableSet *_activationAssertions;
    BOOL _isPhraseSpotterBypassed;
    BOOL _isRecording;
    VTSiriPHash *_hasher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (oneway void)getFirstChanceAudioBufferWithReply:(id /* block */)a0;
- (oneway void)requestCurrentBuiltInRTModelDictionaryWithReply:(id /* block */)a0;
- (id)init;
- (oneway void)resetAssertions;
- (oneway void)requestAudioCapture:(double)a0;
- (oneway void)queryLastTriggerEventTypeWithReply:(id /* block */)a0;
- (oneway void)getFirstChanceVTEventInfoWithReply:(id /* block */)a0;
- (oneway void)enableTriggerEventXPCNotification:(BOOL)a0;
- (oneway void)getVoiceTriggerCountWithReply:(id /* block */)a0;
- (oneway void)notifyTriggerEventRequest;
- (void).cxx_destruct;
- (oneway void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1 timestamp:(double)a2;
- (oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
- (oneway void)isLastTriggerFollowedBySpeechWithReply:(id /* block */)a0;
- (oneway void)getFirstChanceTriggeredDateWithReply:(id /* block */)a0;
- (oneway void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1 timestamp:(double)a2;
- (void)handleDisconnect;
- (oneway void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)_setPhraseSpotterBypassing:(BOOL)a0;
- (oneway void)notifySecondChanceRequest;
- (oneway void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (oneway void)clearVoiceTriggerCount;
- (void)_setRaiseToSpeakBypassing:(BOOL)a0;
- (oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;
- (oneway void)getTestResponse:(id /* block */)a0;

@end
