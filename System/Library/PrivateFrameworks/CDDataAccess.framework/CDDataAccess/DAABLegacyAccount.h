@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount>

@property (readonly, nonatomic) void *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)legacyIdentifier;
- (BOOL)isContainer;
- (id)externalIdentifier;
- (BOOL)isGroup;
- (void)dealloc;
- (id)identifier;
- (BOOL)isContact;
- (void)markForDeletion;
- (id)initWithABAccout:(void *)a0;
- (BOOL)isAccount;
- (void)updateSaveRequest:(id)a0;

@end
