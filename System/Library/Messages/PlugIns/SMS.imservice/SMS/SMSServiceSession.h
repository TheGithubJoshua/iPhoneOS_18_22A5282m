@class NSString, NSArray, IDSService, NSSet, NSMutableDictionary, SMSRelayPushHandler, CoreTelephonyClient, NSMutableSet, IMDPlainTextTapbackInterpreter, IMMultiQueue;

@interface SMSServiceSession : IMDServiceSession <CoreTelephonyClientSMSDelegate, IDSServiceDelegate, IDSAccountRegistrationDelegate, SMSRelayPushHandlerListener> {
    NSMutableDictionary *_outgoingRelayMessageTimerMap;
    NSMutableDictionary *_outgoingMessageMap;
    NSMutableDictionary *_outgoingMessageBlockMap;
    NSMutableDictionary *_outgoingMessageFailureMap;
    IMMultiQueue *_incomingMessageMultiQueue;
    NSMutableDictionary *_spamBlockMap;
    NSMutableDictionary *_spamRelayBlockMap;
    BOOL _isRegistered;
    BOOL _hasClearedMesageQueue;
    IDSService *_relayService;
    IDSService *_smsRelayService;
    IDSService *_smsWatchService;
    NSArray *_currentRelayDevices;
    NSSet *_currentRelayAccounts;
    SMSRelayPushHandler *_smsRelayPushHandler;
    NSMutableSet *_originatedMessages;
    BOOL _pendingOriginatedMessagesTimer;
    NSMutableSet *_pendingRelayApprovalRequests;
    NSMutableDictionary *_pendingCodesToDevicesForApproval;
    BOOL _hasSpamExtensionUpdated;
    CoreTelephonyClient *coreTelephonyClient;
}

@property (readonly, nonatomic) BOOL watchConnectedOverBT;
@property (readonly, nonatomic) IMDPlainTextTapbackInterpreter *tapbackInterpreter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0 service:(id)a1;
- (void)logoutServiceSessionWithAccount:(id)a0;
- (unsigned long long)capabilities;
- (void)loginServiceSessionWithAccount:(id)a0;
- (void)sendMessage:(id)a0 toChat:(id)a1 style:(unsigned char)a2;
- (BOOL)_hasPeerDevices;
- (id)_messageGUIDForMessageID:(int)a0;
- (void)sessionDidBecomeActive;
- (void)sendUpdatedCollaborationMetadata:(id)a0 toChatsWithIdentifiers:(id)a1 forMessageGUID:(id)a2;
- (void)_updateShouldForceToSMSForChatWithIdentifier:(id)a0 style:(unsigned char)a1 shouldForceToSMS:(BOOL)a2;
- (void)sessionWillBecomeInactiveWithAccount:(id)a0;
- (id)retrieveAccountAndPhoneAliasForAccounts:(id)a0 shouldFilterRecepients:(BOOL)a1 requestProxySend:(BOOL)a2;
- (void)handler:(id)a0 outgoingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 isInProxyMode:(BOOL)a8 storageContext:(id)a9;
- (void)_registerForIncomingMessages:(id)a0;
- (BOOL)_hasPhoneNumberAliasActive;
- (id)_createNewChatIdentifierFromChatIdentifier:(id)a0 andCategoryLabel:(id)a1;
- (void)updateMMSCapability;
- (void)buildTelephonyPhoneNumbersForTelephonyMessages:(id)a0 shouldBroadcastMessage:(BOOL)a1 handles:(id)a2;
- (void)_sendPinCodeToDeviceAndPromptForResponse:(id)a0;
- (id)_allowedDevicesforSMSRelay;
- (void)_removeDeviceFromAllowedSMSRelay:(id)a0;
- (void)joinChat:(id)a0 handleInfo:(id)a1 style:(unsigned char)a2 groupID:(id)a3 lastAddressedHandle:(id)a4 lastAddressedSIMID:(id)a5 joinProperties:(id)a6;
- (void)unEnrollDeviceInSMSRelay:(id)a0;
- (void)sendApprovalResponseToDevice:(id)a0 enteredCorrectly:(BOOL)a1 wasCancelled:(BOOL)a2;
- (void)_updateRelayStatus;
- (BOOL)_isUsingSMSWatchService;
- (id)storageController;
- (unsigned char)_readMMSUserOverrideForSingleSubscription;
- (void)handler:(id)a0 messageIDSendFailure:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 timeStamp:(id)a4 storageContext:(id)a5;
- (BOOL)sendEnrollmentRelatedMessageOverIDS:(id)a0 deviceToSendTo:(id)a1;
- (void)_updateLastAddressedIDsIfNeededForChatWithIdentifier:(id)a0 style:(unsigned char)a1 lastAddressedHandle:(id)a2 lastAddressedSIMID:(id)a3;
- (BOOL)isProxyRegistered;
- (void)_doClearChats:(id)a0;
- (BOOL)sendToLocalPeers:(id)a0;
- (void)smsMessageReceived:(id)a0 msgID:(long long)a1;
- (id)_findExistingChatsFrom:(id)a0 singleGUID:(BOOL)a1;
- (id /* block */)_failureBlockForMessageGUID:(id)a0;
- (void)_processMessageSendFailure:(unsigned int)a0;
- (void)_checkAndUpdateSMSSpamFilterExtensionForUnregisteredOrUpdatedPlugins:(id)a0 arePluginsRegistered:(BOOL)a1;
- (void)_addDeviceToChallengedSMSRelay:(id)a0;
- (void)setSubjectForTelephonyMessages:(id)a0 messageItem:(id)a1;
- (void)invitePersonInfo:(id)a0 withMessage:(id)a1 toChat:(id)a2 style:(unsigned char)a3;
- (void)_receivedSMSDictionary:(id)a0 requiresUpload:(BOOL)a1 isBeingReplayed:(BOOL)a2;
- (void)_processMessageSent:(unsigned int)a0;
- (void)_processReceivedDictionary:(id)a0 storageContext:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)handler:(id)a0 outgoingDownloadMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 storageContext:(id)a8;
- (void)_approveSelfForSMSRelay;
- (void)handler:(id)a0 incomingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 timeStamp:(id)a4 storageContext:(id)a5;
- (void)handler:(id)a0 localOutgoingMessage:(id)a1 isBeingReplayed:(BOOL)a2 storageContext:(id)a3;
- (BOOL)_areAllParticipantsUnknown:(id)a0 fromSender:(id)a1;
- (void)_clearSpamMapForMessageGUID:(id)a0;
- (void)_unregisterForCTNotifications;
- (BOOL)accountHasAlias:(id)a0 aliastoCheck:(id)a1;
- (void)handler:(id)a0 localMessageError:(id)a1 storageContext:(id)a2;
- (BOOL)isValidMMS:(id)a0;
- (id)lastAddressedSIMIDForJunkReportMessageItem:(id)a0;
- (void)_checkAndSetRelayService;
- (id)idsDeviceFromUniqueID:(id)a0;
- (BOOL)sendFileToLocalPeers:(id)a0 metadata:(id)a1;
- (void)_blastDoorProcessingWithIMMessageItem:(id)a0 chat:(id)a1 account:(id)a2 fromToken:(id)a3 fromIDSID:(id)a4 fromIdentifier:(id)a5 toIdentifier:(id)a6 participants:(id)a7 groupName:(id)a8 groupID:(id)a9 isEncrypted:(BOOL)a10 isFromMe:(BOOL)a11 isLastFromStorage:(BOOL)a12 isFromStorage:(BOOL)a13 hideLockScreenNotification:(BOOL)a14 wantsCheckpointing:(BOOL)a15 needsDeliveryReceipt:(id)a16 messageBalloonPayloadAttachmentDictionary:(id)a17 inlineAttachments:(id)a18 attributionInfoArray:(id)a19 nicknameDictionary:(id)a20 availabilityVerificationRecipientChannelIDPrefix:(id)a21 availabilityVerificationRecipientEncryptionValidationToken:(id)a22 messageContext:(id)a23 completionBlock:(id /* block */)a24;
- (void)handler:(id)a0 incomingEnrollMeRequest:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (void)sendSyndicationAction:(id)a0 toChatsWithIdentifiers:(id)a1;
- (void)_sendMessageToAllSMSRelayDevicesWithOptions:(id)a0;
- (BOOL)_localDeviceSupportsSMS;
- (void)_handleCapabilitiesChanged:(id)a0;
- (id)retrievePhoneAccountAndPhoneAliasFromIDSAccounts:(id)a0;
- (BOOL)isLocalDeviceProxyRegistered;
- (void)sendReadReceiptForMessage:(id)a0 toChatID:(id)a1 identifier:(id)a2 style:(unsigned char)a3;
- (void)handler:(id)a0 incomingResponseForApproval:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (BOOL)_hasRelayDevice;
- (id)_callerIDForRelay;
- (void)_addHSA2PairedDevicesToAllowedSMSRelayList;
- (unsigned long long)randomSixDigitCode;
- (void)replayMessage:(id)a0;
- (id)telephonyMessagesForHandles:(id)a0 shouldBroadcastMessage:(BOOL)a1;
- (void)_forwardMessageToPeers:(id)a0 messageType:(long long)a1 guid:(id)a2 originalSender:(id)a3 hasAttachment:(BOOL)a4 watchOnly:(BOOL)a5;
- (void)_processReceivedSMSMessage:(id)a0 storageContext:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)enrollDeviceInSMSRelay:(id)a0;
- (void)_sendMessageToPairedDeviceWithOptions:(id)a0;
- (void)_setTimeoutTimerForRelayMessageID:(id)a0 timeout:(double)a1;
- (void)account:(id)a0 aliasesChanged:(id)a1;
- (BOOL)sendDataToPeers:(id)a0 forcedCallerID:(id)a1 shouldFilterRecepients:(BOOL)a2 requestProxySend:(BOOL)a3 dontSendTo:(id)a4;
- (id)_challengedDevicesforSMSRelay;
- (void)_clearPendingIncomingMessageQueue;
- (BOOL)_syncedMMSEnabledValue;
- (BOOL)_isSpamFilteringEnabled;
- (void)setMessageTypeForTelephonyMessage:(id)a0 shouldSendMMS:(BOOL)a1;
- (BOOL)_isDefaultPairedDeviceRelayingLocally:(id)a0;
- (BOOL)_localDeviceSupportsSMSAndHasAPhoneNumber;
- (void)handler:(id)a0 messageIDSent:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 timeStamp:(id)a4 storageContext:(id)a5;
- (id)accountForAlias:(id)a0 fromAccounts:(id)a1;
- (void)joinChat:(id)a0 handleInfo:(id)a1 style:(unsigned char)a2 groupID:(id)a3 joinProperties:(id)a4;
- (id)_myCTPhoneNumber;
- (void)mmsMessageReceived:(id)a0 msgID:(long long)a1;
- (void)_shouldAutoEnableDevicesforSMSRelay:(id /* block */)a0;
- (BOOL)_enableBackwardsCompatibility;
- (long long)_numberOfRepliesFor:(id)a0 fallbackFilterCategory:(long long *)a1 fallbackFilterSubCategory:(long long *)a2;
- (void)enqueReplayMessageCallback:(id /* block */)a0;
- (BOOL)_deviceAllowedToDisableRelay:(id)a0;
- (BOOL)_localDeviceSupportsSMSAndDoesNotHaveAPhoneNumberForSIMID:(id)a0;
- (void)_executeSpamCompletionBlockForMessageGuid:(id)a0 category:(long long)a1 subCategory:(long long)a2 shouldRegister:(BOOL)a3;
- (id)idsDeviceFromPushToken:(id)a0;
- (void)_processSMSorMMSMessageReceivedWithContext:(id)a0 messageID:(long long)a1;
- (id)_IDSService;
- (void)enrollSelfDeviceInSMSRelay;
- (id /* block */)_completionBlockForMessageGUID:(id)a0;
- (id)_dominentPhoneNumberAlias;
- (void)_processSMSOrSMSMessageSentWithContext:(id)a0 success:(BOOL)a1 messageID:(unsigned int)a2 err1:(long long)a3 err2:(long long)a4 isSMS:(BOOL)a5;
- (void)_setUpRelay;
- (id)_convertCTMessagePartToDictionary:(id)a0;
- (BOOL)_shouldUploadToMMCS:(id)a0;
- (BOOL)isSMSRelayEnabled;
- (void)handler:(id)a0 localIncomingDownloadMessage:(id)a1 storageContext:(id)a2;
- (void)leaveChat:(id)a0 style:(unsigned char)a1;
- (void)_updateSpamFilteringState:(long long)a0;
- (id)_deviceForCallerID:(id)a0;
- (void)_updateLastAddressedIDsIfNeededForChatWithIdentifier:(id)a0 style:(unsigned char)a1 lastAddressedHandle:(id)a2 lastAddressedSIMID:(id)a3 iMessageCapability:(long long)a4;
- (void)sendApprovalEnrollMe;
- (void)_forwardMessageToPeers:(id)a0 messageType:(long long)a1 guid:(id)a2 originalSender:(id)a3;
- (void)sendDeleteCommand:(id)a0 forChatGUID:(id)a1;
- (BOOL)isIDInList:(id)a0 ArrayToCheck:(id)a1;
- (id)_destinationForDevice:(id)a0 forcedIdentity:(id)a1;
- (BOOL)_isConnectedOverBT:(id)a0;
- (void)handler:(id)a0 deleteCommand:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 timeStamp:(id)a5 needsDeliveryReceipt:(id)a6 deliveryContext:(id)a7 storageContext:(id)a8;
- (void)_clearInactivityTimer;
- (void)_doDeleteChat:(id)a0;
- (void)scheduleTransactionLogTask:(id)a0;
- (BOOL)_localDeviceSupportsRelay;
- (void)_setClearMessageSendTimer;
- (void)_registerForCTNotifications;
- (id)_callerIDAccountFromSettings;
- (void)sendUnApproveToDevice:(id)a0 extraKeys:(id)a1;
- (void)handler:(id)a0 localMessageSent:(id)a1 storageContext:(id)a2;
- (void)_executeSpamRelayCompletionBlockForMessageGuid:(id)a0 category:(long long)a1 subCategory:(long long)a2;
- (void)refreshServiceCapabilities;
- (void)_updateCategoryForChat:(id)a0 andMessage:(id)a1 category:(long long)a2 subCategory:(long long)a3 shouldRegister:(BOOL)a4 spamExtensionName:(id)a5;
- (void)handler:(id)a0 outgoingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 storageContext:(id)a8;
- (void)_carrierReportJunkMetricsForSMSWithSubject:(id)a0 isGroupchat:(BOOL)a1 hasAttachments:(BOOL)a2;
- (id)_convertIMMessageItemToDictionary:(id)a0;
- (void)sendDeliveredQuietlyReceiptForMessage:(id)a0 forIncomingMessageFromIDSID:(id)a1 toChatGuid:(id)a2 identifier:(id)a3 style:(unsigned char)a4 withWillSendToDestinationsHandler:(id /* block */)a5;
- (void)_smsSpamCheck:(id /* block */)a0 withMessageBody:(id)a1 withGuid:(id)a2 sender:(id)a3 shouldRegister:(BOOL)a4 receiverISOCountryCode:(id)a5;
- (void)sendCTMessageFromIMMessageItem:(id)a0 forChat:(id)a1 chat:(id)a2 style:(unsigned char)a3;
- (void)_clearMapForMessageGUID:(id)a0;
- (id)_allowedIDSDevicesforSMSRelay;
- (void)handler:(id)a0 localFileRequest:(id)a1 storageContext:(id)a2;
- (void)_updateFilterParamsForFilterExtension;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (id)_extractSMSSenderAddress:(id)a0;
- (void)handler:(id)a0 incomingDownloadMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 timeStamp:(id)a4 storageContext:(id)a5;
- (void)_synchronizeMMSCapabilityToWatch:(BOOL)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)handler:(id)a0 recoverCommand:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 timeStamp:(id)a5 needsDeliveryReceipt:(id)a6 deliveryContext:(id)a7 storageContext:(id)a8;
- (void)sendTelephonyMessageFromJunkReportMessageItem:(id)a0;
- (void)_addDeviceToAllowedSMSRelay:(id)a0 shouldSendApproval:(BOOL)a1;
- (BOOL)_shouldCheckChatForSMSSpam:(id)a0 shouldRegister:(BOOL)a1 participants:(id)a2 sender:(id)a3 fallbackFilterCategory:(long long *)a4 fallbackFilterSubCategory:(long long *)a5;
- (void)_enqueueBlock:(id /* block */)a0 withTimeout:(double)a1;
- (id)_callerIDUsingFromIdentifier:(id)a0;
- (id)phoneAliasForDominentPhoneAlias:(id)a0 registeredPhoneNumber:(id)a1 preferedCallerID:(id)a2 CTPhoneNumber:(id)a3;
- (BOOL)_isOneOfMyActiveAlias:(id)a0;
- (void)_removeOriginatedMessage:(id)a0;
- (void)dealloc;
- (id)_ignoredDevicesforSMSRelay;
- (id)lastAddressedHandleForJunkReportMessageItem:(id)a0;
- (BOOL)_storeSpamCompletionBlock:(id /* block */)a0 forMessageGUID:(id)a1;
- (BOOL)_isMessageCategorized:(long long)a0;
- (void)_disableSpamFiltering;
- (BOOL)_storeSpamRelayCompletionBlock:(id /* block */)a0 forMessageGUID:(id)a1;
- (void)_updatePhoneNumberCallerID;
- (BOOL)sendApprovalDisplayPinToDevice:(id)a0;
- (void)sendSavedReceiptForMessage:(id)a0 toChatID:(id)a1 identifier:(id)a2 style:(unsigned char)a3;
- (void)_addOriginatedMessage:(id)a0;
- (BOOL)relayDictionaryToPeers:(id)a0 requiresUpload:(BOOL)a1;
- (void)handler:(id)a0 localOutgoingDownloadMessage:(id)a1 isBeingReplayed:(BOOL)a2 storageContext:(id)a3;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)createHandleInfoForParticipants:(id)a0 unformattedIDs:(id)a1 countryCodes:(id)a2 isGroupChat:(BOOL)a3;
- (void)_removeDeviceFromIgnoredSMSRelay:(id)a0;
- (void)postSMSMessageSent:(id)a0 success:(BOOL)a1 messageID:(long long)a2 err1:(long long)a3 err2:(long long)a4;
- (void)_handleDeleteCommandWithMessageDictionary:(id)a0;
- (void)handler:(id)a0 localMessageRead:(id)a1 storageContext:(id)a2;
- (void)handler:(id)a0 incomingDisplayPinCode:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (BOOL)shouldFixIncomingDate;
- (BOOL)_checkMMSEnablementForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)_areiMessageAndiCloudAccountTheSame:(id)a0;
- (void)_buildCTPhoneNumberWithParticipantInfo:(id)a0 ctMessage:(id)a1;
- (id)_getSpamExtensionID;
- (void)sendJunkReportMessage:(id)a0;
- (void)sendRecoverCommand:(id)a0 forChatGUID:(id)a1;
- (BOOL)_isAliasActiveForSMSRelay:(id)a0;
- (void)postMMSMessageSent:(id)a0 success:(BOOL)a1 messageID:(long long)a2 err1:(long long)a3 err2:(long long)a4;
- (void)sendNotifyRecipientCommandForMessage:(id)a0 toChatGuid:(id)a1 identifier:(id)a2 style:(unsigned char)a3;
- (void)handler:(id)a0 localFileResponse:(id)a1 storageContext:(id)a2;
- (void)handler:(id)a0 messageIDRead:(id)a1 timeStamp:(id)a2 toIdentifier:(id)a3 fromIdentifier:(id)a4 storageContext:(id)a5;
- (void)processMessageForSending:(id)a0 toChat:(id)a1 style:(unsigned char)a2 allowWatchdog:(BOOL)a3 completionBlock:(id /* block */)a4;
- (void)_addDeviceToIgnoredSMSRelay:(id)a0;
- (void)_addDefaultPairedDeviceToAllowedSMSRelayList;
- (void)_checkIfMessageIsSpam:(id)a0 fromSender:(id)a1 withGuid:(id)a2 shouldRegister:(BOOL)a3 receiverISOCountryCode:(id)a4;
- (void)_forwardMessageToPeers:(id)a0 messageType:(long long)a1 guid:(id)a2 originalSender:(id)a3 watchOnly:(BOOL)a4;
- (id)_convertIMMessageItemDictionaryToIMMessageItem:(id)a0;
- (void)_markFromStorageIfNeeded:(id)a0 messageGUID:(id)a1;
- (id)idsDeviceForFromID:(id)a0;
- (void)_enableSMSRelayForDevice:(id)a0;
- (id)localDevice;
- (id)_challengedIDSDevicesforSMSRelay;
- (void)_processReceivedDictionaryInBlastDoor:(id)a0 storageContext:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_removeDeviceFromChallengedSMSRelay:(id)a0;
- (void)_clearSpamRelayMapForMessageGUID:(id)a0;
- (BOOL)_isDeviceATrustedHSA2Device:(id)a0;
- (void)sendPlayedReceiptForMessage:(id)a0 toChatID:(id)a1 identifier:(id)a2 style:(unsigned char)a3;
- (void)addMessagePlainTextToTelephonyMessages:(id)a0 messageItem:(id)a1 processedMessageItem:(id)a2;
- (void)processPartsOfTelephonyMessages:(id)a0 parts:(id)a1;
- (void)_registerForAccountChanges;
- (void)handler:(id)a0 localIncommingMessage:(id)a1 storageContext:(id)a2;
- (void)_messageTimedOut:(id)a0;
- (void)_clearTimoutTimerForRelayMessageID:(id)a0;
- (id)_getSpamExtensionName;
- (void)joinChat:(id)a0 handleInfo:(id)a1 style:(unsigned char)a2 joinProperties:(id)a3;
- (id)_ignoredIDSDevicesforSMSRelay;
- (id)_fixIncomingDate:(id)a0;
- (id)_convertCTMessageToDictionary:(id)a0 requiresUpload:(BOOL *)a1;
- (void)sendDeliveryReceiptForMessageID:(id)a0 toID:(id)a1 deliveryContext:(id)a2 needsDeliveryReceipt:(id)a3 callerID:(id)a4 account:(id)a5;
- (id)_getStorageDictionaryUsingMsgDict:(id)a0 requiresUpload:(BOOL)a1;
- (unsigned int)_generateMessageIDForMessageGUID:(id)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

@end