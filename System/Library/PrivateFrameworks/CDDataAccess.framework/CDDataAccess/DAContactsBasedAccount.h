@class NSString, CNAccount;

@interface DAContactsBasedAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) CNAccount *account;
@property (nonatomic) BOOL markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (int)legacyIdentifier;
- (BOOL)isContainer;
- (void).cxx_destruct;
- (id)externalIdentifier;
- (BOOL)isGroup;
- (id)identifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;

@end
