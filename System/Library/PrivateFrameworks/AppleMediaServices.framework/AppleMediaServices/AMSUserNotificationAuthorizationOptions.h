@class NSDictionary;

@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authorizationOptions;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (nonatomic) BOOL userInitiated;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)optionsDictionary;
- (id)initWithOptionsDictionary:(id)a0;

@end
