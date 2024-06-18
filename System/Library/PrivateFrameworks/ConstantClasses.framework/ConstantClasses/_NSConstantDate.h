@interface _NSConstantDate : NSDate

+ (id)alloc;

- (double)timeIntervalSinceReferenceDate;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;

@end
