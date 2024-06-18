@class NSDictionary;

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *fileMap;

+ (id)na_identity;

- (id)initWithCoder:(id)a0;
- (id)fileInfoWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1 scale:(long long)a2;
- (id)fileInfoIdentifierWithMainIdentifier:(id)a0 userInterfaceStyle:(long long)a1;
- (id)initWithDictionary:(id)a0 clientConditions:(id)a1;
- (unsigned long long)hash;
- (id)filesFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addNewAssetInfoFromFileMap:(id)a0;

@end
