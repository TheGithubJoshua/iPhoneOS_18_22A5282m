@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToAdd:(id)a1;

@end
