@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter;

- (unsigned long long)storeVersion;
- (id)localizableKeys;
- (id)alwaysLocalizedKeys;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)nonLocalizableKeys;
- (id)storeFilename;
- (void)fetchRecordsWithIDs:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (unsigned long long)highThresholdDataSizeLimit;
- (void)fetchRecordsWithIDs:(id)a0 cachePolicy:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 contentDatabase:(id)a1 contentDirectory:(id)a2 experimentationSuffix:(id)a3 activeTreatmentID:(id)a4;
- (id)keyValueRepresentationOfRecord:(id)a0;

@end
