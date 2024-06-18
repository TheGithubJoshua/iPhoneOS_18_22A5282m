@class VSManagedProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject <VSManagedProfileConnectionObserver>

@property (retain, nonatomic) VSManagedProfileConnection *profileConnection;
@property (nonatomic, getter=isAcountModificationAllowed) BOOL accountModificationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRestrictionsCenter;

- (id)init;
- (void)profileConnectionSettingsChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_canInstallAppsAtAll;
- (void)_updateAccountModificationAllowed;
- (BOOL)canInstallAppWithRating:(long long)a0;
- (void)profileConnectionProfileChanged:(id)a0;

@end