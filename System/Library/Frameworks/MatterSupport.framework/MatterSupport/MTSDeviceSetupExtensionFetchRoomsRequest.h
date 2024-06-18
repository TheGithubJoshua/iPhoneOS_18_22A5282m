@class MTSDeviceSetupHome;

@interface MTSDeviceSetupExtensionFetchRoomsRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) MTSDeviceSetupHome *home;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithHome:(id)a0;

@end
