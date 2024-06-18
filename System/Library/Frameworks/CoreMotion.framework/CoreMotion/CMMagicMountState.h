@interface CMMagicMountState : CMLogItem

@property (readonly, nonatomic, getter=isMounted) BOOL mounted;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMounted:(BOOL)a0 timestamp:(double)a1;

@end
