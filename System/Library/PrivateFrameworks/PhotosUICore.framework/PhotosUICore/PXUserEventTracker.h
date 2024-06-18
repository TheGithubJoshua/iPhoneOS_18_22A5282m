@class NSHashTable;

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    double _timeLoggedOnDetailViewWillAppear;
    double _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long _totalNumberOfRelatedJumps;
    unsigned long long _MaxDepthOfRelatedJumps;
}

@property (class, readonly) PXUserEventTracker *sharedInstance;

@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable;

- (void)_applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)didViewDetailsForAssetCollection:(id)a0;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)logCounterValuesForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSuggestionSavedCount;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)willViewMemoriesFeedView;
- (void)didFinishViewingDetailsWithCurrentContext:(id)a0;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)didPlayMovieForAssetCollection:(id)a0;
- (void)logViewCountForLogSubSubState:(unsigned long long)a0;
- (void)logNavigationListViewTapWithKey:(struct __CFString { } *)a0;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)didFinishViewingMemoriesFeedView;
- (void)logCounterValuesForLogSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)didCreateMemoryViaAddToMemories;
- (void)didNavigateInOneUpFromOrigin:(long long)a0;
- (void)logForYouInboxItemSelectedWithType:(long long)a0;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)didPresentOneUpFromOrigin:(long long)a0;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void).cxx_destruct;
- (void)logCounterValuesForLogState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouMemoriesFeedCount;
- (struct __CFString { } *)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)a0 librarySize:(long long)a1;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)a0 duration:(double)a1;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)a0 totalJumpCount:(unsigned long long)a1;
- (void)logImpressionCountForEventSource:(unsigned long long)a0;
- (void)logForYouInboxViewedCount;
- (void)logForYouSuggestionViewedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logViewCountForLogState:(unsigned long long)a0;
- (void)_logAggdDurationCounterForLogSubSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)didConfirmDeleteOfMemory;
- (BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)a0;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { } *)a0;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)a0 duration:(double)a1;
- (void)logFirstTimeExpericeReadiness:(BOOL)a0 forLibrarySize:(long long)a1;
- (void)_resetDetailViewTraversalStatistics;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)willViewDetailsWithCurrentContext:(id)a0;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { } *)a0 value:(long long)a1;
- (void)didFavoriteMemory;
- (void)logViewCountForLogSubState:(unsigned long long)a0;

@end
