@class NSSet, NSNumber, MPPlaybackArchive;

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction <NSCopying>

@property (copy, nonatomic) NSSet *mediaProfiles;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSNumber *volume;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;

- (void)setState:(long long)a0;
- (void)setVolume:(id)a0;
- (void)setMediaProfiles:(id)a0;
- (void)setPlaybackArchive:(id)a0;

@end
