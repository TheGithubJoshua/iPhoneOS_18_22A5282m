@interface NSCFError : NSError

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)domain;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (long long)code;
- (id)userInfo;

@end
