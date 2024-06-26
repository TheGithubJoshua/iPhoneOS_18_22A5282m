@interface CTCallCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isWifiCallingAvailable;
@property (nonatomic) BOOL isVoLTECallingAvailable;
@property (nonatomic) BOOL isCSCallingAvailable;
@property (nonatomic) BOOL isEmergencyCallingOnWifiAllowed;
@property (nonatomic) BOOL isEmergencyCallingOnWifiAvailable;
@property (nonatomic) BOOL isCarrierSupportsEmergencyCallOnWifiNoLimit;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
