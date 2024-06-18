@class NSMutableArray, SSVSubscriptionStatusRequest, NSDate, NSObject, SSVSubscriptionStatus;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    long long _subscriptionStatusAccessPolicy;
    NSMutableArray *_statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;

+ (id)_existingSharedCoordinator;
+ (id)_changeNotificationSuspensionAccessQueue;
+ (void)updateUserDefaultsWithStatus:(id)a0;
+ (void)updateWithResponseDictionary:(id)a0 accountIdentifier:(id)a1;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (void)removeUserDefaultsForAccountIdentifier:(id)a0;
+ (void)sendChangeNotification;
+ (void)_sendChangeNotification;
+ (id)sharedCoordinator;
+ (id)copyStatusFromUserDefaults;

- (id)init;
- (void)getStatusWithOptions:(id)a0 statusBlock:(id /* block */)a1;
- (void)_deviceStoreFrontChangedNotification;
- (id)_copyValidStatusForStatus:(id)a0;
- (void)_externalChangeNotification;
- (void)_invalidateLastKnownStatus;
- (void)_handleRequestResponseWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (id)_copyStatusFromUserDefaults;
- (void).cxx_destruct;
- (void)_fireStatusBlocksWithStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (id)_copyStatusDateFromUserDefaults;
- (void)dealloc;
- (void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)a0;
- (void)reset;
- (void)_accountStoreChangedNotification;
- (void)_validateLastKnownStatus;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)a0;

@end
