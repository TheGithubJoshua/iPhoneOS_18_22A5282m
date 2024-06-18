@class TTSSpeechServerInstance, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {
    NSMutableDictionary *_serverInstances;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue;
@property (retain, nonatomic) TTSSpeechServerInstance *speechInitializationInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)regexRules;

- (BOOL)isSiriService;
- (id)init;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)combinedProsodyMarkupForVoice:(id)a0 string:(id)a1 rate:(id)a2 pitch:(id)a3 volume:(id)a4;
- (id)audioFileSettingsForVoice:(id)a0;
- (void)setServiceQueue:(id)a0 forSynthesizerInstanceID:(unsigned long long)a1;
- (id)speechMarkupStringForType:(long long)a0 voice:(id)a1 string:(id)a2;
- (void)synthesizerInstanceDestroyed:(unsigned long long)a0;
- (BOOL)isNashvilleService;
- (id)genericMarkerMarkupForVoice:(id)a0 name:(id)a1;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)startSpeechRequest:(id)a0;
- (BOOL)employSpeechMarkupForType:(long long)a0 language:(id)a1;
- (void).cxx_destruct;
- (id)supportedIPAPhonemeLanguages;
- (struct __CFArray { } *)loadedVoiceResources;
- (BOOL)canInitializeSpeech:(id)a0;
- (BOOL)isVoiceValid:(id)a0;
- (oneway void)continueSpeechRequest:(id)a0;
- (oneway void)getVoicesForLanguage:(id)a0 queryingMobileAssets:(BOOL)a1 reply:(id /* block */)a2;
- (void)initializeSpeechServerInstance:(unsigned long long)a0;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (id)embeddedPitchMarkupForVoice:(id)a0 string:(id)a1 pitch:(double)a2;
- (id)embeddedRateMarkupForVoice:(id)a0 string:(id)a1 rate:(double)a2;
- (id)embeddedVolumeMarkupForVoice:(id)a0 string:(id)a1 volume:(double)a2;
- (id)enclosedStringWithPhonemes:(id)a0;
- (BOOL)isSiriNeuralVoice:(id)a0;
- (id)lhPhonemesFromIPA:(id)a0 language:(id)a1;
- (id)nashvilleVoiceIdentifier:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4;
- (id)nashvilleVoiceName:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4;
- (id)phonemesFromIPA:(id)a0 language:(id)a1;
- (id)_behavesBadlyWithSpellMarkupForVoice:(id)a0 string:(id)a1 markupType:(long long)a2;
- (id)_ttsCopyVoiceInfo:(id)a0 type:(long long)a1 queryingMobileAssets:(BOOL)a2;
- (id)getNewSpeechServerInstance;
- (id)getVocalizerWithLanguage:(id)a0 defaultLanguage:(id)a1 reinitIfNecessary:(BOOL)a2 forceReinit:(BOOL)a3 voiceType:(long long)a4 gender:(long long)a5 footprint:(long long)a6 voiceName:(id)a7 voiceIdentifier:(id)a8 error:(id *)a9;
- (void)nashvilleVoiceIdentifier:(id)a0 footprint:(long long)a1 voiceType:(long long)a2 gender:(long long)a3 assetVoiceName:(id)a4 voiceId:(id *)a5 voiceName:(id *)a6;
- (BOOL)requiresLHPPhonemes;

@end
