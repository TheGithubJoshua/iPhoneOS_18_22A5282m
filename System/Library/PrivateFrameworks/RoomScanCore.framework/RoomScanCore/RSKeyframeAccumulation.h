@class NSMutableDictionary, RSTemporalMeta, RSPointCloud, NSMutableArray;

@interface RSKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
    unsigned long long _skipCnt;
    NSMutableDictionary *_metas;
    NSMutableArray *_newKeyframes;
    NSMutableArray *_diffKeyframes;
    NSMutableDictionary *_keyframeOrderDict;
}

- (void)run:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)pointCloud;
- (id)diffKeyframes;
- (id)generateKeyframesMeta:(id)a0;
- (id)newKeyframes;
- (id)sortKeyframeMetas:(id)a0;
- (id)sortKeyframesByTimestamp:(id)a0;
- (id)temporalMeta;

@end
