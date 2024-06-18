@class WebNotificationPrivate;

@interface WebNotification : NSObject {
    WebNotificationPrivate *_private;
}

- (id)init;
- (id)iconURL;
- (id)notificationID;
- (id)tag;
- (void)finalize;
- (id)origin;
- (id)body;
- (void)dealloc;
- (id)title;
- (id)lang;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)initWithCoreNotification:(void *)a0;

@end
