@class NSUUID;

@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *backingStoreUUID;
@property (readonly) NSUUID *homeUUID;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithBackingStoreUUID:(id)a0 homeUUID:(id)a1;

@end
