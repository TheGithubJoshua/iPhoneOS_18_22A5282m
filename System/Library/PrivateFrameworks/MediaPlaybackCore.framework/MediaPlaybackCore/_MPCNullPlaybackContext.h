@class NSString;

@interface _MPCNullPlaybackContext : MPPlaybackContext

@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionComponents;

@end
