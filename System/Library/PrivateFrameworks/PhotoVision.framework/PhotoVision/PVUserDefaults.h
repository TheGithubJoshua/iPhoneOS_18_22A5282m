@interface PVUserDefaults : NSObject

+ (BOOL)quarantineTwinsOnAssetEnabled;
+ (float)facePrimarySuggestionsThreshold;
+ (unsigned long long)maxFaceCountForClustering;
+ (unsigned long long)advancedStatusVerifiedPersonLimit;
+ (float)faceClusteringThreshold;
+ (unsigned long long)minFaceCountToTriggerClustering;
+ (BOOL)faceClusteringDisabled;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (BOOL)suggestionsLogEnabled;
+ (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+ (float)faceClusteringAgeThreshold;
+ (BOOL)personBuildingDisabled;
+ (float)faceClusteringJunkThreshold;
+ (unsigned long long)minimumSuggestionSize;
+ (BOOL)personBuilderMergeCandidatesDisabled;
+ (unsigned long long)advancedStatusMergeCandidateLimit;
+ (unsigned int)faceAlgorithmUmbrellaVersion;
+ (float)faceIDModelClassificationThreshold;
+ (float)_floatValueForKey:(id)a0 defaultValue:(float)a1;
+ (BOOL)_boolValueForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)_doubleValueForKey:(id)a0 defaultValue:(double)a1;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (BOOL)faceIDModelAlwaysRebuild;
+ (unsigned long long)faceIDModelRebuildPeriod;
+ (BOOL)isBlacklistDisabled;
+ (unsigned int)sceneAlgorithmUmbrellaVersion;

@end
