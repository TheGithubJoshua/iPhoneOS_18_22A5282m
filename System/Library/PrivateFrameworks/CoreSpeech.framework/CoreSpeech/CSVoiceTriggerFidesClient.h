@class CSAudioCircularBuffer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) CSAudioCircularBuffer *audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)init;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (id)_medicalIDAge;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (void).cxx_destruct;
- (id)_lastTriggerDataWithResult:(id)a0;
- (id)_medicalIDName;
- (void)_logDESRecordWithType:(long long)a0 result:(id)a1;

@end
