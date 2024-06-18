@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection;

+ (id)os_log;

- (id)init;
- (id)writableAccountsFromAccounts:(id)a0 sourceAccountManagement:(int)a1;
- (BOOL)canReadFromLocalAccount;
- (BOOL)accountIsManaged:(id)a0;
- (BOOL)canWriteToLocalAccount;
- (id)writableAccountsFromAccounts:(id)a0;
- (BOOL)accountIsManagedForIdentifier:(id)a0;
- (BOOL)canReadFromAccountWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)writableAccountIdentifiersFromIdentifiers:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 managedProfileConnection:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 managedProfileConnection:(id)a1;
- (id)accountForIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0;
- (BOOL)canWriteToAccountWithIdentifier:(id)a0 fromSourceAccountIdentifier:(id)a1;
- (BOOL)deviceHasManagementRestrictions;
- (id)readableAccountIdentifiersFromIdentifiers:(id)a0;
- (int)accountManagementForIdentifier:(id)a0;
- (id)readableAccountsFromAccounts:(id)a0;

@end
