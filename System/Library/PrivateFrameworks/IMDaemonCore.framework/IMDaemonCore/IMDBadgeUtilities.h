@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject

@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) long long lastFailedMessageDate;
@property (nonatomic, getter=isShowingFailure) BOOL showingFailure;
@property (nonatomic, getter=isUnexpectedlyLoggedOut) BOOL unexpectedlyLoggedOut;
@property (nonatomic) BOOL addedObserverForUnexpectedlyLoggedOut;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) IMDefaults *sharedDefaultsInstance;

+ (BOOL)_isUserIntentNotLoggedOut;
+ (id)sharedInstance;
+ (BOOL)_isUsableSendingForAccount:(id)a0;
+ (id)_accountsArrayForServiceIMessage;
+ (BOOL)_isTryingToLogin;
+ (BOOL)_iMessageFailedAccountIsIrreparable;
+ (BOOL)_iMessageEnabled;

- (id)init;
- (id)initWithMessageStore:(id)a0;
- (void)_postBadgeNumber:(id)a0;
- (BOOL)_shouldShowFailureString;
- (BOOL)_isUnexpectedlyLogOutValue;
- (long long)_savedFailureDate;
- (void)_compareLastFailureDateAndUpdateBadge:(long long)a0;
- (void)_updateBadgeAndCancelPreviousUpdate;
- (void)_handleUnexpectedLogout;
- (void)updateBadgeForLastFailedMessageDateChangeIfNeeded:(long long)a0;
- (void)updateBadgeForUnreadCountChangeIfNeeded:(long long)a0;
- (void)_saveFailureDate:(long long)a0;
- (BOOL)isInAppleStoreDemoMode;
- (void).cxx_destruct;
- (void)_stopSuppressingSound;
- (id)initWithMessageStore:(id)a0 defaultsStore:(id)a1;
- (void)_updateBadge;
- (void)_checkIfUnexpectedlyLoggedOut;
- (void)_cacheFailureDate:(long long)a0;
- (void)dealloc;
- (void)_clearFailureBadge;
- (void)_postBadgeString:(id)a0;

@end
