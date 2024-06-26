@class NSString;

@interface CRKSetAirPlayRouteRequest : CATTaskRequest

@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL suppressPasscodePrompt;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
