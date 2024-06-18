@class UNUserNotificationCenter, NSString, NSObject, NSUserDefaults;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUINotificationManager : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) UNUserNotificationCenter *unCenter;
@property (retain, nonatomic) NSString *lastScheduledFullChargeNotificationID;
@property (nonatomic) BOOL immediateCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fullChargeDeadlineStringFromDate:(id)a0;
+ (id)obcEngagedContentWithDeadline:(id)a0 toppingOff:(BOOL)a1;
+ (id)obcEngagedRequestWithDeadline:(id)a0 isToppingOff:(BOOL)a1;
+ (id)pausedNotificationContentFromDate:(id)a0 bundle:(id)a1;

- (void)removeAllNotifications;
- (void)resetAll;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)postInternalChargingIntelligenceNotification:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 url:(id)a3 validUntil:(id)a4;
- (id)postOBCEngagedTopOffNotificationWithDate:(id)a0;
- (id)init;
- (id)postOBCEngagedNotificationWithDate:(id)a0;
- (void)removeCECPausedNotification;
- (id)postCECFirstTimeNotification;
- (id)postCECEngagedNotificationWithDate:(id)a0;
- (void).cxx_destruct;
- (BOOL)internalCECNotificationsDisabled;
- (void)cancelNotificationRequestWithIdentifier:(id)a0;
- (id)getDeliveredNotifications;
- (void)removeCECNotifications;
- (id)currentOBCEngagedNotification;
- (id)postNotificationWithRequest:(id)a0;
- (void)updateOBCEngagedNotificationWithDate:(id)a0;
- (id)postInternalCECNotificationWithID:(id)a0 chargingStatus:(BOOL)a1 information:(id)a2 shouldReplace:(BOOL)a3;
- (void)postInternalCECNotificationForChargingDates:(id)a0;

@end
