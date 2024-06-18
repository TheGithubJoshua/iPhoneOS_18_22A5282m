@class NSString, NSArray;

@interface FCPublisherTopicFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *publisherTagID;
@property (retain, nonatomic) NSString *topicTagID;
@property (readonly, nonatomic) NSArray *features;

- (id)init;
- (id)initWithPersonalizationIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublisherTagID:(id)a0 topicTagID:(id)a1;

@end
