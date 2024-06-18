@class NSMutableDictionary, NSMutableSet, ICNASubTracker;

@interface ICNAEventReporter : ICNAOptedInObject

@property (retain) ICNASubTracker *subTracker;
@property (retain) NSMutableSet *timedDataTrackingSet;
@property (retain, nonatomic) NSMutableDictionary *pendingInlineDrawingInformation;

+ (void)faultOutObject:(id)a0;
+ (id)analyticsTypeUTIAttachment:(id)a0;
+ (BOOL)attachmentHasDeepLinkSafariHighlight:(id)a0;
+ (id)filteredActivityType:(id)a0;
+ (id)inlineAttachmentReportForModernNote:(id)a0 faultOutInlineAttachmentsAfterDone:(BOOL)a1;
+ (id)maskString:(id)a0 withoutPrefix:(id)a1 withMask:(id)a2;
+ (void)resetNoteCreateApproachEnumInAppSuiteDefaults;
+ (void)setNoteCreateApproachEnumToAppSuiteDefaults:(long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)weeksSinceDate:(id)a0;
- (void)submitAttachmentBrowserTapEvent;
- (void)submitNoteViewEventForHTMLNote:(id)a0;
- (void)submitNoteEditEventForHTMLNote:(id)a0;
- (id)accountDataForHTMLAccount:(id)a0;
- (id)accountDataForModernAccount:(id)a0;
- (id)accountTypeForHTMLAccount:(id)a0;
- (id)accountTypeForModernAccount:(id)a0;
- (id)bioAuthDataForModernNote:(id)a0;
- (id)collaborationActionDataIsInviting:(BOOL)a0 inviteStep:(long long)a1;
- (id)collaborationStatusForModernObject:(id)a0;
- (id)collaborationTypeForModernObject:(id)a0;
- (void)flushAllTimedData:(id)a0;
- (id)folderContentDataForNoteCollection:(id)a0;
- (id)folderContentDataForNoteContainer:(id)a0;
- (id)folderContentDataForVirtualFolder:(id)a0 context:(id)a1;
- (id)folderDataForHTMLCollection:(id)a0;
- (id)folderDataForHTMLFolder:(id)a0;
- (id)folderDataForModernAccountProxy:(id)a0;
- (id)folderDataForModernFolder:(id)a0;
- (id)folderDataForVirtualFolder:(id)a0;
- (id)folderViewEventDataObjectsForNoteCollection:(id)a0 isInGridMode:(BOOL)a1;
- (id)folderViewEventDataObjectsForNoteContainer:(id)a0 isInGridMode:(BOOL)a1;
- (id)folderViewEventDataObjectsForVirtualFolder:(id)a0 isInGridMode:(BOOL)a1 context:(id)a2;
- (id)initWithSubTrackerName:(id)a0;
- (id)initWithSubTrackerName:(id)a0 windowScene:(id)a1;
- (id)layoutDataForIsInGridMode:(BOOL)a0 isTimelineView:(BOOL)a1;
- (id)noteAccessDataForHTMLNote;
- (id)noteAccessDataForModernNote:(id)a0;
- (id)noteContentDataForHTMLNote:(id)a0;
- (id)noteContentDataForModernNote:(id)a0;
- (id)noteCreateDataFromAppSuiteDefaults;
- (id)noteDataForHTMLNote:(id)a0;
- (id)noteDataForModernNote:(id)a0;
- (id)noteEditDataForContextType:(long long)a0;
- (id)noteEditorCallOutBarDataForButtonTypeValue:(long long)a0;
- (id)noteViewEventDataObjectsForHTMLNote:(id)a0;
- (id)noteViewEventDataObjectsForModernNote:(id)a0;
- (id)objectDataForCloudSyncingObject:(id)a0;
- (id)passwordDataForModernNote:(id)a0;
- (id)passwordModeDataForContextPath:(long long)a0 fromMode:(short)a1 toMode:(short)a2;
- (unsigned long long)pencilStrokeCountForDrawing:(id)a0;
- (void)popContextPathData;
- (void)popNoteCreateData;
- (void)popSearchData;
- (void)pushContextPathDataWithContextPathEnum:(long long)a0;
- (void)pushDocScanDataWithID:(id)a0 actionType:(long long)a1 stage:(long long)a2;
- (void)pushInlineDrawingDataForDrawing:(id)a0 drawingID:(id)a1 tool:(long long)a2;
- (void)pushNoteCreateDataWithCreateApproach:(long long)a0;
- (void)pushSearchDataWithSearchSessionID:(id)a0;
- (void)pushStartDocScanPageCountData:(unsigned long long)a0;
- (void)pushStartTableDataWithStartColumns:(unsigned long long)a0 startRows:(unsigned long long)a1;
- (void)reallySubmitSearchResultSelectEventWithSearchResult:(id)a0 searchSessionID:(id)a1 gmRank:(unsigned long long)a2 queryLength:(unsigned long long)a3 searchResultCountData:(id)a4 searchSuggestionData:(id)a5;
- (id)searchRankingExperimentItemDataWithStrategyTypeEnum:(long long)a0 rank:(unsigned long long)a1;
- (id)searchSuggestionDataWithSearchSuggestionType:(unsigned long long)a0;
- (id)selectedResultAccountTypeForSearchResult:(id)a0;
- (void)startActivityStreamSummaryEventForObject:(id)a0;
- (void)startAttributionSideBarViewEventForNote:(id)a0;
- (void)startFolderListViewEventDurationTracking;
- (void)startFolderViewEventDurationTrackingForNoteCollection:(id)a0 isInGridMode:(BOOL)a1;
- (void)startFolderViewEventDurationTrackingForNoteContainer:(id)a0 isInGridMode:(BOOL)a1;
- (void)startFolderViewEventDurationTrackingForVirtualFolder:(id)a0 isInGridMode:(BOOL)a1 context:(id)a2;
- (void)startNoteViewEventDurationTrackingForHTMLNote:(id)a0;
- (void)startNoteViewEventDurationTrackingForModernNote:(id)a0 reportCoreAnalytics:(BOOL)a1;
- (void)startTimedEventOfType:(Class)a0;
- (void)startTipImpressionEventDurationTrackingForFeature:(id)a0 andModernNote:(id)a1;
- (id)styleDataForStyleTypeValue:(long long)a0;
- (void)submitActivityStreamSummaryEventForObject:(id)a0 halfHeightViewDuration:(double)a1 fullHeightViewDuration:(double)a2 sideBarViewDuration:(double)a3 minimizedViewDuration:(double)a4;
- (void)submitAppReviewPromptRequestEvent;
- (void)submitAppSessionResignEvent;
- (void)submitAppSessionResumeEvent;
- (void)submitAttachmentAddEventForAttachment:(id)a0;
- (void)submitAttachmentBrowserActionEventForType:(long long)a0;
- (void)submitAttributionSideBarViewEventForNote:(id)a0 contextPath:(long long)a1 startState:(long long)a2 endState:(long long)a3;
- (void)submitBiometricsFailEventForModernNote:(id)a0;
- (void)submitChangePasswordEventForModernAccount:(id)a0 isReset:(BOOL)a1;
- (void)submitChangePasswordModeEventForAccount:(id)a0 contextPath:(long long)a1 fromMode:(short)a2 toMode:(short)a3;
- (void)submitChecklistUsageEventForModernNote:(id)a0 countOfCheckedItems:(long long)a1 countOfTotalItems:(long long)a2 checklistActionType:(long long)a3;
- (void)submitCollabActivityBrowseEventForObject:(id)a0 contextPath:(long long)a1 clickContext:(long long)a2 mode:(long long)a3 isCurrentUserMentioned:(BOOL)a4 hasRecentUpdates:(BOOL)a5;
- (void)submitCollabNotificationEventWithAction:(long long)a0;
- (void)submitCollabSummaryEventForObject:(id)a0 withUpdates:(BOOL)a1;
- (void)submitCollaborationActionEventForCloudSyncingObject:(id)a0 share:(id)a1 isInviting:(BOOL)a2 inviteStep:(long long)a3;
- (void)submitDocScanEventForNote:(id)a0 pageCount:(unsigned long long)a1;
- (void)submitEverNoteImportEventWithCount:(unsigned long long)a0 isSuccessful:(BOOL)a1 intoAccount:(id)a2;
- (void)submitFastSyncSessionEndForNote:(id)a0 sessionID:(id)a1 participantVersions:(id)a2 numUniqueAccounts:(id)a3 numUniqueDevices:(id)a4 errorCode:(id)a5 numIgnoredMessages:(id)a6;
- (void)submitFastSyncSessionStartForNote:(id)a0 sessionID:(id)a1 participantVersions:(id)a2 numUniqueAccounts:(id)a3 numUniqueDevices:(id)a4;
- (void)submitFolderCreateEventForModernFolder:(id)a0;
- (void)submitFolderCreateEventForModernFolder:(id)a0 creationApproach:(long long)a1 filterSelection:(id)a2;
- (void)submitFolderDeleteEventForModernFolder:(id)a0;
- (void)submitFolderListViewEvent;
- (void)submitFolderViewEventForNoteCollection:(id)a0 isInGridMode:(BOOL)a1;
- (void)submitFolderViewEventForNoteContainer:(id)a0 isInGridMode:(BOOL)a1;
- (void)submitFolderViewEventForVirtualFolder:(id)a0 isInGridMode:(BOOL)a1 context:(id)a2;
- (void)submitFullscreenDrawingToInlineDrawingEventForNote:(id)a0 drawing:(id)a1 drawingID:(id)a2 method:(long long)a3;
- (void)submitHashtagAddEventForNote:(id)a0 tokenContentIdentifier:(id)a1 viaAutoComplete:(BOOL)a2;
- (void)submitHashtagDeleteEvent:(id)a0 approachEnum:(long long)a1;
- (void)submitHashtagRenameEvent:(id)a0 approachEnum:(long long)a1;
- (void)submitInlineDrawingDataForDrawingDeletion:(id)a0 drawingID:(id)a1 forNote:(id)a2;
- (void)submitMentionAddEventForNote:(id)a0 mentionID:(id)a1 participantID:(id)a2 viaAutoComplete:(BOOL)a3;
- (void)submitMentionDeleteEvent:(id)a0;
- (void)submitMoveCheckedItemsToBottomSwitchEventWithNewState:(BOOL)a0 isInApp:(BOOL)a1;
- (void)submitNoteActionMenuEventForNoteBrowserWithUsageType:(long long)a0 layout:(long long)a1 activityType:(id)a2 isTimelineView:(BOOL)a3;
- (void)submitNoteActionMenuEventForNoteEditorWithUsageType:(long long)a0 activityType:(id)a1;
- (void)submitNoteCreateEventForHTMLNote:(id)a0;
- (void)submitNoteCreateEventForHTMLNote:(id)a0 createApproach:(long long)a1;
- (void)submitNoteCreateEventForModernNote:(id)a0;
- (void)submitNoteCreateEventForModernNote:(id)a0 createApproach:(long long)a1;
- (void)submitNoteCreateEventForSearchIndexableNote:(id)a0 createApproach:(long long)a1;
- (void)submitNoteDeleteEventForHTMLNote:(id)a0;
- (void)submitNoteDeleteEventForModernNote:(id)a0;
- (void)submitNoteEditEventForModernNote:(id)a0 fromQuickNote:(BOOL)a1;
- (void)submitNoteEditorCallOutBarButtonSelectionEventForHTMLNote:(id)a0 buttonTypeValue:(long long)a1;
- (void)submitNoteEditorCallOutBarButtonSelectionEventForModernNote:(id)a0 buttonTypeValue:(long long)a1;
- (void)submitNotePinEventForModernNote:(id)a0 contextPath:(long long)a1;
- (void)submitNoteSharrowEventForHTMLNote:(id)a0 activityType:(id)a1 contextPath:(long long)a2;
- (void)submitNoteSharrowEventForModernNote:(id)a0 activityType:(id)a1 contextPath:(long long)a2 countOfCollaboratorsAdded:(long long)a3 countOfCollaboratorsRemoved:(long long)a4 startInvitedCount:(long long)a5 startAcceptedCount:(long long)a6 endInvitedCount:(long long)a7 endAcceptedCount:(long long)a8;
- (void)submitNoteViewEventForModernNote:(id)a0;
- (void)submitNotesToPagesEventWithContextPath:(long long)a0;
- (void)submitPaletteEngagementEventForNote:(id)a0 startPosition:(long long)a1 endPosition:(long long)a2;
- (void)submitPasswordFailEventForModernNote:(id)a0;
- (void)submitPasswordProtectEventForModernNote:(id)a0;
- (void)submitPasswordSuccessEventForModernNote:(id)a0;
- (void)submitPendingInlineDrawingDataForNote:(id)a0;
- (void)submitSearchAttemptEvent;
- (void)submitSearchInitiateEventWithSearchSessionID:(id)a0 searchSuggestionType:(unsigned long long)a1;
- (void)submitSearchResultExposureSummaryEventWithSearchResultExposureData:(id)a0 searchSessionID:(id)a1;
- (void)submitSearchResultSelectEventWithSearchResult:(id)a0 searchSessionID:(id)a1 gmRank:(unsigned long long)a2;
- (void)submitSearchResultSelectEventWithSearchResult:(id)a0 searchSessionID:(id)a1 queryLength:(unsigned long long)a2 topHitResultCount:(unsigned long long)a3 noteResultCount:(unsigned long long)a4 attachmentResultCount:(unsigned long long)a5 gmRank:(unsigned long long)a6;
- (void)submitSnapshotCompletionEventIsSuccessful:(BOOL)a0;
- (void)submitSnapshotRegisterEventIsSuccessful:(BOOL)a0;
- (void)submitSnapshotTriggeredEvent;
- (void)submitStyleFormatEventForHTMLNote:(id)a0 styleTypeValue:(long long)a1;
- (void)submitStyleFormatEventForModernNote:(id)a0 styleTypeValue:(long long)a1;
- (void)submitTableCreateEventForAttachment:(id)a0 inNote:(id)a1;
- (void)submitTableEditEventForNote:(id)a0 endColumns:(unsigned long long)a1 endRows:(unsigned long long)a2;
- (void)submitTableRemoveEventForAttachment:(id)a0 inNote:(id)a1;
- (void)submitTagBrowserSelectionEventWithSelectedTagCount:(unsigned long long)a0 isAllTagsSelected:(BOOL)a1;
- (void)submitTimedEventOfTypeIfPossible:(Class)a0;
- (void)submitTipImpressionEventForFeature:(id)a0 andModernNote:(id)a1;
- (void)submitTipLearnMoreClickEventForFeature:(id)a0 learnMoreTipName:(id)a1;
- (id)tipDataForFeature:(id)a0;
- (id)tipImpressionEventDataObjectsForFeature:(id)a0 andModernNote:(id)a1;
- (id)tipLearnMoreClickEventDataObjectsForFeature:(id)a0 learnMoreTipName:(id)a1;

@end