@class CalDiagAccountSync, NSString, CalDAVCalendarPropertyRefreshOperation, NSSet, NSMutableDictionary, DATransaction, NSObject, CalDAVRefreshContext, NSMutableSet, MobileCalDAVAccount, NSMutableArray;
@protocol OS_dispatch_group;

@interface MobileCalDAVAccountRefreshActor : NSObject <CalDAVAccountPropertyRefreshDelegate, CalDAVCalendarPropertyRefreshDelegate, CalDAVCalendarSyncDelegate, CalDAVAccountDelegatesRefreshDelegate> {
    DATransaction *_transaction;
    CalDAVCalendarPropertyRefreshOperation *_pausedPropertyRefreshOperation;
    BOOL _didForceDefaultCalendarRefetch;
}

@property (weak, nonatomic) MobileCalDAVAccount *account;
@property (retain, nonatomic) CalDAVRefreshContext *context;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) BOOL refreshing;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSMutableDictionary *pathsToCTags;
@property (retain, nonatomic) NSMutableDictionary *pathsToSyncTokens;
@property (retain, nonatomic) NSMutableArray *calendarsToRefresh;
@property (nonatomic) BOOL refreshFoundUpdatedTaskContainer;
@property (nonatomic) BOOL refreshFoundUpdatedSpecialCalendar;
@property (nonatomic) BOOL refreshFoundDeletedContainerURL;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingOperationGroup;
@property (retain, nonatomic) NSMutableSet *outstandingTaskGroups;
@property (retain, nonatomic) NSMutableSet *outstandingTasks;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) CalDiagAccountSync *accountSyncDiagnostics;
@property (retain, nonatomic) NSSet *eventUIDsWithAttachmentChanges;
@property (readonly, nonatomic) BOOL needsRemindersSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccount:(id)a0 context:(id)a1;
- (void)cancelWithCompletion:(id /* block */)a0;
- (id)_powerLogInfoDictionary;
- (void)calendarRefreshForPrincipal:(id)a0 completedWithNewCTags:(id)a1 newSyncTokens:(id)a2 calendarHomeSyncToken:(id)a3 updatedCalendars:(id)a4 error:(id)a5;
- (void)calendarRefreshFoundDeletedContainerURL:(id)a0;
- (void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)a0;
- (void)calendarRefreshFoundUpdatedSpecialContainer:(id)a0;
- (void)calendarRefreshMkCalendarSucceededForPrincipal:(id)a0 calendar:(id)a1;
- (void)calendarRefreshPropPatchFinishedWithError:(id)a0 forCalendar:(id)a1;
- (BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)a0 calendar:(id)a1 error:(id)a2;
- (void)calendarRefreshWillRefreshCalendar:(id)a0;
- (void)calendarRefreshWillSendCalendarDeletes:(id)a0;
- (void)calendarSyncForPrincipal:(id)a0 calendar:(id)a1 completedWithError:(id)a2;
- (void)propertyRefreshForPrincipal:(id)a0 completedWithError:(id)a1;
- (id)_refreshedSyncTokenForCalendar:(id)a0;
- (BOOL)_amendChangeRecordAndCleanUpAfterDeletedEventWithID:(int)a0 externalID:(id)a1 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a2;
- (void)_beginAttachmentDownloads;
- (void)_calendarCollectionsWereRefreshed;
- (BOOL)_checkForNewOrMovedItemsDeletedSinceSyncStartedInCalendars:(id)a0 database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a1 moves:(id)a2;
- (BOOL)_cleanUpDuplicateCalendar:(id)a0 ofCalendar:(id)a1;
- (void)_cleanUpDuplicateCalendars;
- (void)_cleanUpOrphanedPreferredUserAddressesPerCalendar;
- (void)_clearMoveChange:(id)a0;
- (void)_continuePrincipalRefresh;
- (void)_downloadAttachments;
- (void)_finishMoveForItemWithID:(int)a0 withEtag:(id)a1 scheduleTag:(id)a2;
- (void)_gatherAttachmentChanges;
- (id)_guidsOfExistingCalendars;
- (void)_handleAttachmentUploadsComplete:(id)a0 attachments:(id)a1;
- (void)_handleMoveTaskComplete:(id)a0 moveItem:(id)a1;
- (id)_prepareAttachmentsForUpload;
- (void)_propFindForNewEtagFollowingMoveOfItem:(int)a0;
- (void)_refreshAccountProperties;
- (void)_refreshCalendarProperties;
- (void)_refreshDelegateAccountProperties;
- (void)_refreshRegularCalendars;
- (BOOL)_refreshShouldContinue;
- (void)_refreshSpecialCalendars;
- (id)_refreshedCtagForCalendar:(id)a0;
- (void)_saveMoveChange:(id)a0;
- (BOOL)_sendMoveForItem:(id)a0;
- (void)_sendMoveTasks;
- (void)_sendResultToAccount;
- (void)_syncCalendar:(id)a0;
- (void)_teardownAllOutstandingOperations;
- (void)_updateDefaultCalendarIfNeededWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)a0;
- (void)_uploadAttachments;
- (void)_uploadAttachments:(id)a0;
- (void)_uploadAttachments:(id)a0 forOwnerURL:(id)a1 syncKey:(id)a2 scheduleTag:(id)a3;
- (void)_waitForStateTransition;
- (void)delegateRefreshForPrincipal:(id)a0 completedWithError:(id)a1;

@end