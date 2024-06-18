@interface __NSCFLocale : NSLocale

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithLocaleIdentifier:(id)a0;
- (id)_prefForKey:(id)a0;
- (BOOL)_tryRetain;
- (id)displayNameForKey:(id)a0 value:(id)a1;
- (oneway void)release;
- (unsigned char)_doesNotRequireSpecialCaseHandling;
- (id)objectForKey:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (void)_setDoesNotRequireSpecialCaseHandling;
- (id)retain;
- (BOOL)_isDeallocating;

@end
