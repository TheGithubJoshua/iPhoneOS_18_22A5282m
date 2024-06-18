@class _PASLock, PPSocialHighlightCache, PPSocialHighlightStorageUtilities;

@interface PPSocialHighlightStorage : NSObject {
    _PASLock *_lock;
    PPSocialHighlightCache *_cache;
    PPSocialHighlightStorageUtilities *_socialHighlightStorageUtils;
    _PASLock *_lsAppLinkCache;
}

+ (id)appLinksForResourceURL:(id)a0 resolvedURL:(id)a1;
+ (int)attributionFeedbackTypeForAttributionFeedbackType:(unsigned long long)a0;
+ (unsigned long long)entitlementStatusForClient:(id)a0 applicationIdentifiers:(id)a1;
+ (id)feedbackPruningPolicy;
+ (int)unifiedFeedbackTypeForHighlightFeedbackType:(unsigned long long)a0;

- (id)feedbackItems;
- (id)_rankableItemsForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 autoDonatingChatIdentifiers:(id)a3 limit:(unsigned long long)a4 error:(id *)a5;
- (id)init;
- (BOOL)_isCollaborationEntitlementPresentForApplicationIdentifiers:(id)a0;
- (id)feedbackItemsInInterval:(double)a0 includingRemote:(BOOL)a1;
- (void)saveOrderedBatch:(id)a0;
- (void)clearStreams;
- (unsigned char)automaticSharingEnabledForClient:(id)a0 error:(id *)a1;
- (BOOL)isValidHighlight:(id)a0;
- (void)deleteAllRecordsFromBundleId:(id)a0;
- (void)deleteVendedMatchingPredicate:(id)a0;
- (id)_rankableItemsForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 limit:(unsigned long long)a3 error:(id *)a4;
- (unsigned long long)countDistinctRankedItemsMatchingBatchIdentifier:(id)a0;
- (id)unserializedRankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (id)allSupportedHighlightsForAutoDonatingChats:(id)a0 error:(id *)a1;
- (BOOL)isClientEntitledForItem:(id)a0 client:(id)a1 applicationIdentifiers:(id)a2 blockedHosts:(id)a3 iTunesOverrideChecker:(id)a4;
- (void)cleanUpFeedbackWithShouldContinueBlock:(id /* block */)a0 ttl:(double)a1 onDeleteBlock:(id /* block */)a2;
- (void)saveFeedbackItems:(id)a0;
- (id)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (void)_writeEnrichedFeedbackForAttributionIdentifier:(id)a0 client:(id)a1 feedbackType:(int)a2;
- (id)highlightFromRankableHighlight:(id)a0 attributionIdentifiers:(id)a1 earliestAttributionIdentifiers:(id)a2;
- (double)_sessionLoggingRate;
- (unsigned char)automaticSharingEnabled;
- (id)deduplicateAndSortRankedHighlights:(id)a0 attributionLookup:(id)a1 limit:(unsigned long long)a2 client:(id)a3;
- (id)attributionsForIdentifiers:(id)a0 error:(id *)a1;
- (void)freezeAppLinksCache;
- (BOOL)rerankingEnabled;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingAttributionIdentifiers:(id)a1;
- (id)rankedItems;
- (id)sharedContentFromChats:(id)a0 dateRange:(double)a1 applicationIdentifiers:(id)a2 error:(id *)a3;
- (id)sharedContentForClient:(id)a0 variant:(id)a1 applicationIdentifiers:(id)a2 limit:(unsigned long long)a3 autoDonatingChatIdentifiers:(id)a4 error:(id *)a5;
- (void)clearFeedbackStream;
- (id)featurizeRankedHighlights:(id)a0;
- (void)syncFeedback;
- (void).cxx_destruct;
- (id)_socialLayerDefaults;
- (void)clearRankedStream;
- (id)cachedRankedHighlightsForClient:(id)a0 variant:(id)a1 queriedHighlights:(id)a2;
- (id)lastCacheInvalidationDateForClient:(id)a0;
- (id)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (void)resetLSAppLinkCache;
- (id)applicationIdentifiersForResourceURL:(id)a0 resolvedURL:(id)a1;
- (id)_mostRecentRankedHighlightsMatchingTest:(id /* block */)a0 client:(id)a1;
- (void)deleteFeedbackMatchingPredicate:(id)a0;
- (id)autoDonatingChatsWithError:(id *)a0;
- (id)autoDonatingChatsWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (id)_screenTimeConversation;
- (BOOL)isClientEntitledForItem:(id)a0 client:(id)a1 applicationIdentifiers:(id)a2 blockedHosts:(id)a3;
- (void)invalidateCacheForClient:(id)a0;
- (void)deleteAllRecordsFromBundleId:(id)a0 matchingDomainSelection:(id)a1;
- (void)handleAppLinkChangeNotification:(id)a0;
- (BOOL)saveFeedbackForHighlightIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;
- (void)_performFeedbackSessionLoggingForEnrichedFeedback:(id)a0 client:(id)a1;
- (id)initWithFeedbackStream:(id)a0 rankedStream:(id)a1 database:(id)a2;
- (id)_socialAttributionFromAttributeValues:(id)a0 fetchAttributes:(id)a1;
- (void)_writeEnrichedFeedbackForHighlightIdentifier:(id)a0 client:(id)a1 feedbackType:(int)a2;
- (id)feedbackPublisherWithInterval:(double)a0 includingRemote:(BOOL)a1;
- (BOOL)saveAttributionFeedbackForAttributionIdentifier:(id)a0 feedbackType:(unsigned long long)a1 client:(id)a2 variant:(id)a3;

@end
