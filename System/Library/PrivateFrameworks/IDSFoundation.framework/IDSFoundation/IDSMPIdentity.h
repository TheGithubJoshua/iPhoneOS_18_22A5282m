@interface IDSMPIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) void *backingValue;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBackingValue:(void *)a0;

@end
