@class NSMutableDictionary;

@interface CalDistributedNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers;

+ (void)removeObserver:(id)a0;
+ (void)removeObserver:(id)a0 name:(id)a1;
+ (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
+ (void)_handleNotification:(id)a0;
+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;

@end
