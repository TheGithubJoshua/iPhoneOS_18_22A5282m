@interface CXSetTTYTypeCallAction : CXCallAction

@property (nonatomic) long long ttyType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCallUUID:(id)a0 ttyType:(long long)a1;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
