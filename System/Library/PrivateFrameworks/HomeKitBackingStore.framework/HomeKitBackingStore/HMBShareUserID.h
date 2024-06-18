@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;

- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithUserRecordID:(id)a0;

@end
