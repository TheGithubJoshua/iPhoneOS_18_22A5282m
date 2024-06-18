@class NSString, NSNumber, NSSet;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying>

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *durationInSeconds;
@property (copy, nonatomic) NSSet *genres;
@property (copy, nonatomic) NSString *source;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEventMetadata:(id)a0;
- (id)initWithDuetKnowledgeEvent:(id)a0;

@end
