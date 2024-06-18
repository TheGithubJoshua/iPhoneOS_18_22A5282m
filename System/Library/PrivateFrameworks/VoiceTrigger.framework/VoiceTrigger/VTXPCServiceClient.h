@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (id)init;
- (id)getFirstChanceAudioBuffer;
- (void)resetAssertions;
- (void)requestAudioCapture:(double)a0;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (long long)getVoiceTriggerCount;
- (void)notifyTriggerEventRequest;
- (id)getFirstChanceVTEventInfo;
- (void).cxx_destruct;
- (id)getFirstChanceTriggeredDate;
- (long long)isLastTriggerFollowedBySpeech;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)a0;
- (id)requestCurrentBuiltInRTModelDictionary;
- (unsigned char)getLastTriggerType;
- (void)dealloc;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1;
- (void)notifySecondChanceRequest;
- (id)_service;
- (void)setCurrentBuiltInRTModelDictionary:(id)a0;
- (void)clearVoiceTriggerCount;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)a0;

@end
