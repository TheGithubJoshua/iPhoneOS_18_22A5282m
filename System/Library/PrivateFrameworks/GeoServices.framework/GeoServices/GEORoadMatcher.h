@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
}

@property (nonatomic) BOOL useRawLocations;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)matchLocation:(id)a0 forTransportType:(int)a1;
- (id)_bestCandidateSegmentForLocation:(id)a0 transportType:(int)a1;

@end
