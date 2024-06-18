@class NSString, NSData, NSDate;

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSData *ssid;
@property (nonatomic) long long security;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isPasspoint;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) BOOL isCaptive;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isMultiAP;
@property (copy, nonatomic) NSDate *lastJoinedTimestamp;

- (id)initWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isEqualToPreferredNetwork:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
