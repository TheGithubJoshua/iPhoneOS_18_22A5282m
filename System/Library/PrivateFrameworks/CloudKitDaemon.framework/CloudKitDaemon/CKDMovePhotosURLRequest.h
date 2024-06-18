@class NSArray, NSMutableDictionary;

@interface CKDMovePhotosURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;
@property (nonatomic) BOOL atomic;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (int)isolationLevel;
- (id)initWithOperation:(id)a0 moveChanges:(id)a1 sourceDatabaseScope:(long long)a2 atomic:(BOOL)a3;

@end
