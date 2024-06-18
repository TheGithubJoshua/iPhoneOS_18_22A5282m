@class NSArray;

@interface MTSDeviceSetupExtensionSelectWiFiNetworkRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *wifiScanResults;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithWiFiScanResults:(id)a0;

@end
