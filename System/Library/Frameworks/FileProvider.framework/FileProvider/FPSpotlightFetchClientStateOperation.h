@class FPSpotlightIndexer, NSString, CSSearchableIndex, NSURL;

@interface FPSpotlightFetchClientStateOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_domainIdentifier;
    NSString *_reason;
    NSURL *_supportURL;
}

+ (id)_currentIndexerVersion;

- (void)main;
- (void)_fetchClientState;
- (id)_clientStateCurrentVersionIfNeedReset;
- (void)_handleFetchedClientState:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)operationDescription;
- (void)_markClientStateResetDone;
- (id)initWithIndexer:(id)a0 index:(id)a1 indexName:(id)a2 domainID:(id)a3 reason:(id)a4 supportURL:(id)a5;

@end
