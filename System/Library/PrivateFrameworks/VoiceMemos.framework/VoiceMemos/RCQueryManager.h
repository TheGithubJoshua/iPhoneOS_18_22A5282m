@class NSArray, NSEntityDescription, NSManagedObjectModel;

@interface RCQueryManager : NSObject {
    NSManagedObjectModel *_model;
}

@property (class, readonly, nonatomic) NSArray *defaultSortDescriptors;
@property (class, readonly, nonatomic) NSArray *defaultFetchedProperties;

@property (readonly, nonatomic) NSEntityDescription *cloudRecordingEntity;
@property (readonly, nonatomic) NSEntityDescription *folderEntity;

+ (id)recordingsInFolderPredicate:(id)a0;
+ (id)playablePredicate;
+ (id)musicMemoPredicate;
+ (id)watchOSPredicate;
+ (id)customLabelSearchPredicateWithString:(id)a0;
+ (id)favoritePredicate;
+ (id)cacheDeletedOnWatchPredicate;
+ (id)clearTransientFlagsBatchUpdateRequest;

- (id)recordingsWithTitleFetchRequest:(id)a0;
- (id)allFoldersForSortingFetchRequest;
- (id)recordingsWithUniqueIDsFetchRequest:(id)a0;
- (id)_cloudRecordingFetchRequest;
- (id)recordingsWithNilEncryptedTitleOrCustomLabelFetchRequest;
- (id)deletedRecordingsFetchRequest;
- (id)allDeletedRecordingsFetchRequest;
- (id)recordingsWithUniqueIDFetchRequest:(id)a0;
- (void)updateFetchRequestTemplates;
- (id)encryptedFieldsMigrationsFetchRequest;
- (id)foldersWithhRankFetchRequest:(long long)a0;
- (id)playableRecordingsFetchRequestWithSubPredicate:(id)a0;
- (id)legacyRecordingWithUniqueIDFetchRequest:(id)a0;
- (id)userDefinedFoldersFetchRequest;
- (void).cxx_destruct;
- (unsigned long long)playableRecordingsCountWithContext:(id)a0;
- (id)evictionDateBeforeFetchRequest:(id)a0;
- (id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)a0;
- (id)_labelPresetsForQuery:(id)a0;
- (id)visibleRecordingsFetchRequest;
- (id)initWithModel:(id)a0;
- (id)foldersWithUUIDFetchRequest:(id)a0;
- (id)allCustomLabelsFetchRequest;
- (id)recordingsForPathFetchRequest:(id)a0;
- (id)recordingsInFolderFetchRequest:(id)a0;
- (id)recordingsForSpotlightSearchFetchRequest:(id)a0;
- (id)foldersWithNameFetchRequest:(id)a0 searchOption:(int)a1;
- (id)databasePropertyKeyToPropertyFetchRequest:(id)a0;

@end
