@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL force;
@property (nonatomic) double scanWaitInterval;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
