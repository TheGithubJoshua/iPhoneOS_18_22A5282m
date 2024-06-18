@interface DEExtensionTracker : NSObject

+ (id)userDefaults;
+ (BOOL)hasInactiveLoggingSession:(id)a0;
+ (void)scheduleXPCActivity;
+ (void)checkIn;
+ (void)_updateXPCActivityDate;
+ (void)saveCurrentLoggingExtensionsWithDictionary:(id)a0;
+ (void)increaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (void)updateRetainCountWithIdentifier:(id)a0 session:(id)a1 offsetBy:(int)a2;
+ (id)currentLoggingExtensions;
+ (BOOL)shouldSetupWithIdentifier:(id)a0 session:(id)a1 expirationDate:(id)a2;
+ (void)_updateExtensionExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)updateExpirationDateWithIdentifier:(id)a0 expirationDate:(id)a1;
+ (void)extensionTrackerCleanup;
+ (id)criteria:(id)a0;
+ (void)decreaseRetainCountWithIdentifier:(id)a0 session:(id)a1;
+ (id)sharedSerialQueue;
+ (BOOL)shouldTeardownWithIdentifier:(id)a0 session:(id)a1;
+ (double)xpcActivityTimeInterval;

@end
