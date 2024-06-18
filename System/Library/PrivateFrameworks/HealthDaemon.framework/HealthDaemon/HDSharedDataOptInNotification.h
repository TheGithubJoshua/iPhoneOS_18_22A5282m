@class NSString;

@interface HDSharedDataOptInNotification : HDNanoHealthNotification {
    NSString *_guardianDisplayName;
}

+ (id)category;

- (unsigned long long)destinations;
- (void).cxx_destruct;
- (id)body;
- (id)title;
- (id)initWithNotificationManager:(id)a0 guardianDisplayName:(id)a1;

@end
