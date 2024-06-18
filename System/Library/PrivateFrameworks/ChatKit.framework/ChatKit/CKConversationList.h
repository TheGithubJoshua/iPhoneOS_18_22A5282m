@class NSArray, NSMutableDictionary, CKConversationListScrollingController, CKConversation, NSMutableArray;

@interface CKConversationList : NSObject

@property (retain, nonatomic) NSArray *pinnedConversations;
@property (nonatomic, getter=isHoldingWasKnownSenderUpdates) BOOL holdingWasKnownSenderUpdates;
@property (nonatomic) BOOL loadedPinnedConversations;
@property (nonatomic) BOOL remergingConversations;
@property (retain, nonatomic) NSMutableArray *trackedConversations;
@property (retain, nonatomic) NSMutableDictionary *conversationsDictionary;
@property (readonly, nonatomic) BOOL loadingConversations;
@property (readonly, nonatomic) BOOL loadedConversations;
@property (retain, nonatomic) CKConversation *pendingConversation;
@property (readonly, nonatomic) CKConversationListScrollingController *scrollingController;
@property (readonly, copy, nonatomic) NSArray *conversations;
@property (readonly, nonatomic) BOOL hasActiveConversations;
@property (nonatomic) long long simFilterIndex;

+ (void)initialize;
+ (void)_handleRegistryDidLoadNotification:(id)a0;
+ (id)conversationListAlertSuppressionContextForFilterMode:(unsigned long long)a0;
+ (id)sharedConversationList;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)setNeedsReload;
- (void)resetCaches;
- (BOOL)_messageUnknownFilteringEnabled;
- (id)_copyEntitiesForAddressStrings:(id)a0;
- (void)_handleEngroupFinishedUpdating:(id)a0;
- (BOOL)_isUnreadChat:(id)a0 ignoringMessages:(id)a1;
- (id)identifiersSetForConversations:(id)a0;
- (void)_abChanged:(id)a0;
- (void)_abPartialChanged:(id)a0;
- (id)_alreadyTrackedConversationForChat:(id)a0;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)_beginTrackingConversationWithChat:(id)a0 completion:(id /* block */)a1;
- (id)_beginTrackingConversationWithChatIndirect:(id)a0;
- (BOOL)_chatHasRelevantUnreadLastMessage:(id)a0;
- (void)_chatItemsDidChange:(id)a0;
- (void)_chatPropertiesChanged:(id)a0;
- (void)_configureForOscarEnabledUnsortedConversationList;
- (void)_configureForUnsortedConversationList;
- (id)_conversationForChat:(id)a0;
- (id /* block */)_conversationSortComparator;
- (id)_emptyConversationsDictionaryWithConversationsCount:(unsigned long long)a0;
- (id)_filterConversations:(id)a0 byHandleID:(id)a1;
- (id)_filterConversationsByFocus:(id)a0;
- (id)_filterConversationsWithoutiMessageJunk:(id)a0;
- (unsigned long long)_filterModeForConversationAsNonSMSCategorized:(id)a0;
- (void)_handleChatJoinStateDidChange:(id)a0;
- (void)_handleChatParticipantsDidChange:(id)a0;
- (void)_handleChatsDidRemergeNotification:(id)a0;
- (void)_handleChatsWillRemergeNotification:(id)a0;
- (void)_handleGroupNameChanged:(id)a0;
- (void)_handleGroupPhotoChanged:(id)a0;
- (id)_handleIDForSIMFilterIndex:(long long)a0;
- (void)_handleMemoryWarning:(id)a0;
- (void)_handlePreferredServiceChangedNotification:(id)a0;
- (void)_handleRegistryDidRegisterChatNotification:(id)a0;
- (void)_handleRegistryWillUnregisterChatNotification:(id)a0;
- (void)_insertConversationIntoSortedConversationList:(id)a0;
- (void)_invalidateABCaches:(id)a0;
- (void)_invalidatePartialABCaches:(id)a0;
- (BOOL)_isParentWithSubfoldersForFilterMode:(unsigned long long)a0;
- (BOOL)_messageSIMFilteringEnabled;
- (BOOL)_messageSpamFilteringEnabled;
- (id)_nonPlaceholderConversations;
- (void)_postConversationListChangedNotification;
- (void)_postConversationListUpdateVisibleConversationsNotificationForUID:(id)a0;
- (id /* block */)_recoverableSortComparator;
- (void)_removeConversationsFromRecentlyDeleted:(id)a0;
- (void)_setConversations:(id)a0 forFilterMode:(unsigned long long)a1;
- (BOOL)_shouldBailBeginTrackingForCurrentProcess;
- (BOOL)_shouldFilterForParticipants:(id)a0;
- (BOOL)_shouldShowInboxUI;
- (BOOL)_shouldTreatConversationAsNonSMSCategorized:(id)a0;
- (id)_testingTrackedConversations;
- (void)_trackSendEventForMySenderID:(id)a0 andParticipants:(id)a1;
- (void)_updatePinnedConversationsControllerForRemovedConversations:(id)a0;
- (void)beginTrackingConversation:(id)a0 forChat:(id)a1;
- (void)beginWasKnownSenderHold;
- (void)clearHoldInUnreadFilter;
- (BOOL)conversation:(id)a0 includedInFilterMode:(unsigned long long)a1;
- (id)conversationForExistingChat:(id)a0;
- (id)conversationForExistingChatWithChatIdentifier:(id)a0;
- (id)conversationForExistingChatWithDeviceIndependentID:(id)a0;
- (id)conversationForExistingChatWithGUID:(id)a0;
- (id)conversationForExistingChatWithGroupID:(id)a0;
- (id)conversationForExistingChatWithPersonCentricID:(id)a0;
- (id)conversationForExistingChatWithPinningIdentifier:(id)a0;
- (id)conversationForHandles:(id)a0 displayName:(id)a1 joinedChatsOnly:(BOOL)a2 create:(BOOL)a3;
- (id)conversationForHandles:(id)a0 displayName:(id)a1 lastAddressedHandle:(id)a2 lastAddressedSIMID:(id)a3 joinedChatsOnly:(BOOL)a4 create:(BOOL)a5;
- (id)conversationsForFilterMode:(unsigned long long)a0;
- (void)deleteConversation:(id)a0;
- (void)deleteConversations:(id)a0;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)a0;
- (void)logConversationsTopCount:(long long)a0 bottomCount:(long long)a1;
- (id)pendingConversationCreatingIfNecessary;
- (void)permanentlyDeleteRecoverableMessagesInConversations:(id)a0 synchronousQuery:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)pinningIdentifierMap;
- (void)postFinishedInitalPinLoadIfNecessary;
- (unsigned long long)primaryFilterModeForConversation:(id)a0;
- (void)recoverDeletedMessagesInConversations:(id)a0 synchronousQuery:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)recoverJunkMessagesInConversations:(id)a0;
- (void)recoverableDeleteForConversations:(id)a0 deleteDate:(id)a1 synchronousQuery:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)releaseWasKnownSenderHold;
- (id)relevantUnreadLastMessages;
- (void)removeConversation:(id)a0;
- (void)resort;
- (void)stopTrackingConversation:(id)a0;
- (id)subclassifiedConversationsForFilterMode:(unsigned long long)a0;
- (id)topMostConversation;
- (void)unpendConversation;
- (long long)unreadCountForFilterMode:(unsigned long long)a0;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)a0;
- (void)updateConversationFilteredFlagsAndReportSpam;
- (void)updateConversationListsAndSortIfEnabled;
- (void)updateConversationsForNewPinnedConversations:(id)a0;
- (void)updateConversationsWasKnownSender;
- (void)updateEarliestMessageDateForConversations:(id)a0;
- (void)updateFilteredByFocusStateForConversations:(id)a0;
- (void)updatePinnedConversationsFromDataSource;
- (void)updateRecoverableConversationList;

@end