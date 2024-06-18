@class CKRecord;

@interface _WBSCKRecordSystemEncoder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) CKRecord *record;

- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
