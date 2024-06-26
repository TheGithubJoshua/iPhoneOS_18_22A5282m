@class NSString, NSMutableSet, NSDate, HMHome;

@interface HFCharacteristicNotificationManager : NSObject <HFHomeManagerObserver, HFHomeObserver>

@property (readonly, nonatomic) NSMutableSet *notificationsEnabledReasons;
@property (retain, nonatomic) HMHome *notificationsEnabledHome;
@property (retain, nonatomic) NSDate *lastNotificationsEnableRequestDate;
@property (readonly, nonatomic) BOOL notificationsEnabled;
@property (readonly, nonatomic) BOOL notificationsReasonsExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (void)_updateNotificationsEnabled;
- (void)_updateNotificationsEnabledWithNumberOfAppleMediaAccessories:(unsigned long long)a0;
- (void)disableNotificationsForSelectedHomeWithReason:(id)a0;
- (void)enableNotificationsForSelectedHomeWithReason:(id)a0;
- (void)enableNotificationsForSelectedHomeWithReason:(id)a0 numberOfAppleMediaAccessories:(unsigned long long)a1;

@end
