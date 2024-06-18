@class REMObjectID, NSString, EKAvailabilityCache, NSError, NSSet, EKSourceConstraints, NSURL, NSDictionary, EKSyncError, NSDate, NSNumber;

@interface EKSource : EKObject {
    EKAvailabilityCache *_availabilityCache;
}

@property (readonly, nonatomic) BOOL hasOwnerEmailAddress;
@property (copy, nonatomic) NSString *delegatedAccountOwnerStoreID;
@property (copy, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSSet *allCalendars;
@property (readonly, nonatomic) EKAvailabilityCache *availabilityCache;
@property (readonly, nonatomic) int displayOrderForNewCalendar;
@property (readonly, nonatomic) NSString *symbolicColorForNewCalendar;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL isFacebookSource;
@property (readonly, nonatomic) BOOL supportsCalendarCreation;
@property (readonly, nonatomic) BOOL supportsTaskCalendarCreation;
@property (readonly, nonatomic) BOOL supportsReminderActions;
@property (readonly, nonatomic) EKSourceConstraints *constraints;
@property (readonly, nonatomic) BOOL isWritable;
@property (nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL supportsFreebusy;
@property (readonly, nonatomic) BOOL supportsEventCalendarCreation;
@property (readonly, nonatomic) BOOL supportsFloatingTimeZone;
@property (readonly, nonatomic) BOOL supportsMultipleAlarms;
@property (readonly, nonatomic) BOOL supportsMultipleMonthsInYearlyRecurrence;
@property (readonly, nonatomic) BOOL supportsMultipleDaysInMonthlyRecurrence;
@property (readonly, nonatomic) BOOL supportsYearlyRecurrenceWithArbitraryInterval;
@property (readonly, nonatomic) BOOL supportsURLs;
@property (readonly, nonatomic) BOOL prefersSuggestingNewTimeViaEmail;
@property (readonly, nonatomic) BOOL supportsAttendeeEventForwarding;
@property (readonly, nonatomic) BOOL preferUsingEventOrganizerEmailWhenComposingMail;
@property (readonly, nonatomic) BOOL isEnabledForEvents;
@property (readonly, nonatomic) REMObjectID *remAccountObjectID;
@property (readonly, nonatomic) NSError *sourceError;
@property (readonly, nonatomic) NSError *sourceOrEventError;
@property (readonly, nonatomic) BOOL syncs;
@property (nonatomic) int displayOrder;
@property (copy, nonatomic) NSString *ownerName;
@property (readonly, nonatomic, getter=isPrimaryLocalSource) BOOL primaryLocalSource;
@property (readonly, nonatomic, getter=isNestedLocalSource) BOOL nestedLocalSource;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSNumber *defaultAllDayAlarmOffset;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *creatorBundleID;
@property (copy, nonatomic) NSString *creatorCodeSigningIdentity;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (readonly, nonatomic) BOOL wantsCommentPromptWhenDeclining;
@property (nonatomic) long long preferredEventPrivateValue;
@property (nonatomic) long long strictestEventPrivateValue;
@property (readonly, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) NSString *serverHost;
@property (readonly, nonatomic) long long serverPort;
@property (readonly, nonatomic) BOOL serverUsesSSL;
@property (readonly, nonatomic) NSSet *ownerAddresses;
@property (readonly, nonatomic) NSString *preferredOwnerAddress;
@property (nonatomic) BOOL wasMigrated;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL showsNotifications;
@property (retain, nonatomic) NSString *constraintsDescriptionPath;
@property (retain, nonatomic) NSString *constraintsName;
@property (retain, nonatomic) NSString *constraintsDescriptionPathForUnitTesting;
@property (nonatomic) BOOL allowsTasks;
@property (nonatomic) BOOL allowsEvents;
@property (nonatomic) BOOL allowsCalendarAddDeleteModify;
@property (nonatomic) BOOL supportsSharedCalendars;
@property (nonatomic) BOOL supportsAlarmAcknowledgedDate;
@property (nonatomic) BOOL supportsPrivateEvents;
@property (nonatomic) BOOL prohibitsPrivateEventsWithAttendees;
@property (nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries;
@property (nonatomic) BOOL supportsAvailabilityRequests;
@property (nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests;
@property (nonatomic) BOOL supportsLocationDirectorySearches;
@property (nonatomic) BOOL allowsProposeNewTime;
@property (nonatomic) BOOL prohibitsICSImport;
@property (nonatomic) BOOL isFacebook;
@property (nonatomic) BOOL prohibitsDetachmentOnCommentChange;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsYearlyRecurrenceInterval;
@property (nonatomic) BOOL usesSelfAttendee;
@property (nonatomic) BOOL snoozeAlarmRequiresDetach;
@property (nonatomic) BOOL supportsDelegation;
@property (nonatomic) BOOL supportsDelegateEnumeration;
@property (nonatomic) BOOL prohibitsSlicingEventsWithAttendees;
@property (nonatomic) BOOL supportsEventForwarding;
@property (nonatomic) BOOL requiresOccurrencesConformToRecurrenceRule;
@property (nonatomic) BOOL supportsAttachments;
@property (nonatomic) BOOL supportsPush;
@property (nonatomic) BOOL supportsTravelTime;
@property (nonatomic) BOOL allowsPrivateEventAccessByDelegate;
@property (nonatomic) BOOL supportsInvitationModificationsWithoutNotification;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL supportsJunkReporting;
@property (readonly, nonatomic) BOOL supportsPhoneNumbers;
@property (retain, nonatomic) NSDictionary *cachedExternalInfo;
@property (readonly, nonatomic) unsigned long long lastSyncError;
@property (readonly, copy, nonatomic) NSDictionary *lastSyncErrorUserInfo;
@property (retain, nonatomic) EKSyncError *syncError;
@property (retain, nonatomic) NSDate *lastSyncStartDate;
@property (retain, nonatomic) NSDate *lastSyncEndDate;
@property (readonly, nonatomic) BOOL isSyncing;
@property (nonatomic) int flags;
@property (nonatomic) int flags2;
@property (nonatomic) BOOL isInMainWindow;
@property (nonatomic) BOOL isInSeparateWindow;
@property (nonatomic) BOOL doesSyncDefaultAlarmsToServer;
@property (readonly, nonatomic) BOOL supportsAvailability;
@property (readonly, nonatomic) NSSet *calendars;
@property (readonly, nonatomic) BOOL isDelegate;

+ (id)sourceWithEventStore:(id)a0;
+ (Class)frozenClass;
+ (BOOL)isWeakRelationship;
+ (id)primaryLocalSourceID;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)a0;
+ (id)knownRelationshipSingleValueKeys;
+ (int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)a0;

- (BOOL)remove:(id *)a0;
- (BOOL)refresh;
- (BOOL)save:(id *)a0;
- (BOOL)_reset;
- (BOOL)disabled;
- (id)cachedExternalInfoData;
- (int)managedConfigurationAccountAccess;
- (void)setCachedExternalInfoData:(id)a0;
- (void)setUUID:(id)a0;
- (BOOL)validate:(id *)a0;
- (id)UUID;
- (int)strictestEventPrivateValueRaw;
- (void)_resetInternalState;
- (void).cxx_destruct;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (id)description;
- (void)setDisabled:(BOOL)a0;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (int)preferredEventPrivateValueRaw;
- (id)calendarsForEntityType:(unsigned long long)a0;
- (id)calendarWithExternalIdentifier:(id)a0;
- (void)setFlag2:(int)a0 value:(BOOL)a1;
- (unsigned int)_adjustedDisplayOrder;
- (id)_calDAVOfficeHoursFromEKOfficeHours:(id)a0;
- (id)_convertTypeOfOwnerAddresses:(id)a0 toSet:(BOOL)a1;
- (void)_copyInitialDefaultAlarmSettingsIfNeeded;
- (void)_countCalendarItemsOfCalType:(int)a0 resultHandler:(id /* block */)a1;
- (id)_ekOfficeHoursFromCalDAVOfficeHours:(id)a0;
- (id)_nsErrorFromSyncError:(id)a0 event:(id)a1;
- (void)_setConstraintsNameWithoutValidation:(id)a0;
- (BOOL)_shouldCopyDefaultAlarmsFromLocalSource;
- (BOOL)_validateClientCanModifySources:(id *)a0;
- (void)countCalendarItemsOfType:(unsigned long long)a0 resultHandler:(id /* block */)a1;
- (void)countCalendarItemsWithResultHandler:(id /* block */)a0;
- (id)externalInfoForKey:(id)a0;
- (void)fetchOfficeHoursWithCompletion:(id /* block */)a0 onQueue:(id)a1;
- (BOOL)flag2:(int)a0;
- (BOOL)flag:(int)a0;
- (id)readWriteCalendarsForEntityType:(unsigned long long)a0;
- (BOOL)removeCalendarItemsOlderThanDate:(id)a0 entityTypeMask:(unsigned long long)a1 error:(id *)a2;
- (void)setFlag:(int)a0 value:(BOOL)a1;
- (void)setLastSyncError:(unsigned long long)a0 userInfo:(id)a1;
- (void)setOfficeHours:(id)a0 withCompletion:(id /* block */)a1 onQueue:(id)a2;
- (BOOL)supportsCalendarTaskCreation;

@end