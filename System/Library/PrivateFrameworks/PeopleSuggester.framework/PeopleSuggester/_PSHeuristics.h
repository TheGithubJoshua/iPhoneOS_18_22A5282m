@class NSDictionary, _CDInteractionStore, _CDInteractionCache, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic) double recencyMargin;
@property (retain, nonatomic) NSDictionary *recencyHeuristicLimitNumberOfProxiesByReason;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) _CDInteractionCache *messageInteractionCache;

+ (id)PSHeuristicsRecencyReasonToString:(long long)a0;
+ (id)templateForPhoneCallHeuristicFromSuggestionProxy:(id)a0;

- (void)prepareRecencyCacheWithSupportedBundleIds:(id)a0;
- (id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)a0 predictionContext:(id)a1;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)a0 predictionContextBundleId:(id)a1;
- (id)proxiesByRecencyUsingInteractions:(id)a0 startIndex:(unsigned long long)a1 reason:(long long)a2 allowNonSupportedBundleIDs:(BOOL)a3;
- (void)updateModelProperties:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)a0 numberOfSuggestion:(unsigned long long)a1;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)a0 photoSuggestedPeople:(id)a1 contactIDsInAssets:(id)a2;
- (void).cxx_destruct;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 messageInteractionCache:(id)a3;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)a0 existingSuggestions:(id)a1;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)a0 bundleIds:(id)a1 meContactIdentifier:(id)a2;
- (id)seedSuggestionsForChatGuidsAndTransports:(id)a0;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 shareSheetSupportedBundleIds:(id)a3 messageInteractionCache:(id)a4;

@end
