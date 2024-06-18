@class NSString, DMFReportingRequirements, NSXPCListenerEndpoint;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSourceName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
