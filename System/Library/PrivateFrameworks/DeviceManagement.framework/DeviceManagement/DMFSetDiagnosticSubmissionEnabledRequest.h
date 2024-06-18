@interface DMFSetDiagnosticSubmissionEnabledRequest : DMFTaskRequest

@property (nonatomic) BOOL enabled;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
