@interface AppStoreKitInternal.JSGameCenter : NSObject <_TtP19AppStoreKitInternalP33_7B7F80098AC69273DB70D2D7451E823519JSGameCenterExports_> {
    void /* unknown type, empty encoding */ dataProvider;
}

- (id)init;
- (id)fetchRecentlyPlayedGamesWithinSeconds:(id)a0 :(long long)a1 :(long long)a2;
- (id)fetchActivityFeedCards:(id)a0 :(long long)a1;
- (void).cxx_destruct;
- (id)fetchRengagementDataForLocalPlayer;
- (id)fetchActivityFeed:(id)a0;
- (id)fetchSuggestedFriends:(long long)a0;
- (id)fetchFriendsThatPlayGame:(id)a0;
- (id)fetchAchievementSummaryForGame:(id)a0;
- (id)fetchGamesPopularWithFriends:(id)a0 :(long long)a1;

@end
