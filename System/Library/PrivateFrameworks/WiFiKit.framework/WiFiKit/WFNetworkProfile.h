@class NSString, NSDictionary, NSArray, NSDate;

@interface WFNetworkProfile : NSObject <NSMutableCopying>

@property (retain, nonatomic) NSDictionary *enterpriseProfile;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) long long securityMode;
@property (nonatomic) long long securityModeExt;
@property (retain, nonatomic) NSDictionary *scanAttributes;
@property (nonatomic, getter=isAdhoc) BOOL adhoc;
@property (nonatomic, getter=isCaptive) BOOL captive;
@property (nonatomic, getter=isHS20Network) BOOL HS20Network;
@property (nonatomic, getter=isAutoJoinEnabled) BOOL autoJoinEnabled;
@property (nonatomic, getter=isCarPlay) BOOL carPlay;
@property (nonatomic) long long carPlayType;
@property (copy, nonatomic) NSString *carPlayUUID;
@property (copy, nonatomic) NSString *policyUUID;
@property (copy, nonatomic) NSString *originatorBundleIdentifier;
@property (copy, nonatomic) NSString *originatorName;
@property (nonatomic, getter=isHS20NetworkProvisioned) BOOL HS20NetworkProvisioned;
@property (nonatomic, getter=isCarrierBased) BOOL carrierBased;
@property (nonatomic, getter=isPersonalHotspot) BOOL personalHotspot;
@property (nonatomic, getter=isProfileBased) BOOL profileBased;
@property (nonatomic, getter=wasAddedFromWiFiPasswordSharing) BOOL addedFromWiFiPasswordSharing;
@property (retain, nonatomic) NSString *HS20AccountName;
@property (retain, nonatomic) NSString *HS20Badge;
@property (nonatomic) BOOL canExposeIMSI;
@property (nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (nonatomic) BOOL fetchedPassword;
@property (nonatomic) BOOL requiresPassword;
@property (nonatomic, getter=isInstantHotspotJoin) BOOL instantHotspotJoin;
@property (copy, nonatomic) NSString *randomMACAddress;
@property (nonatomic, getter=isRandomMACAddressEnabled) BOOL randomMACAddressEnabled;
@property (nonatomic, getter=isDNSHeuristicsFiltered) BOOL DNSHeuristicsFiltered;
@property (copy, nonatomic) NSString *HS20OperatorName;
@property (readonly, nonatomic) NSArray *certificateChain;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (readonly, nonatomic, getter=isAutoLoginEnabled) BOOL autoLoginEnabled;
@property (readonly, nonatomic, getter=isInSaveDataMode) BOOL isInSaveDataMode;
@property (readonly, nonatomic, getter=isPrivacyProxyEnabled) BOOL isPrivacyProxyEnabled;
@property (readonly, nonatomic, getter=networkQualityResponsiveness) double networkQualityResponsiveness;
@property (readonly, copy, nonatomic, getter=networkQualityDate) NSDate *networkQualityDate;
@property (readonly, nonatomic) BOOL requiresUsernameAndPassword;
@property (readonly, nonatomic) NSDate *addedDate;
@property (readonly, nonatomic) NSDate *lastAutoJoinDate;
@property (readonly, nonatomic) unsigned long long originator;
@property (readonly, nonatomic) BOOL userProvidedPassword;
@property (readonly, nonatomic) NSString *previousPassword;
@property (retain, nonatomic) NSString *hotspotDeviceIdentifier;

+ (BOOL)networkProfileRepresentSameNetwork:(id)a0 toNetworkProfile:(id)a1;

- (id)initWithNetworkRef:(struct __WiFiNetwork { } *)a0;
- (id)initWithCoreWiFiProfile:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEnterprise;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithNetwork:(id)a0;
- (void)dealloc;
- (BOOL)autoJoinConfigurable;
- (BOOL)autoLoginConfigurable;
- (BOOL)forgetable;
- (BOOL)networkQualityVisible;
- (BOOL)saveDataModeConfigurable;
- (BOOL)TLSProfileCanJoin;
- (BOOL)canAttemptJoin;
- (BOOL)isEqualToNetwork:(id)a0;
- (id)networkAttributes;
- (BOOL)profileContainsCarrierEAPType:(id)a0;
- (BOOL)profileContainsEAPAKA:(id)a0;
- (BOOL)profileContainsEAPSIM:(id)a0;
- (BOOL)randomMACAddressConfigurable;
- (BOOL)requiresTLSIdentityOnly;
- (BOOL)shouldBeRemovedIfApplicationIsNoLongerInstalled;

@end
