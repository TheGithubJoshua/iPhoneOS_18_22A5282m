@class NSString, NSAttributedString, UIImage;

@interface NUFeedTitleViewUpdate : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long updateType;
@property (nonatomic) unsigned long long storyCount;
@property (copy, nonatomic) NSString *feedName;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIImage *feedImage;
@property (nonatomic) double lingerTimeInterval;
@property (copy, nonatomic) NSString *accessibilityTitle;

+ (id)feedTitleViewUpdateCheckingForNewStoriesForType:(unsigned long long)a0;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)a0 storyCount:(unsigned long long)a1 linger:(BOOL)a2;
+ (id)feedTitleViewUpdateEmptyStateForType:(unsigned long long)a0;
+ (id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)a0;
+ (id)feedTitleViewUpdateForCheckingForUpdates;
+ (id)feedTitleViewUpdateForCheckingForNewStories;
+ (id)feedTitleViewUpdateForAttributedText:(id)a0 forType:(unsigned long long)a1;
+ (id)feedTitleViewUpdateEmptyState;
+ (id)feedTitleViewUpdateForFeedImage:(id)a0 accessibilityTitle:(id)a1;
+ (id)feedTitleViewUpdateForFeedName:(id)a0;
+ (id)feedTitleViewUpdateCheckingForUpdatesForType:(unsigned long long)a0;
+ (id)feedTitleViewUpdateNewStoriesWithStoryForType:(unsigned long long)a0 storyCount:(unsigned long long)a1;
+ (id)feedTitleViewUpdateForAttributedText:(id)a0;

- (id)init;
- (id)initWithType:(unsigned long long)a0 updateType:(unsigned long long)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)convertToTitleViewUpdateWithCompact:(BOOL)a0;

@end
