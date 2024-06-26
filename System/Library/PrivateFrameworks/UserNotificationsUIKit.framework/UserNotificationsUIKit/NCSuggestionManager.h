@class NSMutableDictionary, NSString, NSMutableSet, NCNotificationRequest;
@protocol NCSuggestionManagerDelegate;

@interface NCSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate>

@property (retain, nonatomic) NSMutableDictionary *suggestionContentProviders;
@property (retain, nonatomic) NCNotificationRequest *requestWithProvisionalNotificationManagementSuggestion;
@property (retain, nonatomic) NSMutableSet *requestsWithTimeSensitiveManagementSuggestion;
@property (retain, nonatomic) NSMutableSet *requestsWithDirectMessagesManagementSuggestion;
@property (retain, nonatomic) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions;
@property (retain, nonatomic) NSMutableDictionary *remoteSuggestions;
@property (retain, nonatomic) NSMutableSet *requestsWithRemoteSuggestions;
@property (retain, nonatomic) NSMutableSet *requestsWithContactSuggestions;
@property (weak, nonatomic) id<NCSuggestionManagerDelegate> delegate;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationManagementContentProvider:(id)a0 setAllowsDirectMessages:(BOOL)a1 forSectionIdentifier:(id)a2;
- (id)init;
- (void)notificationManagementContentProvider:(id)a0 setScheduledDelivery:(BOOL)a1 forSectionIdentifier:(id)a2;
- (void)logResponseForNotificationRequest:(id)a0 scheduledDelivery:(BOOL)a1;
- (BOOL)_addSuggestionForNotificationRequest:(id)a0 managementContentProvider:(id)a1;
- (BOOL)_createDirectMessagesSuggestionIfNeededForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)logResponseForNotificationRequest:(id)a0 allowsNotifications:(BOOL)a1;
- (void)logResponseForNotificationRequest:(id)a0 deliveryQuietly:(BOOL)a1;
- (id)_contentProviderForRequest:(id)a0 withSendMessagesToDigestSuggestion:(id)a1;
- (void)checkSuggestionNeededForNotificationRequest:(id)a0;
- (id)_contentProviderForRequest:(id)a0 withTurnOffNotificationsForAppSuggestion:(id)a1;
- (id)_sectionSettingsForSectionIdentifier:(id)a0;
- (id)_contentProviderForRequest:(id)a0 withMutingSuggestion:(id)a1;
- (void)logResponseForNotificationRequest:(id)a0 muted:(BOOL)a1;
- (BOOL)_createContactMatchingSuggestionIfNeededForRequest:(id)a0 sectionSettings:(id)a1;
- (void)_createNewCuratedContactMatchSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1 contactName:(id)a2;
- (void)notificationManagementContentProvider:(id)a0 setMuted:(BOOL)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)reloadContactSuggestions;
- (void)reloadRemoteSuggestions;
- (void)_removeSuggestionIfNecessaryForNotificationRequest:(id)a0;
- (id)_contentProviderForRequest:(id)a0 withUrgencyTuningSuggestion:(id)a1;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)_reloadSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (id)auxiliaryOptionsContentProviderForNotificationRequest:(id)a0 isLongLook:(BOOL)a1;
- (void)logResponseForNotificationRequest:(id)a0 allowsTimeSensitive:(BOOL)a1;
- (void)_createNewDirectMessagesInDigestSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (BOOL)_createProvisionalAuthorizationSuggestionIfNeededForRequest:(id)a0 sectionSettings:(id)a1;
- (void).cxx_destruct;
- (id)_contentProviderForRequest:(id)a0 withDigestSuggestion:(id)a1;
- (void)_createNewTimeSensitiveInDigestSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 setCuratedContactSuggestionConfirmed:(BOOL)a1 request:(id)a2;
- (void)notificationManagementContentProvider:(id)a0 requestsPresentingNotificationManagementViewType:(unsigned long long)a1 forNotificationRequest:(id)a2 withPresentingView:(id)a3;
- (void)_createNewTimeSensitiveSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (BOOL)_createRemoteSuggestionIfNeededForRequest:(id)a0 remoteSuggestion:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 hasUpdatedContentForRequest:(id)a1;
- (void)clearSuggestionForNotificationRequest:(id)a0;
- (id)_contentProviderForRequest:(id)a0 withRemoteSuggestion:(id)a1;
- (BOOL)_createTimeSensitiveSuggestionIfNeededForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 setModeConfiguration:(id)a1;
- (void)_updateContentForNotificationRequest:(id)a0;
- (id)_contentProviderForRequest:(id)a0 withModeConfigurationTuningSuggestion:(id)a1;
- (void)_createNewPromotingSuggestionForNotificationRequest:(id)a0 sectionSettings:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 keepNotificationsForSectionIdentifierForNotificationRequest:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 requestsRemoveSuggestionForRequest:(id)a1;
- (void)notificationManagementContentProvider:(id)a0 setAllowsTimeSensitive:(BOOL)a1 forSectionIdentifier:(id)a2;

@end
