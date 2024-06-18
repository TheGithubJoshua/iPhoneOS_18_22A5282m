@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)a0 inRecord:(id)a1;
+ (BOOL)_useTaggedImages;

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

@end
