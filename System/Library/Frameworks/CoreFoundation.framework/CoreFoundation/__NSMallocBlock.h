@interface __NSMallocBlock : NSBlock

- (BOOL)_tryRetain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;

@end
