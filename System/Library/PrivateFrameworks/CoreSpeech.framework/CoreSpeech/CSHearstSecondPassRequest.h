@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider, CSSpeechManager, CSVoiceTriggerSecondChanceContext;

@interface CSHearstSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;

- (void)setAsset:(id)a0;
- (void)start;
- (id)initWithDeviceID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initWithDeviceID:(id)a0 speechManager:(id)a1;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
