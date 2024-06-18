@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (BOOL)makeStateTransition;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void).cxx_destruct;
- (void)_addAnonymousSharesToSharedDB;

@end
