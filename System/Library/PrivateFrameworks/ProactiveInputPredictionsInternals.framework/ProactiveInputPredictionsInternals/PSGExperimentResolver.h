@class NSDictionary, _PASLock, TRIClient;

@interface PSGExperimentResolver : NSObject {
    _PASLock *_responseSuggestionsConfigLock;
    _PASLock *_wordBoundaryConfigLock;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSDictionary *zkwLangAndNamespaces;
@property (readonly, nonatomic) NSDictionary *wordBoundaryLangAndNamespaces;

+ (id)sharedInstance;
+ (id)sharedZKWQueue;
+ (id)sharedWordBoundaryQueue;

- (id)init;
- (id)_getDefaultWordBoundarySuggestionsExperimentConfig:(id)a0;
- (void).cxx_destruct;
- (void)warmupForLocale:(id)a0;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;
- (id)getWordBoundarySuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;

@end
