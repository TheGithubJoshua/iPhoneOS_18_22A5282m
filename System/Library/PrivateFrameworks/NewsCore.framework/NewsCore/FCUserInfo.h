@class NSString, FCTagSettings, NSDictionary, NSDate, NSNumber, FCMTWriterLock;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}

@property (class, readonly, nonatomic) unsigned long long progressivePersonalization;

@property (copy, nonatomic) NSNumber *onboardingVersionNumber;
@property (copy, nonatomic) NSString *feldsparID;
@property (readonly, copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *adsUserID;
@property (copy, nonatomic) NSString *sportsUserID;
@property (copy, nonatomic) NSDate *dateLastOpened;
@property (retain, nonatomic) FCTagSettings *tagSettings;
@property (copy, nonatomic) NSDate *userStartDate;
@property (readonly, nonatomic) BOOL useParsecResults;
@property (readonly, nonatomic) BOOL shouldShowDefaultForYou;
@property (readonly, nonatomic) unsigned long long progressivePersonalization;
@property (nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick;
@property (nonatomic) BOOL userHasCompletedFavoritesSetup;
@property (copy, nonatomic) NSDate *newsletterSignupLastSeenDate;
@property (copy, nonatomic) NSString *editorialArticleVersion;
@property (copy, nonatomic) NSString *canonicalLanguage;
@property (nonatomic) BOOL marketingNotificationsEnabled;
@property (nonatomic) BOOL newIssueNotificationsEnabled;
@property (nonatomic) BOOL endOfAudioTrackNotificationsEnabled;
@property (nonatomic) long long sportsOnboardingState;
@property (readonly, nonatomic) NSDate *sportsOnboardingCompletedDate;
@property (nonatomic) long long sportsSyncState;
@property (readonly, nonatomic) NSDate *sportsSyncStateLastSavedDate;
@property (nonatomic) long long shortcutsOnboardingState;
@property (readonly, nonatomic) NSDate *shortcutsOnboardingStateCompletedDate;
@property (copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property (copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property (copy, nonatomic) NSDate *appLaunchUpsellLastSeenDate;
@property (copy, nonatomic) NSString *appLaunchUpsellLastShownCampaignID;
@property (copy, nonatomic) NSString *appLaunchUpsellLastPresenterBundleID;
@property (readonly, nonatomic) BOOL mightNeedToUpdateOnboardingVersion;
@property (readonly, nonatomic) NSDate *dateLastViewedSaved;
@property (readonly, nonatomic) NSDate *dateLastViewedSharedWithYou;
@property (copy, nonatomic) NSDate *postPurchaseOnboardingLastShownDate;
@property (copy, nonatomic) NSDate *appReviewRequestLastShownDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (unsigned long long)localStoreVersion;
+ (id)overrideFeldsparID;
+ (id)backingRecordZoneIDs;
+ (id)commandStoreFileName;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;

- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)accessTokenDidChangeForTagID:(id)a0;
- (void)accessTokenRemovedForTagID:(id)a0 userInitiated:(BOOL)a1;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)a0;
- (void)markSavedAsViewed;
- (void)markSharedWithYouAsViewed;
- (void)maybeUpdateOnboardingVersion:(id /* block */)a0;
- (void)prepareForUse;
- (void)refreshOnboardingVersion:(id /* block */)a0;
- (void)updateOnboardingVersion;

@end
