@class NSString, ATXExecutableReferenceManager, NSObject, ATXBiomeERMStream;
@protocol OS_dispatch_queue;

@interface ATXEngagementRecordManager : NSObject <ATXEngagementRecordManagerProtocol> {
    ATXExecutableReferenceManager *_referenceManager;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeERMStream *_eventStream;
}

@property (nonatomic) double minDurationForTrackedReferencesToStayAround;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithCacheDirectory:(id)a0;
- (id)init;
- (void)updateForClientModelCacheUpdate:(id)a0 clientModelId:(id)a1;
- (id)jsonDict;
- (void)removeEngagementForSuggestion:(id)a0 recordType:(unsigned long long)a1;
- (void)addHiddenSuggestion:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (void)removeAllEngagementsOfRecordType:(unsigned long long)a0;
- (BOOL)_writeData:(id)a0;
- (void)_addHiddenSuggestionNoSync:(id)a0 duration:(double)a1 engagementRecordType:(unsigned long long)a2;
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (void)removeAllEngagementsForSuggestion:(id)a0;
- (id)engagedExecutablesOfType:(unsigned long long)a0 queryOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_removeEngagedSuggestionsIfPossibleNoSync;
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)a0;
- (void)fetchEngagedEntriesWithCompletionHandler:(id /* block */)a0;
- (id)_identifiersFromEntries:(id)a0;
- (id)_engagedEntriesNoSync;
- (void)_logDidAddEntryToBiomeStream:(id)a0;
- (void)removeEngagementForExecutableIdentifier:(id)a0 recordType:(unsigned long long)a1 abortingRemovalIfEngagementDateIsLaterThanDate:(id)a2;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagedExecutables:(id)a1;
- (void)_addEngagedSuggestionNoSync:(id)a0 type:(unsigned long long)a1;
- (void)addEngagedSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (BOOL)hasEngagedWithSuggestion:(id)a0 engagementRecordType:(unsigned long long)a1;
- (void)_serializeAndWriteNoSyncSet:(id)a0;
- (void)_removeEngagementsOnQueuePassingTest:(id /* block */)a0;
- (id)_readData;
- (void)removeAllEngagementsWithCompletion:(id /* block */)a0;

@end
