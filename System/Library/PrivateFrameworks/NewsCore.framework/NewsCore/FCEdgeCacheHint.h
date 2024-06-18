@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *cacheControlKey;

+ (id)edgeCacheHintForToday;
+ (id)edgeCacheHintForAudioContent;
+ (id)edgeCacheHintForEvergreenArticles;
+ (id)edgeCacheHintForSportsArticles;
+ (id)edgeCacheHintForTopStories;
+ (id)edgeCacheHintForCurrentIssueArticles;
+ (id)edgeCacheHintForSpotlight;
+ (id)edgeCacheHintForCurrentIssues;
+ (id)edgeCacheHintForEditorial;
+ (id)edgeCacheHintForForYouConfig;
+ (id)edgeCacheHintForLocalNews;
+ (id)edgeCacheHintForTrending;
+ (id)edgeCacheHintForMagazineContent;
+ (id)edgeCacheHintForFeaturedArticles;

- (id)initWithGroupName:(id)a0 cacheControlKey:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
