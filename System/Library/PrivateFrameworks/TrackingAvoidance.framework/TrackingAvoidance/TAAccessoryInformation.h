@class NSUUID, NSData, NSString;

@interface TAAccessoryInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSData *productData;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSData *firmwareVersion;
@property (copy, nonatomic) NSData *accessoryCategory;
@property (copy, nonatomic) NSData *accessoryCapabilities;
@property (readonly) unsigned int vendorId;
@property (readonly) unsigned int productId;

- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessoryTypeName;
- (id)initWithDeviceUUID:(id)a0 deviceType:(unsigned long long)a1 productData:(id)a2 manufacturerName:(id)a3 modelName:(id)a4 firmwareVersion:(id)a5 accessoryCategory:(id)a6 accessoryCapabilities:(id)a7;
- (BOOL)isCapableOfPrecisionFinding;
- (BOOL)isHawkeyeAudioAccessory;

@end
