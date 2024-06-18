@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (id)init;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;
- (void).cxx_destruct;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (void)removeObserverForNotificationName:(id)a0;
- (void)dealloc;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void)postNotification:(id)a0;
- (unsigned long long)stateForNotificationName:(id)a0;

@end
