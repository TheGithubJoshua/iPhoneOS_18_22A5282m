@class EKSource, NSString;

@interface EKCalendar : EKObject

@property (nonatomic) unsigned long long cachedJunkStatus;
@property (retain, nonatomic) EKSource *source;
@property (readonly, nonatomic) NSString *calendarIdentifier;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL allowsContentModifications;
@property (readonly, nonatomic, getter=isSubscribed) BOOL subscribed;
@property (readonly, nonatomic, getter=isImmutable) BOOL immutable;
@property (nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) unsigned long long supportedEventAvailabilities;
@property (readonly, nonatomic) unsigned long long allowedEntityTypes;

+ (Class)frozenClass;
+ (BOOL)isWeakRelationship;
+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipSingleValueKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)_eventKitBundle;
+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (id)calendarForEntityType:(unsigned long long)a0 eventStore:(id)a1;
+ (id)calendarForEntityTypes:(unsigned long long)a0 eventStore:(id)a1;
+ (id)calendarWithEventStore:(id)a0;
+ (id)knownRelationshipWeakKeys;
+ (id)orderSortDescriptors;
+ (id)rowIDsForCalendars:(id)a0;
+ (id)typeDescription:(long long)a0;

- (BOOL)remove:(id *)a0;
- (void)setSharees:(id)a0;
- (id)pushKey;
- (id)sharees;
- (id)alarms;
- (long long)maxAttendees;
- (BOOL)refresh;
- (BOOL)isFamilyCalendar;
- (BOOL)save:(id *)a0;
- (BOOL)canBeShared;
- (void)setMaxAttendees:(long long)a0;
- (void)setSyncToken:(id)a0;
- (int)entityType;
- (id)notes;
- (id)syncToken;
- (BOOL)canBePublished;
- (BOOL)_reset;
- (id)init;
- (id)subcalAccountID;
- (id)subscriptionID;
- (void)setNotes:(id)a0;
- (void)setCanBeShared:(BOOL)a0;
- (BOOL)isManaged;
- (void)setPubcalAccountID:(id)a0;
- (id)externalIDTag;
- (void)setSymbolicColorName:(id)a0;
- (void)setOwnerIdentityPhoneNumber:(id)a0;
- (void)setSubcalAccountID:(id)a0;
- (id)ownerIdentityFirstName;
- (id)locale;
- (id)publishURL;
- (void)setLocale:(id)a0;
- (void)setCanBePublished:(BOOL)a0;
- (id)ownerIdentityAddressString;
- (id)sharedOwnerAddress;
- (void)setPublishURLString:(id)a0;
- (void)setReadOnly:(BOOL)a0;
- (unsigned int)flags;
- (int)refreshInterval;
- (BOOL)supportsJunkReporting;
- (BOOL)isMarkedImmutableSharees;
- (void)setSharedOwnerURLString:(id)a0;
- (void)setPushKey:(id)a0;
- (id)lastSyncTitle;
- (BOOL)isColorDisplayOnly;
- (void)setSharedOwnerAddress:(id)a0;
- (id)syncError;
- (void)setOwnerIdentityFirstName:(id)a0;
- (void)setUUID:(id)a0;
- (id)digest;
- (void)setDisplayOrder:(int)a0;
- (BOOL)validate:(id *)a0;
- (void)rollback;
- (id)unlocalizedTitle;
- (void)setOwnerIdentityEmail:(id)a0;
- (unsigned long long)sharingStatus;
- (void)setExternalIDTag:(id)a0;
- (id)UUID;
- (unsigned long long)sharingInvitationResponse;
- (void)setAllAlarms:(id)a0;
- (int)ownerIdentityId;
- (id)sharedOwnerName;
- (int)displayOrder;
- (int)allowedEntities;
- (void)setSelfIdentityDisplayName:(id)a0;
- (void)setFlags:(unsigned int)a0;
- (id)ownerIdentityEmail;
- (BOOL)isHidden;
- (void)setRefreshDate:(id)a0;
- (void)setLastSyncEndDate:(id)a0;
- (unsigned long long)invitationStatus;
- (void)setExternalID:(id)a0;
- (BOOL)readOnly;
- (void)setOwnerIdentityId:(int)a0;
- (void)setColorStringRaw:(id)a0;
- (void)setAlarms:(id)a0;
- (unsigned long long)lastSyncError;
- (id)ownerIdentityLastName;
- (void)setSubscribed:(BOOL)a0;
- (BOOL)isSyncing;
- (void)setExternalModificationTag:(id)a0;
- (void)setLastSyncTitle:(id)a0;
- (id)description;
- (id)selfIdentityLastName;
- (void)setOwnerIdentityDisplayName:(id)a0;
- (void)setSharingStatus:(unsigned long long)a0;
- (id)selfIdentityFirstName;
- (void)setInvitationStatus:(unsigned long long)a0;
- (id)lastSyncEndDate;
- (BOOL)isPublished;
- (void)setSelfIdentityFirstName:(id)a0;
- (id)ownerIdentityDisplayName;
- (id)externalRepresentation;
- (void)setPublishURL:(id)a0;
- (id)ownerIdentityPhoneNumber;
- (void)setOwnerIdentityLastName:(id)a0;
- (void)setSubcalURL:(id)a0;
- (id)selfIdentityEmail;
- (id)selfIdentityDisplayName;
- (id)symbolicColorName;
- (id)externalModificationTag;
- (void)setLastSyncStartDate:(id)a0;
- (void)setSubscriptionID:(id)a0;
- (id)sharedOwnerURLString;
- (void)setExternalRepresentation:(id)a0;
- (id)pubcalAccountID;
- (id)refreshDate;
- (void)setSelfIdentityAddressString:(id)a0;
- (void)setSelfIdentityEmail:(id)a0;
- (id)colorStringRaw;
- (void)reset;
- (void)setIsPublished:(BOOL)a0;
- (void)setSharingInvitationResponse:(unsigned long long)a0;
- (void)setHidden:(BOOL)a0;
- (id)selfIdentityAddressString;
- (void)setSelfIdentityPhoneNumber:(id)a0;
- (id)selfIdentityPhoneNumber;
- (BOOL)isMarkedUndeletable;
- (id)externalID;
- (void)setOwnerIdentityAddressString:(id)a0;
- (void)setSharedOwnerName:(id)a0;
- (void)setColorDisplayOnly:(BOOL)a0;
- (void)setRefreshInterval:(int)a0;
- (id)publishURLString;
- (id)lastSyncStartDate;
- (void)setSyncError:(id)a0;
- (BOOL)hasEvents;
- (void)setAllowedEntities:(int)a0;
- (void)setUnlocalizedTitle:(id)a0;
- (void)setDigest:(id)a0;
- (id)allAlarms;
- (id)subcalURL;
- (void)setAllowsEvents:(BOOL)a0;
- (void)setSelfIdentityLastName:(id)a0;
- (BOOL)isDeletable;
- (id)externalURI;
- (void)addAlarms:(id)a0;
- (void)setCalendarIdentifier:(id)a0;
- (void)setColorString:(id)a0;
- (id)colorString;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)setIsDefaultSchedulingCalendar:(BOOL)a0;
- (void)setStripAlarms:(BOOL)a0;
- (BOOL)isInbox;
- (void)moveSubscribedCalendarToSource:(id)a0;
- (id)shareesAndOwner;
- (BOOL)_anotherCalendarForDefaultSchedulingExistsWithAllKnownCalendars:(id)a0;
- (BOOL)_anotherCalendarForRemindersExistsWithAllKnownCalendars:(id)a0;
- (BOOL)_anyCalendarExistsInSameSourceOfType:(unsigned long long)a0 withAllKnownCalendars:(id)a1 passingTest:(id /* block */)a2;
- (void)_clearCGColorCache;
- (BOOL)_flagValueWithMask:(unsigned int)a0;
- (void)_setFlagValue:(BOOL)a0 withMask:(unsigned int)a1;
- (void)_updateToMaxDisplayOrder;
- (BOOL)_validateAccessConsent:(id *)a0;
- (BOOL)_validateDeletable:(id *)a0;
- (BOOL)_validateDeletableHelperWithAllKnownCalendars:(id)a0 error:(id *)a1;
- (BOOL)_validateDeletableWithAllKnownCalendars:(id)a0 error:(id *)a1;
- (void)addSharee:(id)a0;
- (BOOL)allowEvents;
- (BOOL)allowReminders;
- (BOOL)allowsDeletionOrPropertyModifications;
- (BOOL)allowsIgnoringSharedEventChangeNotifications;
- (BOOL)allowsScheduling;
- (void)assignColorForNewCalendarIfNeeded;
- (BOOL)automaticEventLocationGeocodingAllowed;
- (id)calendarError;
- (BOOL)canMergeWithCalendar:(id)a0;
- (void)clearInvitationStatus;
- (BOOL)couldBeJunk;
- (long long)deletionWarningsMask;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (id)exportData;
- (id)exportDataWithOptions:(unsigned long long)a0;
- (id)findOriginalAlarmStartingWith:(id)a0;
- (BOOL)getColorRed:(int *)a0 green:(int *)a1 blue:(int *)a2;
- (BOOL)hasSharees;
- (BOOL)isAffectingAvailability;
- (BOOL)isAlarmAcknowledgedPropertyDirty;
- (BOOL)isChinaHolidayCalendar;
- (BOOL)isDefaultSchedulingCalendar;
- (BOOL)isDeletableWithAllKnownCalendars:(id)a0;
- (BOOL)isFacebookBirthdayCalendar;
- (BOOL)isHolidayCalendar;
- (BOOL)isHolidaySubscribedCalendar;
- (BOOL)isIgnoringEventAlerts;
- (BOOL)isIgnoringSharedCalendarNotifications;
- (BOOL)isImmutableRaw;
- (BOOL)isMutableNaturalLanguageSuggestionsCalendar;
- (BOOL)isMutableSuggestionsCalendar;
- (BOOL)isNaturalLanguageSuggestedEventCalendar;
- (BOOL)isNotificationsCollection;
- (BOOL)isSharingInvitation;
- (BOOL)isSubscribedCalendarJunk;
- (BOOL)isSubscribedHolidayCalendar;
- (BOOL)isSuggestedEventCalendar;
- (BOOL)isSuggestionsCalendar;
- (BOOL)isSyncedHolidayCalendar;
- (id)lastSyncErrorUserInfo;
- (int)migrationVersion;
- (id)ownerIdentityAddress;
- (id)ownerIdentityOrganizer;
- (BOOL)prohibitsScheduling;
- (void)removeAlarms:(id)a0;
- (void)removeAllSnoozedAlarms;
- (void)removeServerRefreshRelatedPropertiesForSelfAndAllEventsSaveAndCommitWithError:(id *)a0;
- (void)removeSharee:(id)a0;
- (void)reorderBetweenEarlier:(id)a0 later:(id)a1;
- (id)reorderCalendars:(id)a0 betweenEarlier:(id)a1 later:(id)a2;
- (id)selectionSyncIdentifier;
- (id)selfIdentityAddress;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (void)setAllowReminders:(BOOL)a0;
- (void)setAllowedEntityTypes:(unsigned long long)a0;
- (void)setAllowsContentModifications:(BOOL)a0;
- (void)setAllowsScheduling:(BOOL)a0;
- (void)setChinaHolidayCalendar:(BOOL)a0;
- (void)setFacebookBirthdayCalendar:(BOOL)a0;
- (void)setFamilyCalendar:(BOOL)a0;
- (void)setImmutable:(BOOL)a0;
- (void)setInbox:(BOOL)a0;
- (void)setIsAffectingAvailability:(BOOL)a0;
- (void)setIsIgnoringEventAlerts:(BOOL)a0;
- (void)setIsIgnoringSharedCalendarNotifications:(BOOL)a0;
- (void)setIsJunk:(BOOL)a0;
- (void)setIsSubscribedCalendarJunk:(BOOL)a0;
- (void)setLastSyncError:(unsigned long long)a0 userInfo:(id)a1;
- (void)setMarkedImmutableSharees:(BOOL)a0;
- (void)setMarkedUndeletable:(BOOL)a0;
- (void)setMigrationVersion:(int)a0;
- (void)setNotificationsCollection:(BOOL)a0;
- (void)setOwnerIdentityAddress:(id)a0;
- (void)setProhibitsScheduling:(BOOL)a0;
- (void)setSelfIdentityAddress:(id)a0;
- (void)setSharedOwnerURL:(id)a0;
- (void)setSharingInvitation:(BOOL)a0;
- (void)setStripAttachments:(BOOL)a0;
- (void)setSubscribedHolidayCalendar:(BOOL)a0;
- (void)setSyncedHolidayCalendar:(BOOL)a0;
- (id)sharedOwnerEmail;
- (id)sharedOwnerPhoneNumber;
- (id)sharedOwnerURL;
- (void)snoozeAlarm:(id)a0 withLocation:(id)a1 proximity:(long long)a2;
- (void)snoozeAlarm:(id)a0 withTimeIntervalFromNow:(double)a1;
- (BOOL)stripAlarms;
- (BOOL)stripAttachments;
- (id)syncHash;

@end
