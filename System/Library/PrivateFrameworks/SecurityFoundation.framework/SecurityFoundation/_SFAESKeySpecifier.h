@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {
    id _aesKeySpecifierInternal;
}

@property (readonly, nonatomic) long long blockSize;
@property (nonatomic) long long bitSize;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)keyLengthInBytes;
- (id)initWithBitSize:(long long)a0;

@end
