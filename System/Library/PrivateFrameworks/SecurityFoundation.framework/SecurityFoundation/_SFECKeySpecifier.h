@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {
    id _ecKeySpecifierInternal;
}

@property long long curve;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (id)initWithCoder:(id)a0;
- (id)initWithCurve:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
