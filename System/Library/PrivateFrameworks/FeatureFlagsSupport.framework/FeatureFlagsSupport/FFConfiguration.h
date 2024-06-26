@class NSMutableDictionary, FFPlistParser, NSSet, NSArray, NSMutableArray, NSMutableSet;
@protocol FFFileReader, FFFileWriter, FFParseErrorReporter;

@interface FFConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary *configByLevelIndex[2][8];
    NSMutableDictionary *metaByLevelIndex[8];
    NSMutableSet *disclosuresByLevelIndex[8];
    NSMutableDictionary *featureSetsMetaByLevelIndex[8];
    NSMutableSet *enabledFeatureSetsByLevelIndex[8];
    NSMutableDictionary *enabledFeatureSetsAtLevelIndexByGroup[8];
    NSMutableDictionary *definedFeatureSets;
    NSMutableDictionary *definedFeatureGroups;
    NSMutableDictionary *subscriptionsMetaByLevelIndex[8];
    NSMutableArray *subscriptionsByLevelIndex[8];
}

@property (class, readonly, nonatomic) FFConfiguration *shared;

@property (retain, nonatomic) id<FFFileWriter> filewriter;
@property (retain, nonatomic) id<FFFileReader> filereader;
@property (retain, nonatomic) id<FFParseErrorReporter> parseerrorreporter;
@property (retain, nonatomic) FFPlistParser *plistparser;
@property (retain, nonatomic) NSMutableArray *profilePayloads;
@property (readonly, nonatomic) NSSet *domains;

+ (id)_configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1 parseErrorReporter:(id)a2;
+ (id)configurationForProfileManagement;
+ (id)configurationForTestingWithFileReader:(id)a0 fileWriter:(id)a1;
+ (id)configurationForTestingWithFileReader:(id)a0 parseErrorReporter:(id)a1;
+ (id)configurationForTestingWithFileReader:(id)a0;
+ (BOOL)isValidDisclosureName:(id)a0;
+ (id)configurationForTestingWithFileWriter:(id)a0;
+ (BOOL)isValidName:(id)a0;

- (id)initPrivate;
- (id)disclosureFileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (void)invalidateCache;
- (id)makeFeatureDictionaryFrom:(id)a0 forDomain:(id)a1 atDomainLevel:(BOOL)a2 reportableFilename:(id)a3;
- (long long)_valueForFeatureSet:(id)a0 atLevel:(long long)a1;
- (id)currentDisclosures;
- (BOOL)writeSubscriptionUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;
- (void)unsetFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (void)_unsetFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void)loadFeatureSetDefinitions;
- (void)addDisclosure:(id)a0 atLevel:(long long)a1;
- (void)enableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (BOOL)commitProfilePayloadsAndReturnError:(id *)a0;
- (void)setFeaturesMatchingAttribute:(id)a0 levelIndex:(unsigned long long)a1 value:(long long)a2;
- (BOOL)addProfilePayload:(id)a0 error:(id *)a1;
- (id)defaultStateForFeature:(id)a0 domain:(id)a1;
- (BOOL)commitUpdates:(id *)a0;
- (id)mutableDisclosureSetAtLevelIndex:(unsigned long long)a0;
- (id)stateForFeature:(id)a0 domain:(id)a1;
- (void)validateName:(id)a0;
- (unsigned int)sortValueForPhase:(id)a0;
- (id)resolvedStateForFeature:(id)a0 domain:(id)a1;
- (void)_enableFeatureSetAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (void)removeDisclosure:(id)a0 atLevel:(long long)a1;
- (id)effectiveStateForFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (id)attributesForFeatureGroup:(id)a0;
- (id)allSubscriptionsAtLevel:(long long)a0;
- (BOOL)writeDomainUpdates:(id *)a0;
- (void)removeDisclosure:(id)a0 atLevelIndex:(unsigned long long)a1;
- (long long)resolvedValueForFeatureSet:(id)a0 inGroup:(id)a1;
- (BOOL)resetDomain:(id)a0 error:(id *)a1;
- (id)currentDisclosuresAtLevelIndex:(unsigned long long)a0;
- (void)setValue:(long long)a0 feature:(id)a1 domain:(id)a2 levelIndex:(unsigned long long)a3;
- (void)recalculateSubscriptionEffectsAt:(unsigned long long)a0;
- (void)addDisclosureAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (BOOL)writeSubscriptionUpdates:(id *)a0;
- (id)allFeatureGroups;
- (BOOL)phaseShouldBeEnabledByDefault:(id)a0;
- (id)disclosureForFeature:(id)a0 domain:(id)a1;
- (id)featureSetsInGroup:(id)a0;
- (BOOL)isValidDisclosureName:(id)a0;
- (BOOL)writeFeatureSetUpdates:(id *)a0;
- (void)clearCachedData;
- (void)unsetFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)loadAllLevelsForDomain:(id)a0;
- (void)loadFeatureSetDataForLevelIndex:(unsigned long long)a0;
- (void)disableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)createMutableDomainConfig:(id)a0 levelIndex:(unsigned long long)a1;
- (void)removeAllSubscriptionsAtLevelIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)loadFeatureSetDefinitionsNamed:(id)a0 fromURL:(id)a1;
- (void)loadCombinedDataForLevelIndex:(unsigned long long)a0;
- (void)removeAllDisclosuresAtLevelIndex:(unsigned long long)a0;
- (void)unsetFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (id)featureFlagsInSet:(id)a0 inGroup:(id)a1;
- (long long)valueForFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (void)disableFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (BOOL)reset:(id *)a0;
- (void)loadSubscriptionDataForLevelIndex:(unsigned long long)a0;
- (void)reportParseError:(id)a0 severity:(id)a1 whileParsingKey:(id)a2 inContext:(id)a3 inFile:(id)a4;
- (id)disclosureForFeatureGroup:(id)a0;
- (id)fileURLForDomain:(id)a0 pathIndex:(int)a1;
- (void)loadAllData;
- (BOOL)writeDisclosureUpdatesAtlevelIndex:(unsigned long long)a0 error:(id *)a1;
- (void)addSubscription:(id)a0 atLevel:(long long)a1;
- (BOOL)writeDisclosureUpdates:(id *)a0;
- (BOOL)writeCombinedUpdatesAtLevelIndex:(unsigned long long)a0 error:(id *)a1;
- (void)removeSubscription:(id)a0 atLevel:(long long)a1;
- (void)unsetFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (void)enableFeatureSet:(id)a0 inGroup:(id)a1 atLevel:(long long)a2;
- (BOOL)writeFeatureSetUpdatesAtLevelIndex:(unsigned long long)a0 withError:(id *)a1;
- (void)prepareToAddProfilePayloads;
- (void)addSubscriptionAlreadyLocked:(id)a0 atLevelIndex:(unsigned long long)a1;
- (BOOL)isValidName:(id)a0;
- (void)loadDomain:(id)a0 levelIndex:(unsigned long long)a1;
- (id)definedFeatureGroupsFilteredByCurrentDisclosures;
- (id)stateForFeature:(id)a0 domain:(id)a1 level:(long long)a2;
- (id)featuresForDomain:(id)a0;
- (BOOL)resolvedStateForDisclosure:(id)a0;
- (id)fileURLForLevelIndex:(unsigned long long)a0 pathIndex:(int)a1;
- (void)recalculateFeatureSetEffectsAt:(unsigned long long)a0;
- (void)addFeaturesForDomain:(id)a0 pathIndex:(int)a1 fromURL:(id)a2;
- (id)featuresForDomainAlreadyLocked:(id)a0;
- (id)definedFeatureSetsFilteredByCurrentDisclosures;
- (BOOL)writeCombinedUpdates:(id *)a0;
- (id)featureSetsFileURLForLevelIndex:(unsigned long long)a0;
- (id)currentDisclosuresAtLevel:(long long)a0;
- (long long)_resolvedValueForFeatureSet:(id)a0;
- (void)disableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (BOOL)isFeatureHidden:(id)a0 domain:(id)a1;
- (id)subscriptionsFileURLForLevelIndex:(unsigned long long)a0;
- (void)enableFeaturesMatchingAttribute:(id)a0 level:(long long)a1;
- (void)removeAllFeatureSetDataAtLevelIndex:(unsigned long long)a0;
- (void)enableFeature:(id)a0 domain:(id)a1 levelIndex:(unsigned long long)a2;
- (id)parseSubscriptionsDictionary:(id)a0;
- (id)internalDisclosureFileURLForLevelIndex:(unsigned long long)a0;
- (void)populateDictionary:(id)a0 withFeatures:(id)a1;

@end
