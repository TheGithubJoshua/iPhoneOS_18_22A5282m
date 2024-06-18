@interface IMDExposureNotificationManager : NSObject

+ (id)sharedInstance;

- (BOOL)_isMessageItemEligibleForEN:(id)a0;
- (BOOL)_bagDisabled;
- (id)_enManager;
- (id)_allowedDomains;
- (id)_enTextMessageForMessageBody:(id)a0;
- (void)processMessageItemForENURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_enURLsForMessageBody:(id)a0;

@end
