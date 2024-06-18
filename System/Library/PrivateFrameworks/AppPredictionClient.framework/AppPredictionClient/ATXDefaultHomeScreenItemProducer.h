@class NSSet, NSDictionary, NSArray, NSMutableDictionary, CHSWidgetDescriptor, ATXDefaultHomeScreenItemUpdate;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemProducer : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}

@property (class, readonly, nonatomic) CHSWidgetDescriptor *appPredictionsWidgetDescriptor;

@property (readonly, nonatomic) NSSet *descriptors;
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates;
@property (readonly, nonatomic) NSArray *homeScreenConfig;
@property (nonatomic) BOOL isDayZeroExperience;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) unsigned long long adblDrainClassification;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (retain, nonatomic) NSArray *candidateDescriptors;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;

- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (BOOL)_isNewlyInstalledWidget:(id)a0;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)a0;
- (id)_personalizedStackFromCandidates:(id)a0 rankerPlistType:(int)a1 size:(unsigned long long)a2;
- (id)_stackableCandidates;
- (id)_firstInstalledWidgetDate;
- (id)_dayZeroUpdate;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 appLaunchCounts:(id)a6;
- (id)_stackFromDefaultStackPersonalities:(id)a0;
- (id)_dayZeroOnboardingStacks;
- (id)_personalizedStackForRankerPlistType:(int)a0;
- (void).cxx_destruct;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(BOOL)a0 isAlreadyAdded:(BOOL)a1;
- (id)onboardingStacks;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 adblDrainClassification:(unsigned long long)a6 appLaunchCounts:(id)a7;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (id)_personalizedStack;
- (id)_appPredictionsWidgetDescriptor;
- (id)_personalizedUpdate;
- (BOOL)_isStackConfiguredOnHomeScreen;
- (id)_personalizedTodayStack;

@end
