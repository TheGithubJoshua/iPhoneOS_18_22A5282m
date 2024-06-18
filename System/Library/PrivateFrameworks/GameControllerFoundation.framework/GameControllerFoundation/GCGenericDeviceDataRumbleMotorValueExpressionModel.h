@class NSString;

@interface GCGenericDeviceDataRumbleMotorValueExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly, copy) NSString *motorName;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;

@end
