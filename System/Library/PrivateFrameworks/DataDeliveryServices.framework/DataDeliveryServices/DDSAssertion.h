@class NSSet, DDSAssetQuery, NSMutableSet, NSDate, DDSAssetPolicy, NSString;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *descriptors;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) DDSAssetQuery *query;
@property (readonly, nonatomic) DDSAssetPolicy *policy;
@property (readonly, nonatomic) NSSet *assertionIdentifiers;
@property (readonly, nonatomic) NSSet *clientIdentifiers;

- (id)initWithCoder:(id)a0;
- (void)removeDescriptorWithClientID:(id)a0;
- (id)init;
- (void)addDescriptorWithAssertionID:(id)a0 clientID:(id)a1 policy:(id)a2;
- (id)dumpDescription;
- (void)removeDescriptorWithAssertionID:(id)a0;
- (BOOL)isEqualToAssertion:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithQuery:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidateDescription;
- (id)assertionIDsForClientID:(id)a0;

@end
