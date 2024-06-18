@class ATXTrainDenyListWithDenyListModels, ATXDNDModeConfigurationClient, ATXNotificationManagementMAConstants;
@protocol ATXNotificationSettingsReaderProtocol, ATXModeEntityScorerProtocol;

@interface ATXInterruptionManager : NSObject {
    id<ATXModeEntityScorerProtocol> _modesModels;
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
    ATXNotificationManagementMAConstants *_notificationManagementConstants;
    ATXTrainDenyListWithDenyListModels *_trainedDenyListWithDenyListModels;
}

- (id)init;
- (void)recommendedAllowedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (id)recommendedAllowedAppsForDNDMode:(id)a0;
- (void)recommendedAndCandidateAllowedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (id)recommendedAllowedAppsForMode:(unsigned long long)a0;
- (void)recommendedAndCandidateAllowedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)recommendedAllowedContactsForContactScores:(id)a0;
- (id)recommendedAllowedAppsForDNDModeSemanticType:(long long)a0;
- (void)recommendedAndCandidateAllowedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)recommendedDeniedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedContactsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedContactsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedDeniedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateAllowedAppsForDNDMode:(id)a0 reply:(id /* block */)a1;
- (void)recommendedAndCandidateDeniedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (id)initWithModesModels:(id)a0 notificationSettingsReader:(id)a1 modeConfigurationClient:(id)a2;
- (void)recommendedAndCandidateAllowedAppsForDNDModeSemanticType:(long long)a0 reply:(id /* block */)a1;
- (void)recommendedAllowedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)trainedContactDenyListWithDenyListModel;
- (id)recommendedDeniedAppsForMode:(unsigned long long)a0;
- (id)recommendedDeniedContactsForMode:(unsigned long long)a0;
- (BOOL)appSatisfiesRelevanceCriteriaForAllowOrSilenceList:(id)a0;
- (BOOL)contactSatisfiesRelevanceCriteriaForSilenceList:(id)a0;
- (void)recommendedAllowedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;

@end
