@class NSMutableDictionary, PGMutableGraph, CLSCurationContext, NSDictionary, CLSSceneTaxonomyHierarchy, CLSFocusPeopleCache, PGManager, NSObject, PGGraphMomentNodeCollection, NSSet, PGAssetCollectionFeatureProvider, PHPhotoLibrary, PGGraphTimeDomainBuildingHelper, PGGraphPeopleDomainBuildingHelper, PGCurationManager;
@protocol OS_os_log;

@interface PGGraphBuilder : NSObject {
    NSMutableDictionary *_curationScoreByAsset;
    NSMutableDictionary *_interactionScoreByAsset;
    double _topTierAestheticScore;
    unsigned long long _numberOfUtilityAssets;
    unsigned long long _numberOfDefaultAssets;
    unsigned long long _numberOfImprovedAssets;
    unsigned long long _numberOfBetterAssets;
    PGGraphMomentNodeCollection *_momentNodesWhereMeIsPresent;
    PGGraphTimeDomainBuildingHelper *_timeDomainBuildingHelper;
    PGGraphPeopleDomainBuildingHelper *_peopleDomainBuildingHelper;
    NSMutableDictionary *_sceneNodeBySceneName;
    PGAssetCollectionFeatureProvider *_featureProvider;
}

@property (readonly, nonatomic) NSDictionary *personActivityMeaningCriteriaDictionaryByMeaningLabel;
@property (readonly) CLSSceneTaxonomyHierarchy *sceneTaxonomy;
@property (readonly) PGMutableGraph *graph;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) CLSCurationContext *curationContext;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (readonly) PGManager *managerSoonToGo;
@property (retain, nonatomic) CLSFocusPeopleCache *focusPeopleIngestCache;
@property (nonatomic) BOOL keepsExistingAssetCurationScores;
@property (readonly) BOOL isSharedLibraryEnabled;
@property (readonly) NSSet *sharedLibraryParticipants;

+ (BOOL)isSharedLibraryEnabledForLibrary:(id)a0;
+ (BOOL)location:(struct CLLocationCoordinate2D { double x0; double x1; })a0 isCloseToLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (unsigned long long)memoryCategoryForLabel:(id)a0;
+ (id)memoryLabelForCategory:(unsigned long long)a0;
+ (void)prepareGraphForRebuild:(id)a0;
+ (id)sharedLibraryParticipantsForLibrary:(id)a0;
+ (double)topTierAestheticScoreForRatio:(double)a0 inPhotoLibrary:(id)a1;

- (void)setLocaleIdentifier:(id)a0;
- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)_propertiesFromIngestHighlight:(id)a0;
- (void)insertMeAsAuthor:(id)a0 forMomentNode:(id)a1;
- (id)_uuidForPlacemark:(id)a0 forNodeLabel:(id)a1;
- (void)addMeaningToMeaningfulEventNode:(id)a0 meaningLabel:(id)a1 meaningIsReliable:(BOOL)a2;
- (id)insertDateNodesFromLocalStartDate:(id)a0 toLocalEndDate:(id)a1 fromEventNode:(id)a2;
- (id)insertMonthDayNodeForMonth:(long long)a0 day:(long long)a1;
- (void)_buildSceneNodeCache;
- (id)_cleanUpMoments:(id)a0;
- (void)_connectPersonActivityMeaningNode:(id)a0 toMomentNode:(id)a1 withChangeRequest:(id)a2 representativeAssetUUIDsByPersonLocalIdentifier:(id)a3;
- (void)_deleteMomentsWithGraphUpdate:(id)a0;
- (void)_insertMomentFeaturesForMomentNode:(id)a0 momentEnvelope:(id)a1 assets:(id)a2 photoLibrary:(id)a3 featureProvider:(id)a4 atMomentIngest:(BOOL)a5 curationContext:(id)a6;
- (id)_insertMomentNodeForClueCollection:(id)a0 feeder:(id)a1 insertedAndUpdatedPersonNodes:(id *)a2 graphUpdate:(id)a3 progressBlock:(id /* block */)a4;
- (id)_momentNodesFromPersonNodes:(id)a0;
- (void)_persistCurationScores:(id)a0;
- (void)_persistInteractionScores:(id)a0;
- (void)_registerInsertedMomentNodes:(id)a0 inGraphUpdate:(id)a1;
- (unsigned long long)_roiTypeForPlaceInterestType:(id)a0;
- (BOOL)_shouldUpdateCurationScore:(double)a0 withNewCurationScore:(double)a1;
- (void)_updatePersonActivitiesOfMomentNode:(id)a0 assets:(id)a1 graph:(id)a2 withPositiveSceneCriteriaByValidPersonActivityMeaningLabel:(id)a3 andActionCriteriaByValidPersonActivityMeaningLabel:(id)a4 validPersonActivityMeaningLabelByActionValue:(id)a5 changeRequest:(id)a6;
- (void)addCurationScore:(double)a0 forAsset:(id)a1;
- (void)addInteractionScore:(float)a0 forAsset:(id)a1;
- (void)addMeaningToMeaningfulEventNode:(id)a0 meaningLabel:(id)a1 meaningConfidenceScore:(float)a2;
- (void)addParentMeaningHierarchyForMeaningNode:(id)a0;
- (void)addRelationshipEdgesBetweenPersonNode:(id)a0 andPersonNode:(id)a1 forRelationship:(unsigned long long)a2 confidence:(double)a3 properties:(id)a4;
- (void)checkAndInsertPersonIsAroundEdgeFromMeNode:(id)a0 toMomentNode:(id)a1 withClueCollection:(id)a2;
- (void)clearPersonActivityMeaningCriteriaDictionaryByMeaningLabel;
- (void)computeAndPersistAssetStatistics;
- (void)computeAndPersistTopTierAestheticScores;
- (id)connectPublicEventNode:(id)a0 withBusinessNode:(id)a1;
- (id)criteriaEvaluatorsByValidPersonActivityMeaningLabelFromAssets:(id)a0 withPersonActivityMeaningCriteriaDictionaryByMeaningLabel:(id)a1;
- (id)criteriaEvaluatorsByValidPersonActivityMeaningLabelFromMomentNode:(id)a0 sceneEdges:(id)a1 withPersonActivityMeaningCriteriaDictionaryByMeaningLabel:(id)a2;
- (void)deleteAllMeaningNodesAndEdges;
- (void)deleteAllMemoryNodesAndEdges;
- (void)deleteAllMemoryNodesAndEdgesForMemoryCategory:(unsigned long long)a0;
- (void)deleteHighlightsWithGraphUpdate:(id)a0;
- (void)deletePersonsWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)enumerateDateComponentsBetweenLocalStartDate:(id)a0 andLocalEndDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)featureProviderWithProgressBlock:(id /* block */)a0;
- (id)feederForInsertingAssetCollection:(id)a0;
- (id)initWithGraph:(id)a0 manager:(id)a1;
- (id)insertAddressNodeWithPlacemark:(id)a0 location:(id)a1 relevance:(double)a2 numberOfAssets:(unsigned long long)a3 duringDateInterval:(id)a4 fromMomentNode:(id)a5;
- (id)insertAddressNodeWithProjectedPlacemark:(id)a0 atEventLocation:(id)a1 usingImprovedPlacemark:(BOOL)a2;
- (id)insertAddressNodeWithProjectedPlacemark:(id)a0 atEventLocation:(id)a1 usingImprovedPlacemark:(BOOL)a2 changeRequest:(id)a3;
- (void)insertAreasOfInterestForProjectedPlacemark:(id)a0 fromAddressNode:(id)a1 changeRequest:(id)a2;
- (void)insertAssetCurationScoreInLibraryForFeeder:(id)a0 progressBlock:(id /* block */)a1;
- (id)insertBaby:(id)a0;
- (id)insertBusiness:(id)a0 fromMomentNode:(id)a1;
- (id)insertContactSuggestion:(id)a0 forPersonNode:(id)a1 confidence:(double)a2 edgeProperties:(id)a3;
- (id)insertDateNodeHierarchyWithDateComponents:(id)a0;
- (id)insertDateNodesFromEventNode:(id)a0;
- (id)insertDateNodesWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (void)insertHighlightDayGroupsWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)insertHighlightDaysWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)insertHighlightGroupNodeWithHighlight:(id)a0;
- (id)insertHighlightNodeWithHighlight:(id)a0;
- (void)insertHighlightsWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)insertHomeWorkNodeForPerson:(id)a0 personNode:(id)a1 fromAddressNodes:(id)a2;
- (id)insertLocationHierarchyWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (void)insertLocationHierarchyWithProjectedPlacemark:(id)a0 fromAddressNode:(id)a1 changeRequest:(id)a2;
- (id)insertLocationMobilityNodeWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (id)insertLocationMobilityNodeWithMobility:(id)a0 fromMomentNode:(id)a1 confidence:(double)a2;
- (id)insertMePersonNode;
- (id)insertMePersonNodeForPerson:(id)a0;
- (id)insertMemoryNodeFromMemory:(id)a0;
- (id)insertMemoryNodeFromMemory:(id)a0 changeRequest:(id)a1;
- (void)insertMomentFeaturesForMomentNode:(id)a0 momentEnvelope:(id)a1 assets:(id)a2 featureProvider:(id)a3 atMomentIngest:(BOOL)a4 curationContext:(id)a5;
- (void)insertMomentFeaturesForMomentNode:(id)a0 momentEnvelope:(id)a1 photoLibrary:(id)a2 featureProvider:(id)a3 atMomentIngest:(BOOL)a4 curationContext:(id)a5;
- (id)insertMomentNodeForClueCollection:(id)a0 feeder:(id)a1 progressBlock:(id /* block */)a2;
- (id)insertMomentNodeForMoment:(id)a0;
- (void)insertMomentsWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (id)insertMusicAlbumNodeWithAlbumTitle:(id)a0;
- (id)insertMusicGenreNodeWithGenreName:(id)a0;
- (id)insertMusicSessionNodeWithLocalStartDate:(id)a0 localEndDate:(id)a1;
- (id)insertMusicTrackWithTrackTitle:(id)a0 durationInSeconds:(double)a1;
- (id)insertOverTheYearsNode;
- (id)insertPOINodeWithPlace:(id)a0 fromMomentNode:(id)a1 hasInsertedSpecialPOIAmusementParkNode:(BOOL)a2;
- (id)insertPOIWithFeeder:(id)a0 fromMomentNode:(id)a1 isNearHomeOrWork:(BOOL)a2;
- (id)insertPartOfDayNodeWithPartOfDayName:(id)a0 fromMomentNode:(id)a1 ratio:(double)a2;
- (id)insertPartOfDayNodesWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (id)insertPeopleWithClueCollection:(id)a0 fromMomentNode:(id)a1 addressNodes:(id)a2 isNearPeopleAddress:(BOOL *)a3;
- (id)insertPersonNodeForPerson:(id)a0;
- (id)insertPersonNodeForPerson:(id)a0 fromEventNode:(id)a1 numberOfAssetsWithPerson:(unsigned long long)a2 edgeWeight:(float)a3;
- (id)insertPersonNodeForPerson:(id)a0 fromMomentNode:(id)a1 numberOfAssetsWithPerson:(unsigned long long)a2 importanceInMoment:(double)a3 includeMergeCandidates:(BOOL)a4;
- (void)insertPersonNodeForShareParticipant:(id)a0;
- (void)insertPersonNodesForShareParticipants:(id)a0;
- (id)insertPet:(id)a0;
- (id)insertPresentEdgeFromPersonNode:(id)a0 toEventNode:(id)a1 numberOfAssetsWithPerson:(unsigned long long)a2 edgeWeight:(float)a3;
- (id)insertPresentEdgeFromPersonNode:(id)a0 toMomentNode:(id)a1 numberOfAssetsWithPerson:(unsigned long long)a2 importance:(double)a3 includeMergeCandidates:(BOOL)a4;
- (id)insertProximityEdgeFromPersonNode:(id)a0 toMomentNode:(id)a1;
- (id)insertPublicEvent:(id)a0 fromEventNode:(id)a1;
- (id)insertROINodeWithPlace:(id)a0 fromMomentNode:(id)a1;
- (id)insertROINodeWithType:(unsigned long long)a0;
- (id)insertROINodeWithType:(unsigned long long)a0 fromMomentNode:(id)a1 confidence:(double)a2;
- (id)insertROIWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (id)insertScene:(id)a0 fromMomentNode:(id)a1;
- (id)insertScene:(id)a0 fromMomentNode:(id)a1 changeRequest:(id)a2;
- (id)insertScenesWithClueCollection:(id)a0 fromMomentNode:(id)a1;
- (void)insertShareParticipantsAsAuthors:(id)a0 forMomentNode:(id)a1;
- (id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)a0;
- (id)insertTimeNodesWithDateComponents:(id)a0 fromEventNode:(id)a1;
- (id)momentForMomentNode:(id)a0;
- (id)momentNodesWhereMeIsPresent;
- (id)nodesForHighlightsInHighlightDayGroup:(id)a0;
- (id)nodesForMomentsInHighlight:(id)a0;
- (void)performBatchUpdatesWithGraphUpdate:(id)a0 withRecipe:(id)a1 progressBlock:(id /* block */)a2;
- (void)performChangeForGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)performPostprocessingWithGraphUpdate:(id)a0 withRecipe:(id)a1 progressBlock:(id /* block */)a2;
- (void)performPreprocessingWithGraphUpdate:(id)a0 withRecipe:(id)a1 progressBlock:(id /* block */)a2;
- (void)performProcessingSteps:(id)a0 withGraphUpdate:(id)a1 progressBlock:(id /* block */)a2;
- (void)persistPendingScores;
- (void)persistPersonalHighAestheticsThreshold:(double)a0 personalGoodAestheticsThreshold:(double)a1;
- (void)prepareGraphForRebuild;
- (void)setAgeCategory:(unsigned long long)a0 onPersonNodeForIdentifier:(unsigned long long)a1;
- (void)setBiologicalSex:(unsigned long long)a0 onPersonNodeForIdentifier:(unsigned long long)a1;
- (void)setCanUseLocationDomain:(BOOL)a0;
- (void)setContactsAccessStatus:(BOOL)a0;
- (void)setCurationAlgorithmsVersion:(unsigned long long)a0;
- (void)setGeoServiceProviderID:(id)a0;
- (void)setIsBlocked:(BOOL)a0 onAreaNodeForIdentifier:(unsigned long long)a1;
- (void)setLanguageIdentifiers:(id)a0;
- (void)setPOIIsImproved:(BOOL)a0 onPOIEdgeForIdentifier:(unsigned long long)a1;
- (BOOL)shouldUpdatePersonRepresentativeAssetUUIDsWithPositiveSceneCriteria:(id)a0 actionValueString:(id)a1 assetIsPassingSceneCriteria:(BOOL)a2 personLocalIdentifierIsDoingActionInAsset:(BOOL)a3;
- (void)updateHighlightNode:(id)a0 withHighlight:(id)a1;
- (void)updateHighlightsForHighlightDayGroupNode:(id)a0 nodesForHighlightsInHighlightDayGroup:(id)a1;
- (void)updateMomentsForHighlightNode:(id)a0 nodesForMomentsInHighlight:(id)a1;
- (void)updatePersonNodeForIdentifier:(unsigned long long)a0 withPerson:(id)a1 forPropertyNames:(id)a2;

@end
