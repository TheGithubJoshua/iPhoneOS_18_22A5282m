@interface W5DebugConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long wifi;
@property (nonatomic) long long megaWiFiProfile;
@property (nonatomic) long long noLoggingWiFiProfile;
@property (nonatomic) long long eapol;
@property (nonatomic) long long bluetooth;

- (id)initWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDebugConfiguration:(id)a0;

@end
