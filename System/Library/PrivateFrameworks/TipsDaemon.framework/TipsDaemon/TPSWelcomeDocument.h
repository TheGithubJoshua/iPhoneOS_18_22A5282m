@class NSString;

@interface TPSWelcomeDocument : TPSDocument

@property (copy, nonatomic) NSString *majorVersion;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end