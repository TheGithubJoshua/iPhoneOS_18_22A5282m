@interface ANSystemNotificationObserver : NSObject

@property (copy) id /* block */ observerHandler;

+ (id)observer:(id /* block */)a0;

- (id)init;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_languageDidChange;
- (void)startObservingNotifications;
- (void)removeNotificationObservers;
- (void)dealloc;

@end
