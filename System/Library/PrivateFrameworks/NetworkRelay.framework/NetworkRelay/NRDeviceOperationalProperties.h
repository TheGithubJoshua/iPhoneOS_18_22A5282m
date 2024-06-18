@class NSArray;

@interface NRDeviceOperationalProperties : NRDeviceProperties

@property (nonatomic) unsigned short version;
@property (nonatomic) BOOL providesPhoneCallRelaySupport;
@property (nonatomic) BOOL isReachableOverWiFi;
@property (nonatomic) BOOL handlesLinkRecommendations;
@property (nonatomic) BOOL allowsPermittedClientsOnly;
@property (nonatomic) BOOL allowsDirectToCloud;
@property (nonatomic) unsigned long long proxyCapability;
@property (nonatomic) unsigned long long bluetoothRole;
@property (nonatomic) unsigned long long bluetoothEndpointType;
@property (retain, nonatomic) NSArray *allowedLinkTypes;
@property (retain, nonatomic) NSArray *allowedLinkSubtypes;
@property (nonatomic) BOOL requiresReachability;
@property (nonatomic) BOOL proxyProviderRequiresWiFi;

+ (BOOL)supportsSecureCoding;
+ (id)copyPropertiesForDefaultPairedPhone;
+ (id)copyPropertiesForDefaultPairedWatch;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resolve;

@end
