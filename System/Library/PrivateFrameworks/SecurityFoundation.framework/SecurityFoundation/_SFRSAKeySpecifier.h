@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {
    id _rsaKeySpecifierInternal;
}

@property (nonatomic) long long bitSize;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBitSize:(long long)a0;

@end
