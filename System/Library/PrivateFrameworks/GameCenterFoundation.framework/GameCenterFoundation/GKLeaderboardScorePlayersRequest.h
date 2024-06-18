@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest

@property (copy, nonatomic) NSArray *playerInternals;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
