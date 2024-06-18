@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (id)init;
- (BOOL)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (void)topicExtractionsFromTextBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (void)topicRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)topicRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)topicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)topicExtractionsFromText:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)scoredMappedTopicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_unblockPendingQueries;
- (BOOL)rankedTopicsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)cachePath:(id *)a0;

@end
