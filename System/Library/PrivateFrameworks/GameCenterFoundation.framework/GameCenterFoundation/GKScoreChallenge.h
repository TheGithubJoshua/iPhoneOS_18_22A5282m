@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge

@property (readonly, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (id)titleText;
- (void)setInternal:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)detailsLoaded;
- (id)leaderboard;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;
- (id)detailGoalTextForPlayer:(id)a0 withLeaderboard:(id)a1;

@end
