@interface NSNotificationCenter : NSObject {
    struct __CFNotificationCenter { } *_impl;
}

@property (class, readonly) NSNotificationCenter *defaultCenter;

+ (void)load;
+ (id)_defaultCenterWithoutCreating;

- (void)_removeObserver:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)isEmpty;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)postNotification:(id)a0;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
