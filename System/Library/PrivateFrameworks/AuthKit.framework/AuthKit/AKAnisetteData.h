@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *machineID;
@property (copy, nonatomic) NSString *oneTimePassword;
@property (nonatomic) unsigned long long routingInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
