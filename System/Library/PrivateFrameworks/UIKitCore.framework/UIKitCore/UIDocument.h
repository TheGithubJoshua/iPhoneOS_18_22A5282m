@class NSURL, NSUserActivity, NSDate, NSObject, NSMutableArray, NSString, NSSet, NSUndoManager, NSTimer, NSMutableSet, NSOperationQueue, NSLock, NSProgress;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting> {
    NSUserActivity *_currentUserActivity;
    NSLock *_activityContinuationLock;
    NSURL *_fileURL;
    NSString *_fileBookmark;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    id _alertPresenter;
    id _progressSubscriber;
    NSMutableSet *_progresses;
    struct __docFlags { unsigned char inClose : 1; unsigned char isOpen : 1; unsigned char inOpen : 1; unsigned char inRevert : 1; unsigned char isAutosavingBecauseOfTimer : 1; unsigned char versionWithoutRecentChangesIsNotLastOpened : 1; unsigned char ignoreUndoAndRedoNotifications : 1; unsigned char editingTemporarilyDisabled : 1; unsigned char editingDisabledDueToPermissions : 1; unsigned char isRegisteredAsFilePresenter : 1; unsigned char movingFile : 1; unsigned char savingError : 1; unsigned char inConflict : 1; unsigned char needToStopAccessingSecurityScopedResource : 1; } _docFlags;
}

@property (readonly, nonatomic) id differenceDueToRecentChanges;
@property (readonly, nonatomic) id differenceSincePreservingPreviousVersion;
@property (readonly, nonatomic) id differenceSinceSaving;
@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *fileType;
@property (copy) NSDate *fileModificationDate;
@property (readonly) unsigned long long documentState;
@property (readonly) NSProgress *progress;
@property (retain) NSUndoManager *undoManager;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (readonly, nonatomic) NSString *savingFileType;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_autosavingTimerDidFireSoContinue:(id)a0;
+ (id)_customizationOfError:(id)a0 withDescription:(id)a1 recoverySuggestion:(id)a2 recoveryAttempter:(id)a3;
+ (id)_fileModificationDateForURL:(id)a0;
+ (void)_finishWritingToURL:(id)a0 withTemporaryDirectoryURL:(id)a1 newContentsURL:(id)a2 afterSuccess:(BOOL)a3;
+ (id)_typeForContentsOfURL:(id)a0 error:(id *)a1;
+ (BOOL)_url:(id)a0 matchesURL:(id)a1;

- (id)userActivity;
- (id)initWithFileURL:(id)a0;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)_applicationWillResignActive:(id)a0;
- (id)init;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateUserActivityState:(id)a0;
- (void)_setFileURL:(id)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)dealloc;
- (void)setFileType:(id)a0;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)presentedSubitemDidAppearAtURL:(id)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)presentedItemDidLoseVersion:(id)a0;
- (void)presentedItemDidResolveConflictVersion:(id)a0;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(id /* block */)a0;
- (void)presentedSubitemAtURL:(id)a0 didGainVersion:(id)a1;
- (void)presentedSubitemAtURL:(id)a0 didLoseVersion:(id)a1;
- (void)presentedSubitemAtURL:(id)a0 didMoveToURL:(id)a1;
- (void)presentedSubitemAtURL:(id)a0 didResolveConflictVersion:(id)a1;
- (void)_setEditingTemporarilyDisabled:(BOOL)a0;
- (BOOL)writeContents:(id)a0 andAttributes:(id)a1 safelyToURL:(id)a2 forSaveOperation:(long long)a3 error:(id *)a4;
- (void)_autosaveWithCompletionHandler:(id /* block */)a0;
- (void)_changeWasDone:(id)a0;
- (BOOL)_hasSavingError;
- (BOOL)_isOpen;
- (void)_setInConflict:(BOOL)a0;
- (BOOL)writeContents:(id)a0 toURL:(id)a1 forSaveOperation:(long long)a2 originalContentsURL:(id)a3 error:(id *)a4;
- (id)_activityTypeIdentifierForCloudDocument:(BOOL *)a0;
- (void)_autosavingCompletedSuccessfully:(BOOL)a0;
- (double)_autosavingDelay;
- (void)_changeWasRedone:(id)a0;
- (void)_changeWasUndone:(id)a0;
- (void)_clearUserActivity;
- (BOOL)_coordinateWritingItemAtURL:(id)a0 error:(id *)a1 byAccessor:(id /* block */)a2;
- (BOOL)_documentIsUbiquitous;
- (id)_fileOpeningQueue;
- (void)_finishSavingToURL:(id)a0 forSaveOperation:(long long)a1 changeCount:(id)a2;
- (BOOL)_hasUnsavedChanges;
- (void)_invalidateCurrentUserActivity;
- (BOOL)_isEditingDisabledDueToPermissions;
- (BOOL)_isEditingTemporarilyDisabled;
- (BOOL)_isInConflict;
- (BOOL)_isInOpen;
- (void)_lockFileAccessQueueAndPerformBlock:(id /* block */)a0;
- (void)_manageUserActivity;
- (void)_performBlock:(id /* block */)a0 synchronouslyOnQueue:(id)a1;
- (void)_performBlockSynchronouslyOnMainThread:(id /* block */)a0;
- (id)_presentableFileNameForSaveOperation:(long long)a0 url:(id)a1;
- (void)_progressPublished:(id)a0;
- (void)_progressUnpublished:(id)a0;
- (void)_reallyManageUserActivity;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_releaseUndoManager;
- (void)_rescheduleAutosaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(id /* block */)a0;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)a0 reset:(BOOL)a1;
- (void)_sendStateChangedNotification;
- (void)_setEditingDisabledDueToPermissions:(BOOL)a0;
- (void)_setHasSavingError:(BOOL)a0;
- (void)_setInOpen:(BOOL)a0;
- (void)_setOpen:(BOOL)a0;
- (void)_setUserActivity:(id)a0;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (id)_titleForActivityContinuation;
- (void)_unlockFileAccessQueue;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_updateConflictState;
- (void)_updateLastUsedDate;
- (void)_updateLocalizedName;
- (void)_updatePermissionsState:(BOOL)a0;
- (id)_userActivityWithActivityType:(id)a0;
- (id)_userInfoForActivityContinuation;
- (id)_writingProgressForURL:(id)a0 indeterminate:(BOOL)a1;
- (void)autosaveWithCompletionHandler:(id /* block */)a0;
- (id)changeCountTokenForSaveOperation:(long long)a0;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (void)disableEditing;
- (void)enableEditing;
- (id)fileAttributesToWriteToURL:(id)a0 forSaveOperation:(long long)a1 error:(id *)a2;
- (id)fileNameExtensionForType:(id)a0 saveOperation:(long long)a1;
- (void)finishedHandlingError:(id)a0 recovered:(BOOL)a1;
- (void)handleError:(id)a0 userInteractionPermitted:(BOOL)a1;
- (BOOL)loadFromContents:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)performAsynchronousFileAccessUsingBlock:(id /* block */)a0;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (void)restoreUserActivityState:(id)a0;
- (void)revertToContentsOfURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveToURL:(id)a0 forSaveOperation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setUserActivity:(id)a0;
- (void)updateChangeCount:(long long)a0;
- (void)updateChangeCountWithToken:(id)a0 forSaveOperation:(long long)a1;
- (void)userInteractionNoLongerPermittedForError:(id)a0;

@end