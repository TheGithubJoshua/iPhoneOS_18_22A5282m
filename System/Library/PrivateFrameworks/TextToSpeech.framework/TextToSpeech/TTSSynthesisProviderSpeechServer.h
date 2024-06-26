@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTSSynthesisProviderSpeechServer : NSObject <TTSSynthesisProviderAudioEngineProtocol, TTSSpeechService, TTSSpeechSynthesizerDelegate, TTSSpeechServiceUnitTesting>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) NSMutableDictionary *requestMapping;
@property (retain, nonatomic) NSMutableDictionary *speechEngines;
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
- (void)synthesisProviderDidStartSpeakingMarker:(id)a0 forRequest:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonSSMLSubstringRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 fromSSML:(id)a1;
- (BOOL)isNashvilleService;
- (id)genericMarkerMarkupForVoice:(id)a0 name:(id)a1;
- (void)synthesisProviderDidFinishSpeakingRequest:(id)a0 successfully:(BOOL)a1 withError:(id)a2;
- (oneway void)getSpeechIsActiveForRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)startSpeechRequest:(id)a0;
- (BOOL)employSpeechMarkupForType:(long long)a0 language:(id)a1;
- (void).cxx_destruct;
- (id)supportedIPAPhonemeLanguages;
- (id)_escapeSSML:(id)a0;
- (struct __CFArray { } *)loadedVoiceResources;
- (BOOL)canInitializeSpeech:(id)a0;
- (BOOL)isVoiceValid:(id)a0;
- (oneway void)getVoicesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)continueSpeechRequest:(id)a0;
- (oneway void)getVoicesForLanguage:(id)a0 queryingMobileAssets:(BOOL)a1 reply:(id /* block */)a2;
- (id)_speechEngineForSynthesizerInstance:(unsigned long long)a0;
- (void)initializeSpeechServerInstance:(unsigned long long)a0;
- (id)_unescapeDelimeterBoundedSSMLInString:(id)a0;
- (id)_ttsMarkerForSSEMarker:(id)a0 forRequest:(id)a1;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;

@end
