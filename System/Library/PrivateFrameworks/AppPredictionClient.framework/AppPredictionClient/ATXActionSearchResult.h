@class ATXAction, ATXActionResponse, ATXHeroData, ATXProactiveSuggestion;

@interface ATXActionSearchResult : SFSearchResult

@property (retain, nonatomic) ATXActionResponse *actionResponse;
@property (readonly, nonatomic) ATXAction *atxAction;
@property (readonly, nonatomic) ATXHeroData *heroApp;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

+ (BOOL)supportsSecureCoding;
+ (id)_unarchiveObjectFromSuggestion:(id)a0;
+ (id)actionSearchResultFromProactiveSuggestion:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (BOOL)_demoModeEnabled;
+ (id)actionResponseForDeveloperModeWithClientId:(id)a0 shouldShowRecentDonations:(BOOL)a1;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)a0;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2 withClientModelId:(id)a3;
+ (id)actionResponseForDeveloperMode;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(BOOL)a0 shouldShowParameterCombinations:(BOOL)a1 shouldShowUpcomingMedia:(BOOL)a2;
+ (id)generatedSearchResultForProactiveSuggestion:(id)a0 actionResponse:(id)a1;
+ (BOOL)shouldDisplayUpcomingMediaForTesting;
+ (id)generatedSearchResultForAction:(id)a0 actionResponse:(id)a1;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)a0 withClientModelId:(id)a1;
+ (id)predictedActionSearchResultsWithLimit:(long long)a0 forBundleIdentifiers:(id)a1;
+ (BOOL)shouldDisplayValidParameterCombinations;
+ (id)_demoModeActionResponse;
+ (id)mostRecentDonationParameterCombinations;
+ (id)actionSearchResultFromScoredAction:(id)a0 actionResponse:(id)a1 avRoutingSessionHelper:(id)a2 nowPlayingDataProvider:(id)a3;
+ (BOOL)shouldDisplayRecentActionsOnHomeScreen;
+ (BOOL)shouldDisplayRecentDonationsForTesting;
+ (id)recentUpcomingMedia;
+ (id)recentDonationsStarting:(id)a0 end:(id)a1 number:(unsigned long long)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateInlineCardWithContent:(id)a0;
- (BOOL)isEqualToActionSearchResult:(id)a0;
- (void)setAtxAction:(id)a0;
- (void)setHeroApp:(id)a0;
- (void)setProactiveSuggestion:(id)a0;

@end
