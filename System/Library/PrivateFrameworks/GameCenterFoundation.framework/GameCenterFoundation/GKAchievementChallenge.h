@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge

@property (retain, nonatomic) GKAchievement *achievement;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (id)titleText;
- (void)setInternal:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInternalRepresentation:(id)a0;
- (BOOL)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;
- (id)detailGoalTextForPlayer:(id)a0 withAchievement:(id)a1;

@end
