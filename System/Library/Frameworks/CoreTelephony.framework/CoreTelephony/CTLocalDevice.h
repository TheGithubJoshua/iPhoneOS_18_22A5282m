@class NSArray, CTDeviceIdentifier;

@interface CTLocalDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *installedPlans;

- (id)initWithCoder:(id)a0;
- (id)deviceName;
- (unsigned long long)deviceType;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)EID;

@end
