@class NSString, MTSDeviceSetupRoom;

@interface MTSDeviceSetupExtensionConfigureDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSString *deviceName;
@property (readonly, copy) MTSDeviceSetupRoom *deviceRoom;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithDeviceName:(id)a0 deviceRoom:(id)a1;

@end
