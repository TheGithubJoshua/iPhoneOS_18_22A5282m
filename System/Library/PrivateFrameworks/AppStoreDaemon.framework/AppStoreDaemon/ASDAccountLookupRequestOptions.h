@interface ASDAccountLookupRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL authIfNeeded;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
