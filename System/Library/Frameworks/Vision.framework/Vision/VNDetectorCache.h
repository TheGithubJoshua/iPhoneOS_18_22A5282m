@class NSString, NSMutableSet;
@protocol VNDetectorCacheDelegate;

@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing> {
    id<VNDetectorCacheDelegate> _delegate;
    struct { unsigned char reportDidCacheDetector : 1; unsigned char reportDidEvictDetector : 1; } _delegateFlags;
    NSMutableSet *_detectors;
}

@property (retain) id<VNDetectorCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)evictAllDetectors;
- (void)cacheDetector:(id)a0;
- (void).cxx_destruct;
- (id)loadedDetectors;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void)evictDetectorsPassingTest:(id /* block */)a0;

@end
