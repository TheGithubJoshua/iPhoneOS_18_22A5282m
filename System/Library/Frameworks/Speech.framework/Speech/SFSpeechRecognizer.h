@class NSString, CXCallObserver, NSOperationQueue, NSLocale, AFDictationConnection;
@protocol SFSpeechRecognizerDelegate, NSObject;

@interface SFSpeechRecognizer : NSObject <CXCallObserverDelegate, AFDictationDelegate> {
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    CXCallObserver *_callObserver;
    id<NSObject> _facetimeObserver;
    id<NSObject> _foregroundObserver;
    id<NSObject> _preferencesObserver;
}

@property (readonly, nonatomic, getter=_isAvailableForForcedOfflineRecognition) BOOL _availableForForcedOfflineRecognition;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL supportsOnDeviceRecognition;
@property (weak, nonatomic) id<SFSpeechRecognizerDelegate> delegate;
@property (nonatomic) long long defaultTaskHint;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAuthorization:(id /* block */)a0;
+ (long long)authorizationStatus;
+ (void)initialize;
+ (void)_fetchSupportedForcedOfflineLocalesWithCompletion:(id /* block */)a0;
+ (id)supportedLocales;

- (id)initWithLocale:(id)a0;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dictationConnnectionDidChangeAvailability:(id)a0;
- (void)dealloc;
- (id)recognitionTaskWithRequest:(id)a0 delegate:(id)a1;
- (void)_prepareToRecognizeWithTaskHint:(long long)a0 completion:(id /* block */)a1;
- (void)_requestOfflineDictationSupportWithCompletion:(id /* block */)a0;
- (id)recognitionTaskWithRequest:(id)a0 resultHandler:(id /* block */)a1;

@end
