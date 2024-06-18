@class NSString, SFRemoteHotspotDevice;

@interface WFHotspotDevice : NSObject <WFNetworkListRecord>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SFRemoteHotspotDevice *hotspotDevice;
@property (readonly, nonatomic) NSString *ssid;

- (id)hotspotSignalStrength;
- (BOOL)iOSHotspot;
- (unsigned long long)signalBars;
- (BOOL)_isEqualToHotspotDevice:(id)a0;
- (long long)securityMode;
- (BOOL)isKnown;
- (float)scaledRSSI;
- (BOOL)canBeDisplayedAsCurrent;
- (BOOL)_isEqualToNetwork:(id)a0;
- (BOOL)isHotspot20;
- (id)lastJoinedDate;
- (BOOL)isEquivalentRecord:(id)a0;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)shouldShowInMyNetworkList;
- (BOOL)isInstantHotspot;
- (BOOL)shouldShowInKnownNetworkList;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (BOOL)isAdhoc;
- (BOOL)prominentDisplay;
- (BOOL)isSecure;
- (id)init;
- (long long)rssi;
- (BOOL)isEnterprise;
- (id)subtitle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)uniqueIdentifier;
- (BOOL)isPopular;
- (id)title;
- (void)setScaledRSSI:(float)a0;
- (id)initWithHotspotDevice:(id)a0;

@end
