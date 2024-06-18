@interface __NSGlobalBlock : NSBlock

- (BOOL)_tryRetain;
- (id)copy;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;

@end
