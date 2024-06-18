@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IDSAccountNotificationDelegate : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _setupRequestPending;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_passwordEquivalentTokenFromAccount:(id)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_iTunesSignInBasedOnAccount:(id)a0;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (void)_gameCenterModifyBasedOnUsername:(id)a0;
- (void).cxx_destruct;
- (void)_iCloudSignOut;
- (void)_gameCenterSignInBasedOnAccount:(id)a0 inStore:(id)a1;
- (void)_iCloudModifyBasedOnUsername:(id)a0;
- (void)_iCloudSignInBasedOnAccount:(id)a0 inStore:(id)a1;
- (void)_gameCenterSignOut;
- (id)_findExistingIdentityServicesACAccountWithUserName:(id)a0 inStore:(id)a1;
- (void)_iTunesSignOut;

@end
