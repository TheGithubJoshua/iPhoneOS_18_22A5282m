@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject {
    HDNotificationManager *_notificationManager;
}

+ (id)category;

- (unsigned long long)destinations;
- (void).cxx_destruct;
- (id)body;
- (id)title;
- (id)initWithNotificationManager:(id)a0;
- (void)triggerNotification;

@end
