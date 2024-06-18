@interface __NSCFError : NSError

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (id)domain;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;
- (long long)code;
- (id)userInfo;

@end
