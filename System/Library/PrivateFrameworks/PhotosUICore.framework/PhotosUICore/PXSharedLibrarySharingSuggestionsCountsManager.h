@class NSDate, NSString, PXUpdater, PHPhotoLibrary, PHAssetCollection, NSObject, PXSharedLibraryStatusProvider, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXSharedLibrarySharingSuggestionsCountsManager : PXObservable <PXPhotoLibraryUIChangeObserver, PXPreferencesObserver, PXChangeObserver>

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *libraryStatusProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHAssetCollection *sharingSuggestionsSmartAlbum;
@property (retain, nonatomic) PHFetchResult *mostRecentSuggestedAssetFetchResult;
@property (retain, nonatomic) PHFetchResult *mostRecentAssetFetchResult;
@property (retain, nonatomic) NSDate *mostRecentAddedDateEverSeen;
@property (retain, nonatomic) PHFetchResult *unreadSuggestedAssetsFetchResult;
@property (nonatomic) BOOL isFetchingUnreadSuggestedAssetsFetchResult;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isSuggestionsEnabled;
@property (nonatomic) BOOL hasAnySuggestions;
@property (nonatomic) BOOL needsParticipantSetup;
@property (nonatomic) BOOL shouldShowNotificationBanner;
@property (nonatomic) struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } detailedUnreadCounts;
@property (retain, nonatomic) NSDate *mostRecentUserSeenAddedDate;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastNotificationDateAccessor;
+ (id)lastSeenSuggestionsDateAccessor;
+ (id)mostRecentUserSeenAddedDateAccessor;
+ (id)lastBannerDismissDateAccessor;

- (id)initWithPhotoLibrary:(id)a0;
- (void)_updateDetailedUnreadCounts;
- (void)_handleLastBannerDismissDateDidChange:(id)a0;
- (id)init;
- (BOOL)isAssetUnread:(id)a0;
- (void)_updateHasAnySuggestions;
- (void)preferencesDidChange;
- (void)_invalidateIsSuggestionsEnabled;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)_updateMostRecentSeenSuggestedAssetAddedDate;
- (void)_handleUnreadSuggestedAssetsFetchResult:(id)a0 forDate:(id)a1;
- (void)_updateNeedsParticipantSetup;
- (void)_fetchUnreadAssetsAfterDate;
- (void)_handleLastSeenSuggestionsDateDidChange:(id)a0;
- (void)_queue_fetchUnreadAssetsAfterDate:(id)a0;
- (void)_invalidateMostRecentAddedDateEverSeen;
- (void)_updateIsSuggestionsEnabled;
- (void)_invalidateHasAnySuggestions;
- (void)_invalidateDetailedUnreadCounts;
- (void)_invalidateMostRecentSeenSuggestedAssetAddedDate;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)_updateMostRecentAddedDateEverSeen;
- (void).cxx_destruct;
- (void)_updateMostRecentSuggestedAssetFetchResult;
- (void)_invalidateNeedsParticipantSetup;
- (void)_updateShouldShowBanner;
- (void)_invalidateShouldShowBanner;
- (void)_handleLastSeenAddedDateDidChange:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleLastNotificationDateDidChange:(id)a0;
- (void)markAllSuggestionsAsRead;
- (void)_invalidateMostRecentSuggestedAssetFetchResult;
- (void)clearStoredDates;
- (void)markAnyNotificationsAsRead;

@end
