@class NSUUID;

@interface HMDResidentReachabilityState : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *residentDeviceIdentifier;
@property (readonly) BOOL isReachable;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithResidentDeviceIdentifier:(id)a0 isReachable:(BOOL)a1;

@end
