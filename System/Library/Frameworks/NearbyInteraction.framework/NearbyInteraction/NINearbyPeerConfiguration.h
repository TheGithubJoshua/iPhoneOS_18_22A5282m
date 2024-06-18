@class NIDiscoveryToken, NSDictionary;

@interface NINearbyPeerConfiguration : NIConfiguration

@property (copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken;
@property (nonatomic, getter=isLongRangeEnabled) BOOL longRangeEnabled;
@property (nonatomic) long long backgroundMode;
@property (copy) NSDictionary *debugParameters;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)initWithCoder:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)init;
- (id)descriptionInternal;
- (id)initWithPeerToken:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
