@class NSArray, AVScheduledAudioParametersInternal;

@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}

@property (copy, nonatomic, getter=_ramps, setter=_setRamps:) NSArray *ramps;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_audioVolumeCurve;
- (void)_setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;
- (id)_volumeCurveAsString;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3 rampMode:(long long *)a4;

@end