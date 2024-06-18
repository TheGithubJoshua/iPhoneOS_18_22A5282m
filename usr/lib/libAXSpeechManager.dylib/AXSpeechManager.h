@class AVAudioSession, NSString, NSArray, AXDispatchTimer, AXSpeechThread, NSLock, NSMutableArray, TTSSpeechSynthesizer, AXSpeechAction, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {
    NSMutableArray *_speechQueue;
    TTSSpeechSynthesizer *_synthesizer;
    AXSpeechThread *_runThread;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _isSpeaking;
    BOOL _audioSessionObserversEnabled;
    BOOL _speechThreadFinished;
    NSLock *_speechThreadQueueLock;
}

@property (retain, nonatomic) NSNumber *originalSpeechRateForJobOverride;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) AXDispatchTimer *audioDeactivatorTimer;
@property (nonatomic) BOOL wasSpeakingBeforeAudioInterruption;
@property (nonatomic) BOOL didRequestStartSpeakingDuringAudioInterruption;
@property (nonatomic) BOOL didRequestPauseSpeakingDuringAudioInterruption;
@property (nonatomic) BOOL didRequestResumeSpeakingDuringAudioInterruption;
@property (nonatomic) double audioInterruptionStartedTime;
@property (retain, nonatomic) AVAudioSession *audioSession;
@property (nonatomic) BOOL isInAudioInterruption;
@property (retain, nonatomic) AXSpeechAction *requestedActionDuringAudioInterruption;
@property (nonatomic) BOOL shouldHandleAudioInterruptions;
@property (nonatomic) BOOL speechEnabled;
@property (readonly, nonatomic) BOOL showControlCenterControls;
@property (readonly, nonatomic) BOOL isSpeaking;
@property (nonatomic) unsigned int audioQueueFlags;
@property (nonatomic) BOOL usesAuxiliarySession;
@property (nonatomic) unsigned long long setActiveOptions;
@property (retain, nonatomic) NSString *audioSessionCategory;
@property (nonatomic) unsigned long long audioSessionCategoryOptions;
@property (retain, nonatomic) NSArray *outputChannels;
@property (nonatomic) double audioSessionInactiveTimeout;
@property (copy, nonatomic) id /* block */ requestWillStart;
@property (nonatomic) BOOL supportsAccurateWordCallbacks;
@property (nonatomic) BOOL skipLuthorRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioFileSettingsForVoice:(id)a0;
+ (id)availableLanguageCodes;
+ (id)currentLanguageCode;
+ (id)availableVoices;
+ (id)languageCodeForVoiceIdentifier:(id)a0;
+ (BOOL)_isCharacterNativelySpeakable:(unsigned short)a0 languageCode:(id)a1;
+ (id)_resetAvailableVoices;
+ (id)_resetAvailableVoices:(BOOL)a0;
+ (id)avSpeechVoicesForTTSSpeechVoices:(id)a0;
+ (id)availableSuperCompactVoices;
+ (id)availableVoices:(BOOL)a0;
+ (struct URegularExpression { } *)createRegularExpressionFromString:(id)a0;
+ (BOOL)currentProcessAllowedToSaveVoiceInfo;
+ (id)literalStringMarkup:(id)a0 string:(id)a1 speakCap:(BOOL)a2;
+ (id)matchedRangesForString:(id)a0 withRegularExpression:(struct URegularExpression { } *)a1;
+ (id)pauseMarkupString:(id)a0;
+ (id)remapLanguageCode:(id)a0;
+ (id)spellOutLetterCaseMarkupString:(id)a0 string:(id)a1;
+ (id)spellOutMarkupString:(id)a0 string:(id)a1;
+ (void)test_actionStartTap:(id /* block */)a0;
+ (void)test_setAvailableVoices:(id)a0;
+ (void)test_setUnitTestMode:(BOOL)a0;

- (id)init;
- (void)pauseSpeaking:(int)a0;
- (void)_tearDown;
- (void)tearDown;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_initialize;
- (BOOL)isSpeaking;
- (void).cxx_destruct;
- (void)dealloc;
- (void)continueSpeaking;
- (void)stopSpeaking:(int)a0;
- (void)speechSynthesizer:(id)a0 didContinueSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didPauseSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRequest:(id)a2;
- (void)stopSpeaking;
- (void)_didBeginInterruption;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 withError:(id)a3;
- (id)_phonemeSubstitutionsForAction:(id)a0;
- (id)voiceIdentifierUsedForLanguage:(id)a0;
- (void)_pauseSpeaking:(id)a0;
- (void)__speechJobFinished:(id)a0;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_didEndInterruption;
- (void)_dispatchSpeechAction:(id)a0;
- (BOOL)_enqueueSelectorOnSpeechThread:(SEL)a0 object:(id)a1 waitUntilDone:(BOOL)a2;
- (void)_handleAudioInterruption:(id)a0;
- (void)_handleMediaServicesWereLost:(id)a0;
- (void)_handleMediaServicesWereReset:(id)a0;
- (void)_isSpeaking:(id)a0;
- (void)_processAudioBufferCallback:(id)a0;
- (void)_processDidContinueCallback:(id)a0;
- (void)_processDidPauseCallback:(id)a0;
- (void)_processDidStartCallback:(id)a0;
- (void)_processWillSpeechRange:(id)a0;
- (void)_resetInterruptionTracking;
- (void)_speechJobFinished:(BOOL)a0 action:(id)a1;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)a0;
- (void)_updateAudioSessionProperties;
- (void)_updateAuxiliarySession;
- (void)_updateUserSubstitutions;
- (void)clearSpeechQueue;
- (void)dispatchSpeechAction:(id)a0;
- (id)externalVoiceIdentifierUsedForLanguage:(id)a0;
- (void)handleAudioSessionObservers:(BOOL)a0;

@end