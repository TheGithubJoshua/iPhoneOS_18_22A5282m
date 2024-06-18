@class NSUUID, NSString, NEContentFilter, NEPathController, NEAppPush, NEVPNApp, NEDNSProxy, NEAOVPN, NEProfileIngestionPayloadInfo, NEDNSSettingsBundle, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    long long _appPermissionType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pluginType;
@property (readonly) long long grade;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *application;
@property (copy) NSString *name;
@property (copy) NSString *applicationName;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *externalIdentifier;
@property (copy) NEVPN *VPN;
@property (copy) NEAOVPN *alwaysOnVPN;
@property (copy) NEVPNApp *appVPN;
@property (copy) NEContentFilter *contentFilter;
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo;
@property (copy) NEPathController *pathController;
@property (copy) NEDNSProxy *dnsProxy;
@property (copy) NEDNSSettingsBundle *dnsSettings;
@property (copy) NEAppPush *appPush;

+ (id)configurationWithProfilePayload:(id)a0 grade:(long long)a1;
+ (id)configurationWithProfilePayload:(id)a0;

- (BOOL)setCertificates:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getConfigurationIdentifier;
- (BOOL)setExcludedDomains:(id)a0;
- (BOOL)setProfileInfo:(id)a0;
- (BOOL)setPerAppRuleSettings:(id)a0 withAppIdentifier:(id)a1;
- (id)getPendingCertificateUUIDs:(id)a0;
- (BOOL)setContactsDomains:(id)a0;
- (BOOL)setMailDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setSMBDomains:(id)a0;
- (id)generateSignature;
- (unsigned long long)hash;
- (BOOL)setCalendarDomains:(id)a0;
- (BOOL)setRestrictDomains:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)getPendingCertificateInfo:(id)a0;
- (BOOL)setContactsDomains:(id)a0 accountIdentifiers:(id)a1;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setMailDomains:(id)a0;
- (BOOL)setPayloadInfoCommon:(id)a0 payloadOrganization:(id)a1;
- (id)initWithName:(id)a0 grade:(long long)a1;
- (void)applyOverrides;
- (id)getCertificates;
- (id)descriptionWithOptions:(unsigned long long)a0;
- (BOOL)setPayloadInfoIdentity:(id)a0;
- (void)clearSystemKeychain;
- (BOOL)setPerAppUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setAppLayerVPNUUID:(id)a0 andSafariDomains:(id)a1;
- (BOOL)setCalendarDomains:(id)a0 accountIdentifiers:(id)a1;
- (BOOL)setAssociatedDomains:(id)a0;

@end
