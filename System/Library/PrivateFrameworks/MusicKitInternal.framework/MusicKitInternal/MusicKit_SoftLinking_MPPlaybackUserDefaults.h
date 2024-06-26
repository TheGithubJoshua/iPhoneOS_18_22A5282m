@class NSString, MPPlaybackUserDefaults;

@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject {
    MPPlaybackUserDefaults *_underlyingPlaybackUserDefaults;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPPlaybackUserDefaults *standardUserDefaults;
@property (class, readonly, nonatomic) NSString *preferredResolutionsDidChangeNotification;

@property (readonly, nonatomic) long long preferredMusicLowBandwidthResolution;
@property (readonly, nonatomic) long long preferredVideoLowBandwidthResolution;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePreferredResolutionsDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingPlaybackUserDefaults:(id)a0;

@end
