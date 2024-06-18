@class NSString, NSURL, MobileCalDAVPrincipal, NSArray, NSMutableDictionary, NSDictionary, NSSet, CalDAVDBChangeTrackingHelper, NSTimeZone, NSMutableArray, CalDiagCalendarCollectionSync;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar, CDBRecordIDMap> {
    MobileCalDAVPrincipal *_principal;
    void *_calCalendar;
    NSMutableDictionary *_changesToClear;
    NSSet *_deletedExternalIDs;
    NSMutableArray *_newlyAddedItems;
}

@property (readonly, nonatomic) MobileCalDAVPrincipal *daPrincipal;
@property (retain, nonatomic) CalDiagCalendarCollectionSync *calendarCollectionSyncDiagnostics;
@property (weak, nonatomic) id<CalDAVPrincipal> principal;
@property (readonly, nonatomic) void *calCalendar;
@property (retain, nonatomic) NSString *calendarURLString;
@property (retain, nonatomic) NSMutableDictionary *deletedCalendarItems;
@property (retain, nonatomic) NSArray *syncActions;
@property (retain, nonatomic) NSArray *shareeActions;
@property (retain, nonatomic) NSArray *itemsToReportAsJunk;
@property (retain, nonatomic) NSArray *recurrenceSplitActions;
@property (retain, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (retain, nonatomic) NSDictionary *uuidsToAddActions;
@property (retain, nonatomic) NSMutableDictionary *uniqueIdentifierToRecordIDMap;
@property (retain, nonatomic) NSMutableDictionary *URLToRecordIDMap;
@property (retain, nonatomic) NSMutableDictionary *URLToEtagMap;
@property (readonly, nonatomic) BOOL mustCalendarBeReadOnly;
@property (readonly, nonatomic) BOOL shouldCalendarBeHidden;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *lastSyncTitle;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) NSString *ownerEmailAddress;
@property (readonly, nonatomic) NSString *ownerPhoneNumber;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (nonatomic) int order;
@property (nonatomic) int sharingStatus;
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) BOOL isTaskContainer;
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL isScheduleInbox;
@property (nonatomic) BOOL isScheduleOutbox;
@property (nonatomic) BOOL isNotification;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRenameable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isAffectingAvailability;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (nonatomic) BOOL isFamilyCalendar;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL wasModifiedLocally;
@property (nonatomic) long long maxAttendees;
@property (retain, nonatomic) NSString *ctag;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *syncToken;
@property (nonatomic) BOOL needsResync;
@property (nonatomic) BOOL didResync;
@property (readonly, nonatomic) NSSet *allItemURLs;
@property (nonatomic) BOOL isDirty;
@property (readonly, nonatomic) NSString *displayColor;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSString *accountID;
@property (nonatomic) BOOL needsPublishUpdate;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements;
@property (retain, nonatomic) CalDAVDBChangeTrackingHelper *changeTracker;
@property (retain, nonatomic) NSArray *newlyAddedItems;
@property (nonatomic) BOOL needsIsAffectingAvailabilityUpdate;
@property (nonatomic) BOOL becameDefaultSchedulingCalendar;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL isPoll;
@property (nonatomic) BOOL isPublished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cacheCalendarUID:(int)a0 forCalendarURLString:(id)a1;
+ (int)cachedCalendarUIDForURLString:(id)a0;
+ (id)calURLToUIDCache;
+ (id)calendarWithCalCalendar:(void *)a0 principal:(id)a1;
+ (BOOL)clearCalendarChanges:(struct __CFArray { } *)a0 forPrincipal:(id)a1 changeTrackingClient:(id)a2;
+ (void)clearCalendarUIDCache;
+ (struct __CFArray { } *)gatherCalendarChangesInPrincipal:(id)a0 calendars:(id)a1 adds:(id *)a2 modifies:(id *)a3 deletes:(id *)a4 changeTracker:(id)a5;
+ (void)processAddedCalendar:(id)a0;
+ (void)processModifiedCalendar:(id)a0 oldFlags:(unsigned int)a1 newFlags:(unsigned int)a2;
+ (void)removeUIDCacheEntryForCalendarURLString:(id)a0;
+ (BOOL)shouldSkipAddedCalendar:(void *)a0;
+ (BOOL)shouldSkipCalendar:(void *)a0 withChangeType:(int)a1;
+ (BOOL)shouldSkipModifiedCalendar:(void *)a0;

- (void).cxx_destruct;
- (id)copyAllItems;
- (void)dealloc;
- (BOOL)hasEvents;
- (id)_preferredAddress;
- (const struct CalRecordID { } *)recordIDForExternalIdentifier:(id)a0;
- (const struct CalRecordID { } *)recordIDForUniqueIdentifier:(id)a0;
- (void)setExternalIdentifier:(id)a0 forRecordID:(struct CalRecordID { } *)a1;
- (void)setUniqueIdentifier:(id)a0 forRecordID:(struct CalRecordID { } *)a1;
- (Class)appSpecificCalendarItemClass;
- (void)clearShareeActions;
- (void)deleteAction:(id)a0 completedWithError:(id)a1;
- (BOOL)deleteResourcesAtURLs:(id)a0;
- (id)etagsForItemURLs:(id)a0;
- (BOOL)hasCalendarUserAddressEquivalentToURL:(id)a0;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)putAction:(id)a0 completedWithError:(id)a1;
- (void)recurrenceSplitAction:(id)a0 completedWithUpdatedETag:(id)a1 updatedScheduleTag:(id)a2 createdURL:(id)a3 createdETag:(id)a4 createdScheduleTag:(id)a5;
- (void)recurrenceSplitAction:(id)a0 failedWithError:(id)a1;
- (void)recurrenceSplitActionsCompletedWithError:(id)a0;
- (BOOL)setEtag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (void)syncDidFinishWithError:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (id)_calExternalRep;
- (void)_clearChangesAtIndices:(id)a0 forType:(int)a1;
- (void)_addAddedItemsOfType:(int)a0 toArray:(id)a1;
- (void)_addAddedRecurrenceSplitItemsToArray:(id)a0;
- (void)_addCalendarItemWithRowID:(int)a0 toArrayIfNeeded:(id)a1 withChangeRowid:(int)a2 changeType:(id)a3;
- (void)_addShareeWithRowID:(id)a0 toDictionaryIfNeeded:(id)a1;
- (void)_clearChangesFromItem:(id)a0;
- (void)_clearChangesFromItem:(id)a0 shouldClearAttachmentChanges:(BOOL)a1;
- (void)_clearExistingHTTPErrorForCalItem:(void *)a0;
- (void)_collectShareeActions;
- (void *)_copyCalItemWithExternalID:(id)a0;
- (void *)_copyCalItemWithUniqueIdentifier:(id)a0 inCalendar:(void *)a1 orStore:(void *)a2;
- (id)_copyDeletedEventActions;
- (id)_createActionsForItems:(id)a0 withAction:(int)a1 alreadySentItems:(id)a2 createServerIDs:(BOOL)a3 shouldSave:(BOOL *)a4;
- (void)_dropCalStoreContext;
- (void)_forceRefreshNextSync;
- (void)_gatherDeletedChanges:(void /* function */ *)a0 inDictionary:(id)a1;
- (void)_gatherModifiedEventsInArray:(id)a0;
- (void)_gatherModifiedItemsFromCalChangesCall:(void /* function */ *)a0 forType:(id)a1 inArray:(id)a2;
- (void)_gatherModifiedTasksInArray:(id)a0;
- (BOOL)_isDeleted:(id)a0;
- (BOOL)_isItemJunk:(void *)a0;
- (id)_itemPropertyDictForItemAtIndex:(long long)a0 withChangedIDs:(struct __CFArray { } *)a1 withChangedRowids:(struct __CFArray { } *)a2 withExternalIDs:(struct __CFArray { } *)a3 uniqueIdentifiers:(struct __CFArray { } *)a4 significantAttributeChanges:(struct __CFArray { } *)a5 oldCalendarIDs:(struct __CFArray { } *)a6 entityType:(int)a7;
- (void)_recordError:(id)a0 forCalItem:(void *)a1;
- (id)_recurrenceSplitActionsForItems:(id)a0 alreadySentItems:(id)a1;
- (BOOL)_removeCalendarItemWithURL:(id)a0;
- (id)_resourceURLsForJunkItemsInModifiedItems:(id)a0 alreadySentItems:(id)a1;
- (void)_saveChangesAtIndices:(id)a0 forType:(int)a1;
- (void)_saveChangesForItem:(id)a0;
- (void)_setSupportsEvents:(BOOL)a0 supportsTodos:(BOOL)a1;
- (BOOL)_shouldRecordError:(id)a0;
- (void)_updateCalendarInfo;
- (void)addChangesToBeCleared:(struct __CFArray { } *)a0 forEntityType:(int)a1;
- (id)calendarUserAddresses;
- (void)clearCalendarErrorOfType:(unsigned long long)a0;
- (void)clearChangesForEntityType:(int)a0;
- (void)clearEventChanges;
- (id)copyAddedItems;
- (id)copyDeletedItems;
- (id)copyModifiedItems;
- (id)copyRecurrenseSplitItems;
- (void)correctLocationPredictionStateForRecurrenceSets:(id)a0 calDB:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a1;
- (void)createSyncActions;
- (void)deleteCalendar;
- (void)flushCaches;
- (void)generateICSForActions;
- (void *)getCalCalendar;
- (BOOL)hasCalendarErrorOfType:(unsigned long long)a0;
- (void *)initCalCalendarWithTitle:(id)a0;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (id)initWithCalendarURL:(id)a0 principal:(id)a1;
- (id)initWithCalendarURL:(id)a0 principal:(id)a1 title:(id)a2;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordCalendarError:(id)a0 ofType:(unsigned long long)a1;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)a0;

@end