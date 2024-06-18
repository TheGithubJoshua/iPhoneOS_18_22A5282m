@class NSDictionary, NSNumber, NSSet;

@interface HMMTRVendorMetadata : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)vendorWithID:(id)a0;
- (id)initWithVersion:(id)a0 schemaVersion:(id)a1;

@end
