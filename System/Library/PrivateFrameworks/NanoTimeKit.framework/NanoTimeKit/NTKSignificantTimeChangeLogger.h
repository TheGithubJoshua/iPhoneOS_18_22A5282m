@interface NTKSignificantTimeChangeLogger : NSObject

+ (id)sharedInstance;
+ (void)beginLogging;

- (id)init;
- (void)_startObserving;
- (void)_handleNotification:(id)a0;
- (void)_logNotificationReceiptWithName:(id)a0;

@end
