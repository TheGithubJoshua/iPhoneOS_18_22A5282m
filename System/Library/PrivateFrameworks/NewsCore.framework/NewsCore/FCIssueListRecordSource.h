@interface FCIssueListRecordSource : FCRecordSource

- (unsigned long long)storeVersion;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)nonLocalizableKeys;
- (id)storeFilename;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (int)pbRecordType;
- (unsigned long long)highThresholdDataSizeLimit;

@end
