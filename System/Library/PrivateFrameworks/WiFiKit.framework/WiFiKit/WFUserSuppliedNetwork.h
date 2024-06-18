@class NSString;

@interface WFUserSuppliedNetwork : NSObject <WFNetworkListRecord>

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long security;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hotspotSignalStrength;
- (BOOL)iOSHotspot;
- (unsigned long long)signalBars;
- (float)scaledRSSI;
- (BOOL)canBeDisplayedAsCurrent;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)isInstantHotspot;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (BOOL)isAdhoc;
- (BOOL)isSecure;
- (long long)rssi;
- (BOOL)isEnterprise;
- (id)subtitle;
- (void).cxx_destruct;
- (id)title;

@end
