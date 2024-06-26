@class NSString, NSNumber, NSDictionary;

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *deviceUniqueID;
@property (copy, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL mfiAuthenticated;
@property (readonly, nonatomic) NSDictionary *hidMatchingDictionary;

+ (BOOL)supportsSecureCoding;
+ (id)motionTrackingHIDInputWithDevice:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)plistDictionary;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)uniqueIdentifier;
- (id)initWithDeviceUniqueID:(id)a0 productID:(id)a1 vendorID:(id)a2 deviceName:(id)a3 mfiAuthenticated:(BOOL)a4;
- (BOOL)isHIDDevice;
- (BOOL)supportsExpressions;
- (unsigned long long)trackingType;

@end
