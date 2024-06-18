@interface HMFNotificationCenter : NSObject

+ (id)defaultCenter;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)postNotification:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end