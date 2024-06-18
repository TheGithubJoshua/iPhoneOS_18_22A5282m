@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 error:(id *)a1;
+ (id)currentLoggedInAccountWithError:(id *)a0;

- (id)init;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (id)containerWithPendingChanges;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;

@end
