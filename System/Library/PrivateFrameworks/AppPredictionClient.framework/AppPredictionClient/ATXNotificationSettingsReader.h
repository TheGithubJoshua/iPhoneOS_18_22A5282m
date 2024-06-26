@class NSString, ATXDNDModeConfigurationClient, UNNotificationSettingsCenter;

@interface ATXNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol> {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    UNNotificationSettingsCenter *_notificationSettingsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)digestSetupComplete;
- (BOOL)appIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (id)initWithModeConfigurationClient:(id)a0 notificationSettingsCenter:(id)a1;
- (BOOL)doesAppSendNotificationsToDigest:(id)a0;
- (BOOL)contactIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)applicationConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (id)numConfiguredModes;
- (BOOL)appIsOnAllowList:(id)a0 dndModeUUID:(id)a1;
- (void).cxx_destruct;
- (BOOL)doesAppAllowMessageBreakthrough:(id)a0;
- (id)modeConfiguration:(id)a0;
- (BOOL)contactIsOnDenyList:(id)a0 dndModeUUID:(id)a1;
- (unsigned long long)senderConfigurationTypeForDNDModeUUID:(id)a0 success:(BOOL *)a1;
- (id)allConfiguredDigestApps;
- (id)notificationDigestDeliveryTimes;

@end
