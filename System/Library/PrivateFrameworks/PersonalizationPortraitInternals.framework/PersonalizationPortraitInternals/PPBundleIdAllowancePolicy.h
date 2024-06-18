@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)_resetGuardedData;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void)_loadAssetData;
- (void).cxx_destruct;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (id)init_;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void)dealloc;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (id)_readAssetData:(id)a0;

@end
