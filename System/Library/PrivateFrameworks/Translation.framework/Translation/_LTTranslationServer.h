@class NSObject, _LTLoggingRequestHandler, _LTActivityLogger, _LTTextToSpeechCache, _LTServerSpeakSession, _LTServerSpeechSession;
@protocol _LTTranslationEngine, OS_dispatch_queue;

@interface _LTTranslationServer : NSObject {
    id<_LTTranslationEngine> _offlineCachedEngine;
    id<_LTTranslationEngine> _onlineCachedEngine;
    _LTTextToSpeechCache *_ttsCache;
    _LTServerSpeechSession *_speechSession;
    _LTServerSpeakSession *_speakSession;
    _LTLoggingRequestHandler *_logger;
    _LTActivityLogger *_activityLogger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)languagesForText:(id)a0 completion:(id /* block */)a1;
- (void)clearCaches;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_offlineLanguageStatus:(id /* block */)a0;
- (id)init;
- (void)_getAssetSize:(id /* block */)a0;
- (void)onDeviceModeEnabled:(id /* block */)a0;
- (void)installedLocales:(id /* block */)a0;
- (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
- (id)_engineForContext:(id)a0 error:(id *)a1;
- (void)cleanup;
- (void)_speechSessionCompleted;
- (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (id)startSpeechTranslationWithContext:(id)a0 delegate:(id)a1;
- (void)_updateHotfix:(id /* block */)a0;
- (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
- (void)notifyOfMemoryPressure;
- (void)cleanupOfflineEngine;
- (void)preheatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)shouldPresentSystemFirstUseConsent:(id /* block */)a0;
- (void)speak:(id)a0 withContext:(id)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (id)startTextToSpeechTranslationWithContext:(id)a0 text:(id)a1 delegate:(id)a2;
- (void)languageForText:(id)a0 completion:(id /* block */)a1;
- (id)_offlineEngineForContext:(id)a0 error:(id *)a1;
- (void)cancelSpeechSessionWithID:(id)a0;
- (void)cancelExistingSessions;
- (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)translateSentence:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
- (void)startLoggingRequest:(id)a0;
- (void)_purgeAllAssets:(id /* block */)a0;
- (void).cxx_destruct;
- (void)translateParagraphs:(id)a0 withContext:(id)a1 paragraphResult:(id /* block */)a2 completion:(id /* block */)a3;
- (void)addSpeechAudioData:(id)a0;
- (void)startInstallRequest:(id)a0 delegate:(id)a1;
- (void)_deleteHotfix:(id /* block */)a0;
- (void)registerActivity:(long long)a0;
- (void)cancelSpeechSession;
- (id)_onlineEngineForContext:(id)a0 error:(id *)a1;
- (void)endAudio;
- (void)_updateAllAssets:(id /* block */)a0;
- (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;

@end
