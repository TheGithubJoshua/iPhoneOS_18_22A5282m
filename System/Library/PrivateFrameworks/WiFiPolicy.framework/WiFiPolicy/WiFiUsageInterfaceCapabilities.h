@class NSString;

@interface WiFiUsageInterfaceCapabilities : NSObject

@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) struct _Apple80211 { } *a11Ref;
@property (nonatomic) unsigned long long maxPHYRate;
@property (nonatomic) unsigned long long maxNumberOfSpatialStreams;

- (id)initWithInterfaceName:(id)a0;
- (unsigned long long)maxInterfaceNumberOfSpatialStreams;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)maxLinkPHYRate;
- (void)dealloc;
- (unsigned long long)maxInterfacePHYRate;
- (unsigned long long)currentLinkPHYRate;

@end
