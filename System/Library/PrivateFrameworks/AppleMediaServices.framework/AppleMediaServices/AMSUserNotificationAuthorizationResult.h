@class AMSEngagementRequest;

@interface AMSUserNotificationAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long authorizationStatus;
@property (retain, nonatomic) AMSEngagementRequest *request;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
