@class NSString;

@interface HDSharedDataPrivacyNotification : HDNanoHealthNotification {
    NSString *_firstName;
    NSString *_lastName;
}

+ (id)category;

- (void).cxx_destruct;
- (id)body;
- (id)title;
- (id)initWithNotificationManager:(id)a0 guardianFirstName:(id)a1 lastName:(id)a2;

@end
