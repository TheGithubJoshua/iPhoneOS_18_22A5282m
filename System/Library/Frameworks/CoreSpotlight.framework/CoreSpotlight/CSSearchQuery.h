@class NSMutableArray, NSArray, NSString, CSSearchQueryContext, NSMapTable, NSObject, NSKnownKeysMappingStrategy;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSSearchQuery : NSObject <MDSearchQueryResultProcessor> {
    unsigned long long _foundItemCount;
    short _requestedAttributeCount;
    short _attrInfo[14];
    BOOL _started;
    BOOL _finished;
    BOOL _cancelled;
    BOOL _gatherEnded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _liveItemLock;
    NSKnownKeysMappingStrategy *_mappingStrategy;
    unsigned long long *_attrKeys;
    NSMutableArray *_suggestions;
    NSMutableArray *_suggestionCountQueries;
    NSObject<OS_dispatch_group> *_suggestionCountDispatchGroup;
}

@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) CSSearchQueryContext *queryContext;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString;
@property (retain, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap;
@property (copy) id /* block */ gatherEndedHandler;
@property (copy) id /* block */ changedItemsHandler;
@property (copy) id /* block */ removedItemsHandler;
@property (copy) id /* block */ foundAttributesHandler;
@property (copy) id /* block */ changedAttributesHandler;
@property (copy) id /* block */ countChangedHandler;
@property (copy) id /* block */ resolvedAttributeNamesHandler;
@property (copy) id /* block */ completionsHandler;
@property (copy) id /* block */ completionScoresHandler;
@property (copy) id /* block */ foundItemHandler;
@property (copy) id /* block */ interruptedHandler;
@property (copy) id /* block */ restartedHandler;
@property (copy) id /* block */ restartGatherEndedHandler;
@property (nonatomic) BOOL privateIndex;
@property (nonatomic) BOOL userFSIndex;
@property (nonatomic) BOOL suspended;
@property (retain, nonatomic) NSString *privateBundleID;
@property (nonatomic) BOOL privateQuery;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long foundItemCount;
@property (copy) id /* block */ foundItemsHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) NSArray *protectionClasses;

+ (void)setConnectionName:(id)a0;
+ (void)preheat:(id)a0;
+ (void)userEngagedWithUniqueIdentifier:(id)a0 bundleId:(id)a1 forUserQuery:(id)a2 interactionType:(int)a3;
+ (void)initialize;
+ (id)_makeQueryErrorWithErrorCode:(long long)a0 description:(id)a1 underlyingError:(id)a2;

- (id)preferredLanguages;
- (id)scopes;
- (void)setBundleIDs:(id)a0;
- (void)processSuggestions;
- (id)keyboardLanguage;
- (void)setScopes:(id)a0;
- (BOOL)removeUserFSLiveOID:(long long)a0 outBundleID:(id *)a1 outIdentifier:(id *)a2;
- (void)handleFoundAttributes:(id)a0 values:(id)a1 attributesHandler:(id /* block */)a2;
- (void)prepareSearch;
- (BOOL)isTopHitQuery;
- (void)didReturnResults:(long long)a0 resultsData:(id)a1 oidData:(id)a2 protectionClass:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (id)bundleIDs;
- (void)removeSuggestionCountQuery:(id)a0;
- (BOOL)attribute;
- (void)handleFoundItems:(id)a0;
- (void)handleCompletion:(id)a0;
- (id)connection;
- (void)processAttributesData:(id)a0 update:(BOOL)a1 protectionClass:(id)a2;
- (BOOL)grouped;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (void)updateQueryString:(id)a0 queryContext:(id)a1;
- (void)handleQueryRewritten;
- (void)filterZKWPeopleSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleError:(id)a0;
- (BOOL)addOrUpdateLiveOID:(long long)a0 bundleID:(id)a1 identifier:(id)a2;
- (void)cancel;
- (void)commonInitWithQueryString:(id)a0 queryContext:(id)a1;
- (BOOL)internal;
- (void)processRemoveResultsData:(id)a0 protectionClass:(id)a1;
- (void)setupFetchAttributesForSearch;
- (id)options;
- (void)_finishWithError:(id)a0;
- (void)start;
- (BOOL)counting;
- (BOOL)removeLiveOID:(long long)a0 outBundleID:(id *)a1 outIdentifier:(id *)a2;
- (void)processResultFromPlist:(id)a0 atIndex:(unsigned long long)a1 protectionClass:(id)a2 oids:(long long *)a3 oidCount:(unsigned int)a4 addItems:(id *)a5 updateItems:(id *)a6 moveItems:(id *)a7;
- (BOOL)live;
- (id)initWithQueryString:(id)a0 attributes:(id)a1;
- (void)processCompletionsResultsData:(id)a0 protectionClass:(id)a1;
- (double)currentTime;
- (void).cxx_destruct;
- (id)description;
- (void)handleFoundCompletions:(id)a0;
- (id)addOrUpdateUserFSLiveOID:(long long)a0 userFSDomain:(id)a1 identifier:(id)a2;
- (id)debugDescription;
- (id)initWithQueryString:(id)a0 options:(id)a1;
- (id)copyCSSearchableItemWithValues:(id *)a0 valueCount:(unsigned long long)a1 attrKeys:(unsigned long long *)a2 protectionClass:(id)a3 mappingStrategy:(id)a4 attrInfo:(short *)a5 requestedAttributeCount:(unsigned long long)a6 unpackInfo:(struct CSUnpackInfo { short x0; short x1; short x2; short x3; short x4; })a7 userFSDomain:(id)a8;
- (void)processLiveResultsData:(id)a0 oidData:(id)a1 protectionClass:(id)a2;
- (void)populateSuggestionCount:(id)a0 completionHandler:(id /* block */)a1;
- (void)willStartQuery;
- (void)handleFoundSuggestions:(id)a0;
- (void)dealloc;
- (void)didResolveFriendlyAttributeNames:(id)a0 fromFetchAttributes:(id)a1;
- (void)addSuggestionCountQuery:(id)a0;
- (void)_removeIdentifiers:(id)a0 withBundleID:(id)a1 andQueryID:(long long)a2;
- (void)processResultsData:(id)a0 protectionClass:(id)a1;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (id)copyResultsFromPlist:(id)a0 protectionClass:(id)a1;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (void)didFinishWithError:(id)a0;
- (unsigned long long)dispatchApplyWidth;

@end