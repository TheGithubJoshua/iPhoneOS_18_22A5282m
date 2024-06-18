@interface NRDeviceProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long pairingProtocolVersion;
@property (nonatomic) unsigned short peerNetworkRelayVersion;

+ (unsigned short)getNetworkRelayVersion;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
