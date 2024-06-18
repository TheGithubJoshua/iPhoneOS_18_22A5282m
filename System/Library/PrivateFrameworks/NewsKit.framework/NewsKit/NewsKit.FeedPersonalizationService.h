@interface NewsKit.FeedPersonalizationService : NSObject <FCTagRanking, FCFeedPersonalizing, FCPersonalizedGrouping>

- (id)sortItems:(id)a0 options:(long long)a1;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (id)sortItems:(id)a0;
- (id)bestOfGroupFromFeedItems:(id)a0 scoreProfiles:(id)a1 configurationSet:(long long)a2;
- (double)decayedPublisherDiversificationPenalty;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)scoresForTagIDs:(id)a0;
- (id)rankTagIDsDescending:(id)a0;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (id)bestOfGroupFromHeadlines:(id)a0 configurationSet:(long long)a1;
- (id)init;

@end
