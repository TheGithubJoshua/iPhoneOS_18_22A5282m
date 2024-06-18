@class UNUserNotificationCenter, UNNotificationCategory, CNContact, NSSet, IMBusinessNameManager;

@interface IMDNotificationsController : NSObject {
    long long _lastAlertedMessageDate;
    long long _lastAlertedFailedMessageDate;
    long long _lastProcessingMessageDate;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) UNNotificationCategory *incomingMessageNotificationCategory;
@property (retain, nonatomic) UNNotificationCategory *incomingFilesNotificationCategory;
@property (retain, nonatomic) IMBusinessNameManager *businessNameManager;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSSet *meTokens;
@property (retain, nonatomic) NSSet *activeAccountAliases;
@property long long lastAlertedMessageDate;
@property long long lastAlertedFailedMessageDate;
@property long long lastProcessingMessageDate;

+ (id)_addressBookNameForAddress:(id)a0 orContact:(id)a1;
+ (int)validateAlertCount:(int)a0;
+ (id)sharedInstance;
+ (int)reminderAlertCount;
+ (id)_displayNameForHandle:(id)a0 andContact:(id)a1 businessNameManager:(id)a2 suggestionProvider:(id /* block */)a3;
+ (id)_formattedDisplayStringForAddress:(id)a0 countryCode:(id)a1;
+ (id)_countryCodeForHandle:(id)a0;
+ (BOOL)_isFacetimeHighlighted:(id)a0;
+ (id)_displayNameForBusinessChatAddress:(id)a0 businessNameManager:(id)a1;
+ (id)_lpLinkMetadataForMessage:(id)a0 attachmentPaths:(id)a1 originalURL:(id)a2;
+ (id)_truncateNameIfNeeded:(id)a0;
+ (BOOL)isSpamFilteringOn;
+ (id)_IMDCoreSpotlightCNContactForAddress:(id)a0;
+ (BOOL)isUnknownSenderFilteringOn;
+ (id)_uncanonicalizedAddressForHandle:(id)a0;
+ (id)_pluginPayloadAttachmentPathsForMessage:(id)a0;
+ (id)_addressForHandle:(id)a0;

- (BOOL)_filteringSettingConfirmed;
- (id)madridGroupCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)_populateRealertCountForNotificationContent:(id)a0;
- (id)madridCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (BOOL)_chatHasCategoryMuted:(id)a0 isFromContact:(BOOL)a1;
- (BOOL)_shouldRepostNotification:(id)a0 withAlreadyPostedNotification:(id)a1;
- (id)init;
- (void)__postNotificationsIsMostActiveDevice:(BOOL)a0;
- (void)_shouldPostNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)postNotificationsWithContext:(id)a0;
- (BOOL)_deviceUnderFirstUnlock;
- (void)_populateBodyAndTitleForSendFailedNotificationContent:(id)a0 messageDictionary:(id)a1;
- (BOOL)_shouldPostNotificationForChat:(id)a0 messageDictionary:(id)a1;
- (BOOL)_amIMentionedInMessage:(id)a0;
- (BOOL)areMyTokens:(id)a0 inMessage:(id)a1;
- (unsigned long long)_getMessagesSpokenAllowlistLevel:(BOOL *)a0;
- (BOOL)_fileURLIsActuallyAnimated:(id)a0;
- (id)_previewFileURLForTransferURL:(id)a0 utiType:(id)a1 knownSender:(BOOL)a2;
- (BOOL)_chatHasDNDSetBasedOnDNDIdentifier:(id)a0;
- (void)_setupMeContactAndTokens;
- (BOOL)_messageShouldBeSpoken:(id)a0 chatDictionary:(id)a1 isMostActive:(BOOL)a2;
- (void)_populateSoundAndDisplayActivationForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isMostActive:(BOOL)a3;
- (id)_synthesizedMessagingNotificationContentWithContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isUrgentMessageTrigger:(BOOL)a3;
- (void)_setUpNotificationCenter;
- (id)_IMDContactStore;
- (void)_populateBasicNotificationIdentifyingContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2 isCarouselUITriggered:(BOOL)a3;
- (BOOL)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)a0;
- (id)_nicknameDisplayNameForID:(id)a0;
- (void)_populateUserInfoOnContentForWatch:(id)a0 messageDictionary:(id)a1 chatDictionary:(id)a2 isCarouselUITriggered:(BOOL)a3;
- (id)_lastTwoMessagesForChat:(id)a0;
- (id)_chatDictionaryForChatRecord:(id)a0;
- (BOOL)_overrideDNDForMessagesAddressingMe;
- (id)_coreSpotlightChatParticipantsFromChatDictionary:(id)a0 senderHandleID:(id)a1;
- (id)madridBusinessCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)_populateNotificationCategoryContent:(id)a0 messageDictionary:(id)a1 chatDictionary:(id)a2;
- (void)_setupBusinessNameManager;
- (void)_migrateLastedPostedPreferencesIfNeeded;
- (BOOL)_UTITypeMightBeAnimated:(id)a0;
- (unsigned long long)screenTimeNotificationOptionsForChatDictionary:(id)a0;
- (void)advanceLastAlertedMessageDate:(long long)a0;
- (id)defaultsSharedInstance;
- (void)_populateIgnoresDoNotDisturb:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (unsigned long long)_getSpokenMessageAllowlistLevelVersion;
- (id)_suggestedDisplayNameForAddress:(id)a0;
- (id)_lastMessageTimeForChat:(id)a0;
- (void)_populateSubtitleForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (void)_coalescePostNotifications;
- (void)_populateUserInfoForMessageContent:(id)a0 messageDictionary:(id)a1 messageIsAddressedToMe:(BOOL)a2;
- (void)postFirstUnlockMessage:(id)a0 forIdentifier:(id)a1;
- (void)advanceLastAlertedFailedMessageDate:(long long)a0;
- (id)_chatDictionaryForMessageRecord:(id)a0;
- (id)_groupHashForHandles:(id)a0 lastAddressedHandle:(id)a1;
- (void)postSharePlayNotificationForChatGUID:(id)a0 faceTimeConversationUUID:(id)a1 handleIdentifier:(id)a2 localizedApplicationName:(id)a3;
- (void)_populateAttachmentsForNotificationContent:(id)a0 messageDictionary:(id)a1 messageRecord:(id)a2 knownSender:(BOOL)a3;
- (BOOL)_handleIsSpokenMessageAllowlisted:(id)a0 chat:(id)a1 message:(id)a2;
- (void).cxx_destruct;
- (void)_setHasMigratedPreferenceTrue;
- (void)postUrgentNotificationForMessages:(id)a0 withContext:(id)a1;
- (BOOL)_chatHasDNDSetBasedOnChatGUID:(id)a0 chatIdentifier:(id)a1 groupID:(id)a2 handles:(id)a3 lastAddressedHandleString:(id)a4 originalGroupID:(id)a5 style:(long long)a6;
- (id)_groupPhotoInternalFilePathForGroupPhotoGuid:(id)a0;
- (void)_postNotifications;
- (void)_isMostActiveDeviceWithCompletionBlock:(id /* block */)a0;
- (BOOL)_messageIsFromKnownContact:(id)a0;
- (BOOL)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
- (BOOL)_isRaiseGestureEnabled;
- (id)_messageDictionaryForMessageRecord:(id)a0 copyThreadOriginator:(BOOL)a1;
- (void)repostNotificationsFromFirstUnlockWithContext:(id)a0;
- (unsigned long long)screenTimeNotificationOptionsForContext:(id)a0;
- (id)_legacyDatePreference;
- (BOOL)_areAllMessagePartsRetractedForMessageDictionary:(id)a0;
- (BOOL)_messageIsStewieEmergency:(id)a0;
- (BOOL)_hasMigratedPreferences;
- (void)_setMessagesSpokenAllowlistLevelInPreferences:(unsigned long long)a0;
- (BOOL)_notificationIsFromAFilteredSender:(id)a0 messageDictionary:(id)a1;
- (void)_setContactInMessageDictionary:(id)a0 messageDictionary:(id)a1;
- (long long)_legacyDateForMessageWithRowIDPreference:(long long)a0;
- (void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)a0 messageDictionary:(id)a1;
- (BOOL)_messageIsBusiness:(id)a0;
- (BOOL)_chatHasDNDSet:(id)a0;
- (id)allTokens;
- (id)_messageDictionaryForMessageRecord:(id)a0;
- (BOOL)_contentBodyHasLocationURL:(id)a0;
- (void)_registerUserNotificationsForMessageRecords:(id)a0 newerThanDate:(long long)a1 isUrgentMessageTrigger:(BOOL)a2 isCarouselUITriggered:(BOOL)a3 isMostActiveDevice:(BOOL)a4;
- (id)_makeNotificationCategories;
- (BOOL)_isUnknownSenders:(id)a0;
- (void)_populateNotificationContentForTranscriptSharing:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (void)_populateBodyForNotificationContent:(id)a0 messageDictionary:(id)a1;
- (BOOL)_haveMigrated;
- (BOOL)_messageIsFromFavorite:(id)a0;
- (id)_generateNotificationRequestForDeliveryError:(id)a0 isCarouselUITriggered:(BOOL)a1;
- (void)_populateTitleForNotificationContent:(id)a0 chatDictionary:(id)a1 messageDictionary:(id)a2;
- (id)noRelayCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)a0 isCarouselUITriggered:(BOOL)a1;
- (void)_setSpokenMessageAllowlistLevelVersion:(unsigned long long)a0;
- (void)_setLastPostedDateFromMigration:(id)a0;
- (void)_storeLastAlertedMessageDate:(long long)a0;
- (void)retractNotificationsForReadMessages:(id)a0;
- (void)_setupFirstLoad;
- (id)_messages:(id)a0 newerThanDate:(long long)a1;
- (id)_messagesSortedByDate:(id)a0;
- (id)_displayNameForHandle:(id)a0 andContact:(id)a1;
- (BOOL)_shouldOverrideChatSilencingBecauseImMentioned:(id)a0;
- (long long)_legacyRowIDPreference;
- (void)_storeLastAlertedFailedMessageDate:(long long)a0;
- (id)SMSCategoryWithIdentifier:(id)a0 actions:(id)a1;
- (id)_generateNotificationRequestForMessageRecord:(id)a0 isUrgentMessageTrigger:(BOOL)a1 isCarouselUITriggered:(BOOL)a2 isMostActive:(BOOL)a3 shouldAdvanceLastAlertedMessageDate:(BOOL *)a4;
- (id)_generateNotificationRequestForMessageRecord:(id)a0 messageDictionary:(id)a1 chatDictionary:(id)a2 isUrgentMessageTrigger:(BOOL)a3 isCarouselUITriggered:(BOOL)a4 isMostActive:(BOOL)a5 shouldAdvanceLastAlertedMessageDate:(BOOL *)a6;
- (void)_proceedMostActiveDevice:(BOOL)a0 isBlockCalled:(BOOL *)a1 completionHandler:(id /* block */)a2;
- (void)updatePostedNotificationsForMessages:(id)a0 withContext:(id)a1;

@end