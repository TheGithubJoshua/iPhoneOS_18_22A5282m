@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID;
@property (copy, nonatomic) id /* block */ notificationMarkedReadProgressBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 notificationIDsToMarkRead:(id)a1;

@end
