@class NSString, NSUUID, MTSDeviceSetupHome;

@interface MTSDeviceSetupExtensionPairDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceSetupHome *home;
@property (readonly, copy) NSString *onboardingPayload;
@property (readonly, copy) NSUUID *deviceUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithHome:(id)a0 onboardingPayload:(id)a1 deviceUUID:(id)a2;

@end
