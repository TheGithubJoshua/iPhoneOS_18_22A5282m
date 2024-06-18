@class NSArray, NSString, NSSet;

@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *channels;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic) unsigned long long shortSSID;
@property (copy, nonatomic) NSArray *SSIDList;
@property (copy, nonatomic) NSString *BSSID;
@property (nonatomic) unsigned long long numberOfScans;
@property (nonatomic) unsigned long long restTime;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) int BSSType;
@property (nonatomic) int PHYMode;
@property (nonatomic) int scanType;
@property (nonatomic) long long minimumRSSI;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) BOOL mergeScanResults;
@property (nonatomic) BOOL includeHiddenNetworks;
@property (nonatomic) int scanFlags;
@property (copy, nonatomic) NSSet *includeProperties;
@property (copy, nonatomic) NSArray *includeScanResults;
@property (nonatomic) BOOL includeMatchingKnownNetworkProfiles;
@property (copy, nonatomic) NSArray *ANQPElementIDListForPasspointScanResults;
@property (nonatomic) unsigned long long maximumANQPCacheAgeForPasspointScanResults;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToScanParameters:(id)a0;

@end
