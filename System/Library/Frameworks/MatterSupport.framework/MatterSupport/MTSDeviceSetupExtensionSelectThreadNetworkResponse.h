@class MTSThreadNetworkAssociation;

@interface MTSDeviceSetupExtensionSelectThreadNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSThreadNetworkAssociation *threadNetworkAssociation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithThreadNetworkAssociation:(id)a0;

@end
