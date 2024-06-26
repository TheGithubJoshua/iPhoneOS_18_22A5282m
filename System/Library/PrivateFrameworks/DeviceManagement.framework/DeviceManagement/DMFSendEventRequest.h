@class NSString, NSDictionary;

@interface DMFSendEventRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *inReplyTo;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSDictionary *details;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
