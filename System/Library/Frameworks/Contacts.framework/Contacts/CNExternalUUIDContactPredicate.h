@class NSArray;

@interface CNExternalUUIDContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *externalUUIDs;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)shortDebugDescription;
- (id)initWithExternalUUIDs:(id)a0;

@end
