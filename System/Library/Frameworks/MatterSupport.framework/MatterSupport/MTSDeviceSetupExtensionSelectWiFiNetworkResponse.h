@class MTSWiFiNetworkAssociation;

@interface MTSDeviceSetupExtensionSelectWiFiNetworkResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSWiFiNetworkAssociation *wifiNetworkAssociation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithWiFiNetworkAssociation:(id)a0;

@end
