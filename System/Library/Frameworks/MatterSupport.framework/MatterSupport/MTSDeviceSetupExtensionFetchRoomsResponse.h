@class NSArray;

@interface MTSDeviceSetupExtensionFetchRoomsResponse : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSArray *rooms;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithRooms:(id)a0;

@end
