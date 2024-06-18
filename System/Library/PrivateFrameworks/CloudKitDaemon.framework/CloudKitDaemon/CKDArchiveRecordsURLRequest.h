@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 recordIDsToArchive:(id)a1;

@end
