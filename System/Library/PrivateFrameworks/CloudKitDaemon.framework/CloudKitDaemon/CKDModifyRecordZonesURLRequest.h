@class NSArray, NSMutableDictionary, NSDate;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) id /* block */ recordZoneModifiedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 recordZonesToSave:(id)a1 recordZoneIDsToDelete:(id)a2;

@end
