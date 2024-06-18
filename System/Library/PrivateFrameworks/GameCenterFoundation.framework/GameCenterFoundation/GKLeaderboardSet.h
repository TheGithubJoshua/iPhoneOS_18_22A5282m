@class NSString, NSArray, GKLeaderboardSetInternal;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSArray *leaderboardIdentifiers;
@property (retain) GKLeaderboardSetInternal *internal;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (void)loadLeaderboardSetsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id /* block */)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (void)loadLeaderboardsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadLeaderboardsForGame:(id)a0 forPlayer:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)a0;
- (void)loadLeaderboardsWithHandler:(id /* block */)a0;

@end
