@class HMAccessoryOwnershipToken, HMSetupAccessoryPayload;

@interface HMAccessorySetupPayload : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMSetupAccessoryPayload *internalSetupPayload;
@property (readonly, copy) HMAccessoryOwnershipToken *ownershipToken;

- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInternalSetupPayload:(id)a0 ownershipToken:(id)a1;
- (id)initWithURL:(id)a0 ownershipToken:(id)a1;

@end
