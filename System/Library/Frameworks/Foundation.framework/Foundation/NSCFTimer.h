@interface NSCFTimer : NSTimer

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setFireDate:(id)a0;
- (id)init;
- (void)setTolerance:(double)a0;
- (double)timeInterval;
- (id)initWithFireDate:(id)a0 interval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
- (unsigned long long)_cfTypeID;
- (double)tolerance;
- (id)fireDate;
- (oneway void)release;
- (void)fire;
- (unsigned long long)hash;
- (BOOL)isValid;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)invalidate;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (id)userInfo;

@end
