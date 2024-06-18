@interface CalDistributedNotificationHandler : NSObject {
    SEL _selector;
}

@property (readonly, weak) id observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 selector:(SEL)a1;
- (BOOL)handleNotification:(id)a0;

@end
