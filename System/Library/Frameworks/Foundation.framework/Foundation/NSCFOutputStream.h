@interface NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)initToMemory;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)streamError;
- (oneway void)release;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (unsigned long long)streamStatus;
- (unsigned long long)hash;
- (BOOL)hasSpaceAvailable;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)delegate;
- (unsigned long long)retainCount;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)open;
- (id)retain;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)propertyForKey:(id)a0;
- (void)close;

@end
