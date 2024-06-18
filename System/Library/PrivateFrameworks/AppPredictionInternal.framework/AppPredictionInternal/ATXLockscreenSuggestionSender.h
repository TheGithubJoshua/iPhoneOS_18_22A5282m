@class NSUserDefaults, ATXLockscreenBlacklist, ATXActionNotificationServer;

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (id)_cachedExecutableIdentifier;
- (void).cxx_destruct;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)a0;
- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)a0;
- (id)initWithLockscreenBlacklist:(id)a0 actionNotificationServer:(id)a1 userDefaults:(id)a2;

@end
