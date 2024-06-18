@class NSString, _MRDiscoverySessionConfigurationProtobuf;

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL populatesExternalDevice;
@property (copy, nonatomic) NSString *outputDeviceUID;
@property (readonly, copy, nonatomic) _MRDiscoverySessionConfigurationProtobuf *protobuf;
@property (readonly, nonatomic) unsigned int features;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL enableThrottling;
@property (nonatomic) BOOL alwaysAllowUpdates;
@property (nonatomic) unsigned int targetAudioSessionID;

+ (id)configurationWithEndpointFeatures:(unsigned int)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEndpointFeatures:(unsigned int)a0;

@end
