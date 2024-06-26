@class NSString, NSSet, NSMutableDictionary, PHPhotoLibrary, NSMutableSet, NSMutableArray, PGGraph, PGGraphUpdateRelatedDetails;

@interface PGGraphUpdate : NSObject <PGGraphUpdateInventory> {
    PGGraph *_graph;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) NSMutableArray *inputChanges;
@property (readonly, nonatomic) NSSet *consolidatedChanges;
@property (readonly, nonatomic) NSMutableDictionary *updateMomentNodesByUpdateType;
@property (readonly, nonatomic) NSMutableDictionary *updateHighlightNodesByUpdateType;
@property (readonly, nonatomic) NSMutableDictionary *highlightByHighlightUUID;
@property (readonly, nonatomic) NSMutableDictionary *highlightsToInsertByHighlightKind;
@property (readonly, nonatomic) NSMutableSet *uuidsOfDeletedHighlights;
@property (readonly, nonatomic) NSMutableSet *deletedMomentUUIDsForValidityCheck;
@property (readonly, nonatomic) NSMutableSet *deletedHighlightUUIDsForValidityCheck;
@property (readonly, nonatomic) NSMutableDictionary *momentByMomentUUID;
@property (nonatomic) long long updateType;
@property (readonly, nonatomic) NSSet *momentsToIngest;
@property (copy, nonatomic) NSSet *additionalLocationsToPrefetch;
@property (readonly, nonatomic) NSMutableDictionary *registeredLocationOfInterestVisitsToResolveByMomentUUID;
@property (readonly, nonatomic) NSMutableDictionary *registeredResolvableItemsByBusinessItemMuid;
@property (readonly, nonatomic) NSSet *insertedAndUpdatedPersonNodes;
@property (copy, nonatomic) NSSet *insertedMomentNodes;
@property (copy, nonatomic) NSSet *insertedHighlightNodes;
@property (nonatomic) BOOL hasDeletedMomentNodes;
@property (nonatomic) BOOL hasDeletedHighlightNodes;
@property (nonatomic) BOOL hasDeletedPersonNodes;
@property (nonatomic) BOOL hasUpdatedPersonNodes;
@property (readonly, nonatomic) PGGraphUpdateRelatedDetails *relatedDetails;
@property (readonly, nonatomic) NSSet *highlightDaysToIngest;
@property (readonly, nonatomic) NSSet *highlightDayGroupsToIngest;
@property (copy, nonatomic) NSSet *insertedHighlightDayGroupNodes;
@property (readonly, nonatomic) BOOL hasAnythingToDo;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) BOOL hasInsertedMomentNodes;
@property (readonly, nonatomic) BOOL hasUpdatedMomentNodes;
@property (readonly, nonatomic) BOOL hasInsertedHighlightNodes;
@property (readonly, nonatomic) BOOL hasUpdatedHighlightNodes;
@property (readonly, nonatomic) unsigned long long momentUpdateTypes;
@property (readonly, nonatomic) BOOL didProcessNodes;
@property (readonly, nonatomic) unsigned long long numberOfConsolidatedChanges;
@property (nonatomic) BOOL isResumingFullAnalysis;
@property (readonly, nonatomic) BOOL hasMomentsToInsert;
@property (readonly, nonatomic) BOOL hasMomentsToDelete;
@property (readonly, nonatomic) BOOL hasMomentsToUpdate;
@property (readonly, nonatomic) BOOL hasHighlightsToInsert;
@property (readonly, nonatomic) BOOL hasHighlightsToDelete;
@property (readonly, nonatomic) BOOL hasHighlightsToUpdate;
@property (readonly, nonatomic) BOOL hasHighlightDayGroupsToInsert;
@property (readonly, nonatomic) BOOL hasPersonsToInsert;
@property (readonly, nonatomic) BOOL hasPersonsToDelete;
@property (readonly, nonatomic) BOOL hasPersonsToUpdate;
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToInsert;
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToDelete;
@property (readonly, nonatomic) NSSet *uuidsOfMomentsToUpdate;
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToInsert;
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToDelete;
@property (readonly, nonatomic) NSSet *uuidsOfHighlightsToUpdate;
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToInsert;
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToDelete;
@property (readonly, nonatomic) NSSet *localIdentifiersOfPersonsToUpdate;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void)setGraph:(id)a0;
- (void)addChanges:(id)a0;
- (void).cxx_destruct;
- (void)addChange:(id)a0;
- (void)_consolidate;
- (void)_consolidateIfNeeded;
- (id)_fetchMomentsWithUUIDs:(id)a0;
- (id)_fetchedHighlightsWithHighlightUUIDs:(id)a0;
- (void)_registerHighlights:(id)a0;
- (void)_registerMoments:(id)a0;
- (void)_unregisterHighlightsForHighlightUUIDs:(id)a0;
- (void)_unregisterMomentsForMomentUUIDs:(id)a0;
- (id)cachedDataModelObjectForGraphChange:(id)a0;
- (void)clearInsertedAndUpdatedPersonNodes;
- (void)enumerateConsolidatedChanges:(id /* block */)a0;
- (id)highlightForHighlightUUID:(id)a0;
- (id)highlightsToProcessForKind:(unsigned short)a0 withHighlightUpdateTypes:(unsigned long long)a1 includeHighlightsToIngest:(BOOL)a2;
- (id)initWithManager:(id)a0 updateType:(long long)a1;
- (id)initWithManager:(id)a0 updateType:(long long)a1 graph:(id)a2;
- (id)momentNodesToProcessForMomentUpdateTypes:(unsigned long long)a0 includeInsertedNodes:(BOOL)a1;
- (id)momentsToProcessForMomentUpdateTypes:(unsigned long long)a0 includeMomentsToIngest:(BOOL)a1;
- (void)prepareForPostProcessing;
- (void)registerInsertedAndUpdatedPersonNodes:(id)a0;
- (void)registerLocationOfInterestVisitToResolve:(id)a0 forMomentUUID:(id)a1;
- (void)registerPublicEventNode:(id)a0 withConsolidatedAddress:(id)a1 toResolveBusinessItemMuid:(unsigned long long)a2;
- (void)updatedHighlightNode:(id)a0 forUpdateChangeType:(unsigned long long)a1;
- (void)updatedMomentNode:(id)a0 forUpdateChangeType:(unsigned long long)a1;

@end
