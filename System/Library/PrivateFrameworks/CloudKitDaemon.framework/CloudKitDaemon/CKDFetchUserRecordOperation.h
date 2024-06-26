@class CKRecord;

@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation

@property (retain, nonatomic) CKRecord *userRecord;

- (void)fetchRecordsWithIDs:(id)a0 andFullRecords:(id)a1;
- (id)analyticsPayload;
- (void)main;
- (int)operationType;
- (void).cxx_destruct;

@end
