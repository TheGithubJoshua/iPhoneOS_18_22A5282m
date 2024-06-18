@class CKRecordID;

@interface CKSyncEngineRecordModification : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) long long type;

+ (id)recordModificationsWithOppositeTypeFromRecordModifications:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)oppositeTypeModification;
- (id)initWithRecordID:(id)a0 type:(long long)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
