@class NSArray;

@interface FCTagRecordSource : FCRecordSource {
    NSArray *_nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 desiredTagRecordFieldOptions:(unsigned long long)a4;
- (id)nonLocalizableKeys;
- (id)storeFilename;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)saveTagRecords:(id)a0;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)localizableLanguageSpecificKeys;
- (id)localizableExperimentalizableKeys;
- (id)experimentalizableKeys;
- (void).cxx_destruct;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 experimentalizableFieldsPostfix:(id)a4 activeTreatmentID:(id)a5;

@end
