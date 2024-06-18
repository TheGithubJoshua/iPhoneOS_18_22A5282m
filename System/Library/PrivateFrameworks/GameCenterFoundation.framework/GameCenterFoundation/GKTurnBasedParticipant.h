@class NSString, GKPlayer, GKTurnBasedParticipantInternal, NSDate;

@interface GKTurnBasedParticipant : NSObject

@property (readonly) GKTurnBasedParticipantInternal *internal;
@property (copy, nonatomic) NSDate *lastTurnDate;
@property (copy, nonatomic) NSDate *timeoutDate;
@property (readonly, nonatomic) NSString *matchStatusString;
@property (readonly, nonatomic) BOOL isWinner;
@property (readonly, nonatomic) GKPlayer *invitedBy;
@property (readonly, nonatomic) NSString *inviteMessage;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) long long status;
@property (nonatomic) long long matchOutcome;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (BOOL)matchOutcomeIsValidForDoneState:(long long)a0;
+ (id)stringForMatchOutcome:(long long)a0 totalParticipant:(long long)a1;

- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setStatus:(long long)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)playerID;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)player;
- (id)valueForUndefinedKey:(id)a0;
- (id)invitedBy;
- (id)initWithInternalRepresentation:(id)a0;
- (id)lastTurnDate;
- (id)matchOutcomeString:(long long)a0;
- (id)matchOutcomeStringForLocalPlayer:(long long)a0;
- (id)basicMatchOutcomeString:(long long)a0;

@end
