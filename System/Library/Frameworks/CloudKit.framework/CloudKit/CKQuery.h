@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy) NSArray *sortDescriptors;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)_setPredicate:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordType:(id)a0 predicate:(id)a1;
- (void)_setRecordType:(id)a0;

@end
