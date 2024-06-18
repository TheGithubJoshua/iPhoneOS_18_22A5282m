@interface _NSSharedValueTransformer : NSValueTransformer

- (BOOL)_tryRetain;
- (id)copy;
- (oneway void)release;
- (BOOL)_isBooleanTransformer;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;

@end
