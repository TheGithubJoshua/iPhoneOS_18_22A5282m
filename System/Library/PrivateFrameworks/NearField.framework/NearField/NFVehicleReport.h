@class NSString, SESVehicleReport;

@interface NFVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SESVehicleReport *vehicleReport;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)a0;
- (id)getSupportedRKEFunctions;
- (id)initWithSESVehicleReport:(id)a0;
- (BOOL)isRKEFunctionInProgress:(id)a0;
- (BOOL)isRKEFunctionSupported:(id)a0;

@end
