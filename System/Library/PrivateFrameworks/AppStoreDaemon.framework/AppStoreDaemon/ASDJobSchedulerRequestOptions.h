@interface ASDJobSchedulerRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL verbose;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
