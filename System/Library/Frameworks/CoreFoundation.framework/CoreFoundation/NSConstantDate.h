@interface NSConstantDate : NSDate {
    double _ti;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (BOOL)_tryRetain;
- (double)timeIntervalSinceReferenceDate;
- (id)copy;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)dealloc;
- (BOOL)_isDeallocating;

@end
