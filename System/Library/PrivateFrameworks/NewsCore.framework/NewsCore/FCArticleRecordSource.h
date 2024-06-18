@class NSString, NSArray, NFUnfairLock;

@interface FCArticleRecordSource : FCRecordSource

@property (retain, nonatomic) NFUnfairLock *experimentalFieldsLock;
@property (nonatomic) unsigned long long desiredArticleRecordFieldOptions;
@property (retain, nonatomic) NSString *engagementCohortsExpField;
@property (retain, nonatomic) NSString *conversionCohortsExpField;
@property (retain, nonatomic) NSArray *engagementRecordKeys;
@property (retain, nonatomic) NSArray *conversionRecordKeys;
@property (retain, nonatomic) NSArray *topicFlagsRecordKeys;
@property (retain, nonatomic) NSArray *articleTagMetadataRecordKeys;
@property (retain, nonatomic) NSArray *embeddingRecordKeys;

+ (id)modificationDateFromCKRecord:(id)a0;
+ (id)identifierFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;
+ (id)canaryRecordName;
+ (BOOL)useTaggedImages;
+ (id)changeTagFromCKRecord:(id)a0;

- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)nonLocalizableKeys;
- (id)storeFilename;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)saveArticleRecords:(id)a0;
- (id)localizableExperimentalizableKeys;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)experimentalizableKeys;
- (void).cxx_destruct;
- (id)topicFlagsFromCKRecord:(id)a0;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 experimentalizableFieldsPostfix:(id)a4 activeTreatmentID:(id)a5;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 desiredArticleRecordFieldOptions:(unsigned long long)a4 experimentalizableFieldsPostfix:(id)a5 engagementCohortsExpField:(id)a6 conversionCohortsExpField:(id)a7 activeTreatmentID:(id)a8;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)engagementFromCKRecord:(id)a0;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)articleTagMetadataFromCKRecord:(id)a0;

@end
