@class NSString;

@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long localMasterChannel;
@property (nonatomic) unsigned long long localPreferredChannel;
@property (nonatomic) unsigned long long localSecondaryPreferredChannel;
@property (nonatomic) unsigned long long localAssistedDiscoveryMetric;
@property (copy, nonatomic) NSString *peerMACAddress;
@property (nonatomic) unsigned long long peerMasterChannel;
@property (nonatomic) unsigned long long peerPreferredChannel;
@property (nonatomic) unsigned long long peerSecondaryPreferredChannel;
@property (nonatomic) unsigned long long peerAssistedDiscoveryMetric;
@property (nonatomic) int peerSupportedChannelFlags;
@property (nonatomic) BOOL followMode;
@property (nonatomic) unsigned long long followModePreferredBand;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAWDLParameters:(id)a0;

@end
