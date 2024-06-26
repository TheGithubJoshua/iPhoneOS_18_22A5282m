@class PXSearchQueryResult, NSString, NSDictionary, NSArray, PXSearchIndexManager, NSObject;
@protocol OS_dispatch_queue;

@interface PXSearchQueryResultsProcessor : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXSearchQueryResult *currentSearchQueryResult;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSDictionary *personSearchResultsMap;
@property (copy, nonatomic) NSArray *curatedAssetsSearchResults;
@property (copy, nonatomic) NSArray *removedObjects;
@property (copy, nonatomic) NSArray *hiddenObjects;
@property (readonly, copy, nonatomic) id /* block */ processingHandler;
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager;

+ (id)_fetchPersonsForPersonSearchResults:(id)a0 photoLibrary:(id)a1;
+ (BOOL)_isBootstrapNameChange:(id)a0;
+ (id)_reloadItemIdentifiersForChangedObjects:(id)a0 inAssetSearchResults:(id)a1;
+ (BOOL)_verifyExpectedWorkQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)a0;
- (void)_processPersonNameChangeFromConfirmationInfo:(id)a0 searchQueryResult:(id)a1;
- (void)_executeResultsHandlerForUpdatedSearchQueryResult:(id)a0 curatedAssetsSearchResults:(id)a1;
- (id)_generateUpdatedPersonSearchResultsFromPersonSearchResults:(id)a0 persons:(id)a1;
- (id)_localIdentifierForPersonUUID:(id)a0;
- (void)_performCurationAndUpdateChangedObjects:(id)a0;
- (void)_processPeopleChangesFromNotification:(id)a0;
- (void)_processPersonMergeFromNotification:(id)a0 searchQueryResult:(id)a1;
- (BOOL)_shouldRecurateForChangeDetails:(id)a0;
- (void)_updatePersonSearchResultsForSearchQueryResult:(id)a0 withMergeTargetPerson:(id)a1 sourcePerson:(id)a2 tombstonedCandidatesLocalIdentifiers:(id)a3;
- (void)_updateSearchQueryResult:(id)a0 updatedPersonSearchResultsMap:(id)a1;
- (void)addObserverForCuratedAssetsLibraryChanges;
- (void)addObserverForPeopleChangeHandlingNotifications;
- (id)initForUnitTesting;
- (id)initWithSearchIndexManager:(id)a0 dispatchQueue:(id)a1 resultsProcessingHandler:(id /* block */)a2;
- (void)processCollectionSearchResults:(id)a0 assetSearchResults:(id)a1 personSearchResults:(id)a2 searchSuggestions:(id)a3 sceneIdentifiers:(id)a4 matchedQueryStrings:(id)a5 matchedOCRAssetUUIDs:(id)a6 forSearchQuery:(id)a7;

@end
