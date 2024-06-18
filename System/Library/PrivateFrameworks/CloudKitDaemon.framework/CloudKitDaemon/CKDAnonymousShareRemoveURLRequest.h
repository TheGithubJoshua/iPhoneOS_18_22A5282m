@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)initWithOperation:(id)a0 encryptedAnonymousSharesToRemove:(id)a1;

@end
