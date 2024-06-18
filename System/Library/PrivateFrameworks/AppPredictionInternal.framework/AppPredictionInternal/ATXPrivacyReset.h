@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_removeAllBlendingUICaches;
- (void)_handlePrivacyResetNotification;
- (void).cxx_destruct;
- (void)_writeDeletionPlaceholder;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_removeAllAppActionData;
- (void)dealloc;
- (BOOL)_placeholderExists;
- (id)_placeholderPath;

@end
