@interface MTPartialFeedResponse : PodcastsFoundation.BaseFeedResponse

- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
