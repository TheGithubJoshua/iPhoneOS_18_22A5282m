@class NSString;

@interface VUINowPlayingObservation : NSObject

@property (nonatomic, getter=isPlaying) BOOL playing;
@property (copy, nonatomic) NSString *nowPlayingAppBundleIdentifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 isPlaying:(BOOL)a1;

@end
