@class NSData;

@interface FCAssetKeyContentArchive : FCContentArchive {
    NSData *_wrappingKey;
    NSData *_wrappingKeyID;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)a0;

@end
