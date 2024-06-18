@class UMUserSwitchBlockingTask;

@interface LKLogoutSupport : NSObject

@property (retain, nonatomic) UMUserSwitchBlockingTask *syncTask;

- (id)init;
- (void).cxx_destruct;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)a0;
- (BOOL)isCurrentUserAnonymous;
- (void)logoutToLoginWindowWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canLogoutToLoginSession;
- (void)_syncPreferencesIfNeeded;
- (void)logoutToLoginUserWithCompletionHandler:(id /* block */)a0;
- (id)logoutWarningMessage;

@end
