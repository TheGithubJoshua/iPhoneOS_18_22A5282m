@class NSString, SLInteractionHandler, SLHighlightsCache, NSArray, NSDate;
@protocol SLHighlightCenterDelegate, SLHighlightCenterAPIAdapting;

@interface SLHighlightCenter : NSObject <SLHighlightCacheDelegate>

@property (class, readonly, nonatomic) NSString *displayName;

@property (readonly, weak, nonatomic) id<SLHighlightCenterAPIAdapting> apiAdapterDelegate;
@property (retain, nonatomic) SLInteractionHandler *interactionHandler;
@property (readonly, nonatomic) int notificationTokenSettingsChanges;
@property (readonly, nonatomic) int notificationTokenAppSettingsChanges;
@property (retain, nonatomic) SLHighlightsCache *highlightsCache;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) double highlightsRankingScore;
@property (retain, nonatomic) NSString *variant;
@property (weak, nonatomic) id<SLHighlightCenterDelegate> delegate;
@property (readonly, nonatomic) double decay;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *latestHighlightDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAutomaticSharingEnabled;
+ (void)shouldShowOnboardingShieldViewForNearbyDevice:(id /* block */)a0;
+ (BOOL)isEnabled;
+ (id)SLVariantNewsToday;
+ (BOOL)_isShareWithYouEnabled;
+ (BOOL)_isShareWithYouOnboarded;
+ (id)rapportClient;
+ (BOOL)_bundleIDExistsInPreferences:(id)a0;
+ (BOOL)shouldShowOnboardingShieldView;
+ (void)_checkAndInitializeBundleIDToAppPreferences:(id)a0;
+ (id)SLVariantDefault;
+ (id)highlightCenterQueue;

- (void)_legacyNotifyDelegateDidAddHighlights;
- (id)init;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void)enablementStateChanged;
- (void)appEnablementStateChanged;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (id)_initWithAppIdentifier:(id)a0 apiAdapterDelegate:(id)a1;
- (void)_registerNotifications;
- (void)runAfterInitialFetch:(id /* block */)a0 onQueue:(id)a1;
- (id)initWithAppIdentifier:(id)a0 apiAdapterDelegate:(id)a1;
- (id)variantForHighlightsCache;
- (void).cxx_destruct;
- (void)updateHighlights;
- (void)_legacyNotifyDelegateDidRemoveHighlights:(id)a0;
- (void)_notifyAPIAdapterDelegateHighlightsChanged;
- (void)highlightsChanged;
- (id)appIdentifierForHighlightsCache;
- (id)fetchAttributionsForHighlight:(id)a0;
- (void)fetchHighlights:(id /* block */)a0;
- (id)initWithAppIdentifier:(id)a0;
- (void)fetchHighlightsWithLimit:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)legacyDidAddHighlights;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1;
- (void)dealloc;
- (void)legacyDidRemoveHighlights:(id)a0;
- (void)_fetchHighlightsWithLimit:(unsigned long long)a0 completionBlock:(id /* block */)a1;

@end
