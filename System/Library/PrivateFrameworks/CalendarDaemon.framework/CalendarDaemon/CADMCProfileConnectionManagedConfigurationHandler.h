@class MCProfileConnection;

@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject <CADManagedConfigurationHandler>

@property (readonly, nonatomic) MCProfileConnection *connection;

- (BOOL)mayShowLocalAccountsForBundleID:(id)a0 sourceAccountManagement:(int)a1;
- (BOOL)mayShowLocalAccountsForTargetBundleID:(id)a0 targetAccountManagement:(int)a1;
- (BOOL)isOpenInRestrictionInEffect;
- (id)filteredOpenInAccounts:(id)a0 originatingAppBundleID:(id)a1 sourceAccountManagement:(int)a2;
- (id)filteredOpenInOriginatingAccounts:(id)a0 targetAppBundleID:(id)a1 targetAccountManagement:(int)a2;
- (id)initWithMCProfileConnection:(id)a0;
- (void).cxx_destruct;

@end
