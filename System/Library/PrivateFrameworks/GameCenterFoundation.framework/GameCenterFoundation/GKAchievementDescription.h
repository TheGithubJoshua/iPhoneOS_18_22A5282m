@class UIImage, GKAchievementInternal, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (retain) GKAchievementInternal *internal;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *groupIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *achievedDescription;
@property (readonly, copy, nonatomic) NSString *unachievedDescription;
@property (readonly, nonatomic) long long maximumPoints;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isReplayable) BOOL replayable;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)_achievementDescriptionFromGame:(id)a0 propertyListDictionary:(id)a1;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)a0;
+ (void)loadAchievementDescriptionsForGame:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)a0;

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
- (id)game;
- (id)imageNameForIcon;

@end
