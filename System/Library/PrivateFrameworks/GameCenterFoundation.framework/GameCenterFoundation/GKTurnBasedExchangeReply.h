@class NSDate, NSString, NSData, GKTurnBasedExchangeReplyInternal, GKTurnBasedParticipant, GKTurnBasedMatch;

@interface GKTurnBasedExchangeReply : NSObject

@property (retain, nonatomic) GKTurnBasedParticipant *recipient;
@property (retain, nonatomic) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSDate *replyDate;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;

- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)hash;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;

@end
