@class NSString, NSManagedObjectID;

@interface _DPOBHRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;
@property (retain, nonatomic) NSManagedObjectID *objectId;

+ (id)createRecordFromManagedObject:(id)a0;
+ (id)entityName;

- (id)initWithCoder:(id)a0;
- (id)entityName;
- (BOOL)copyToManagedObject:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)copyFromManagedObject:(id)a0;
- (id)jsonString;
- (id)initWithKey:(id)a0 creationDate:(double)a1 submitted:(BOOL)a2 objectId:(id)a3;
- (BOOL)isEqualToOBHRecord:(id)a0;

@end
