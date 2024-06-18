@class BMPOICategoryStream;

@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream *_poiCategoryStream;
}

- (id)poiCategoryStreamPublisher;
- (void)donateHeroPoiPredictions:(id)a0;
- (id)poiCategoryPublisherBookmark;
- (id)currentPoiCategory;
- (void).cxx_destruct;
- (void)logCompletion:(id)a0;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)cachedPoiCategory;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)poiCategoryStream;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 timeIntervalSince1970:(double)a2;

@end
