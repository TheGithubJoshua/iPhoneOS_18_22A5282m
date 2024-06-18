@interface RBProcessAppNapState : NSObject <NSCopying, NSMutableCopying>

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithProcessAppNapState:(id)a0;
- (unsigned short)encodedState;

@end
