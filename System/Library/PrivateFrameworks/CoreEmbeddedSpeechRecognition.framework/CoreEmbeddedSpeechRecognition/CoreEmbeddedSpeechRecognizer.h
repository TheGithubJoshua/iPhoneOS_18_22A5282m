@class NSString, NSXPCConnection, NSData, NSError, NSObject;
@protocol OS_dispatch_queue, CoreEmbeddedSpeechRecognizerDelegate;

@interface CoreEmbeddedSpeechRecognizer : NSObject <CESRSpeechServiceDelegate, CoreEmbeddedSpeechRecognizerProvider> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_esConnection;
    BOOL _hasRecognizedAnything;
    unsigned char _instanceUUID[16];
    NSString *_currentLanguage;
    NSError *_recognitionError;
    NSString *_preheatedProfileAssetPath;
    NSData *_preheatedProfile;
}

@property (readonly, weak, nonatomic) id<CoreEmbeddedSpeechRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)purgeInstalledAssetsExceptLanguages:(id)a0 assetType:(unsigned long long)a1 error:(id *)a2;
+ (id)dictionaryWithContentsProfilePathForLanguage:(id)a0 errorOut:(id *)a1;
+ (void)setAssetsPurgeabilityExceptLanguages:(id)a0 assetType:(unsigned long long)a1;
+ (id)purgeInstalledAssetsExceptLanguages:(id)a0 error:(id *)a1;
+ (id)speechProfileDataLastModifiedDataForLanguage:(id)a0;
+ (id)offlineDictationStatusIgnoringCache:(BOOL)a0 error:(id *)a1;
+ (void)resetCacheAndCompileAllAssets;
+ (id)profilePathForLanguage:(id)a0 errorOut:(id *)a1;

- (id)_connection;
- (void)runCorrectedTextEvaluationWithAudioDatas:(id)a0 recordDatas:(id)a1 language:(id)a2 samplingRate:(unsigned long long)a3 caseSensitive:(BOOL)a4 skipLME:(BOOL)a5 wordSenseAccessListSet:(id)a6 completion:(id /* block */)a7;
- (void)preheatSpeechRecognitionWithLanguage:(id)a0 modelOverrideURL:(id)a1;
- (id)init;
- (oneway void)speechServiceDidRecognizePackage:(id)a0 withMetadata:(id)a1;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)a0 assetType:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)resetDESWithCompletion:(id /* block */)a0;
- (void)getOfflineDictationStatusIgnoringCache:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)createSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 JSONData:(id)a2 completion:(id /* block */)a3;
- (void)runAdaptationRecipeEvaluation:(id)a0 recordData:(id)a1 attachments:(id)a2 completion:(id /* block */)a3;
- (void)resumeRecognitionWithPrefixText:(id)a0 postfixText:(id)a1 selectedText:(id)a2;
- (void)runEvaluationWithDESRecordDatas:(id)a0 language:(id)a1 recipe:(id)a2 fidesPersonalizedLMPath:(id)a3 fidesPersonalizedLMTrainingAsset:(id)a4 scrubResult:(BOOL)a5 completion:(id /* block */)a6;
- (void)removePersonalizedLMForFidesOnly:(BOOL)a0;
- (id)_serviceWithFunctionName:(id)a0 errorHandler:(id /* block */)a1;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandler:(id /* block */)a1;
- (void)invalidateUaapLM;
- (void)invalidatePersonalizedLM;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)a0 error:(id)a1;
- (void)deleteAllDESRecordsForDictationPersonalization;
- (void)startSpeechRecognitionWithParameters:(id)a0 didStartHandlerWithInfo:(id /* block */)a1;
- (void)readProfileAndUserDataWithLanguage:(id)a0 allowOverride:(BOOL)a1 completion:(id /* block */)a2;
- (void)writeDESRecord;
- (oneway void)speechServiceDidRecognizeFinalResultCandidatePackage:(id)a0;
- (id)_newConnection;
- (id)initWithDelegate:(id)a0 instanceUUID:(unsigned char[16])a1;
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(id)a0;
- (void)runEvaluationWithDESRecordDatas:(id)a0 language:(id)a1 recipe:(id)a2 attachments:(id)a3 fidesPersonalizedLMPath:(id)a4 fidesPersonalizedLMTrainingAsset:(id)a5 scrubResult:(BOOL)a6 completion:(id /* block */)a7;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)a0 preheatSource:(id)a1 modelOverrideURL:(id)a2;
- (void)redecodeWithAudioDatas:(id)a0 language:(id)a1 task:(id)a2 samplingRate:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)getOfflineDictationStatusWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)a0;
- (void)getOfflineAssetStatusIgnoringCache:(BOOL)a0 assetType:(unsigned long long)a1 withDetailedStatus:(BOOL)a2 withCompletion:(id /* block */)a3;
- (oneway void)speechServiceDidRecognizeTokens:(id)a0;
- (oneway void)speechServiceDidRecognizeTokens:(id)a0 withMetadata:(id)a1;
- (void)addAudioPacket:(id)a0;
- (void)fetchAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)updateSpeechProfileWithLanguage:(id)a0 modelOverridePath:(id)a1 completion:(id /* block */)a2;
- (oneway void)speechServiceDidRecognizePackage:(id)a0;
- (id)modelPropertiesForAssetConfig:(id)a0 error:(id *)a1;
- (void)dealloc;
- (unsigned char[16] *)instanceUUID;
- (void)startMissingAssetDownload;
- (oneway void)speechServiceDidProduceLoggablePackage:(id)a0;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)a0;
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 processedAudioDurationInMilliseconds:(long long)a5;
- (id)_service;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (void)fetchUserDataForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)pauseRecognition;
- (void)finishAudio;
- (oneway void)speechServiceDidProcessAudioDuration:(double)a0;
- (void)fetchAssetsForAssetConfig:(id)a0 completion:(id /* block */)a1;
- (void)writeUaapOovsForLanguage:(id)a0 bundleId:(id)a1 customProns:(id)a2 newOovs:(id)a3 completion:(id /* block */)a4;

@end
