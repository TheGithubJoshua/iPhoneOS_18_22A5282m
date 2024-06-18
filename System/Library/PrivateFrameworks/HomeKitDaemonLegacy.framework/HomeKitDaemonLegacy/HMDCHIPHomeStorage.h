@class NSString, NSDictionary, NSData, NSNumber;

@interface HMDCHIPHomeStorage : HMFObject <HMFLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *fabricID;
@property (copy) NSNumber *fabricIndex;
@property (copy) NSNumber *lastNodeID;
@property (copy) NSData *rootCertificate;
@property (copy) NSData *operationalCertificate;
@property (copy) NSData *intermediateCertificate;
@property (copy) NSDictionary *keyValueStore;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void)updateHomeModel:(id)a0;
- (BOOL)updateUsingHomeModel:(id)a0;

@end
