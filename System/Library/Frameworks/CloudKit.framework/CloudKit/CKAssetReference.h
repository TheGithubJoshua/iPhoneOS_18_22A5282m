@class NSString, CKRecordID, NSData;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, copy, nonatomic) NSData *fileSignature;

- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExistingRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 fileSignature:(id)a3;

@end
