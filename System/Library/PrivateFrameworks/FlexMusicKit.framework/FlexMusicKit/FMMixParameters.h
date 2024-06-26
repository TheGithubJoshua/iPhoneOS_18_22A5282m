@class NSMutableArray;

@interface FMMixParameters : NSObject

@property (retain, nonatomic) NSMutableArray *volumeKeyFrames;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)appendVolumeKeyframe:(id)a0;
- (void)insertVolumeKeyframe:(id)a0;
- (id)lastVolumeKeyFrame;
- (BOOL)removeRedundantVolumeKeyFrames;
- (BOOL)volumeKeyframesAreValid;
- (float)volumeValueAtTime:(long long)a0;

@end
