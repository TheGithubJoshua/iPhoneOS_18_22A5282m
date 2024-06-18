@class RSPointCloud, RSTemporalMeta;

@interface RSOfflineKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
}

- (void)run:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)pointCloud;
- (id)sortKeyframesByTimestamp:(id)a0;
- (id)temporalMeta;

@end
