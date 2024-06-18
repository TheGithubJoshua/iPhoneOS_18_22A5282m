@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier;

- (long long)longLongValue;
- (id)numberValue;
- (unsigned long long)hash;
- (id)initWithLongLong:(long long)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNumber:(id)a0;
- (id)initWithPodcastFeedURL:(id)a0;

@end
