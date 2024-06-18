@class AVMediaSelectionOption, TVPMediaItemLoader, TVImageProxy;

@interface TVPPlayerItem : AVPlayerItem

@property (nonatomic) BOOL audioSelectionIsAutomatic;
@property (retain, nonatomic) AVMediaSelectionOption *savedManualAudioSelection;
@property (weak, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (nonatomic) BOOL muted;
@property (nonatomic) long long previousStatus;
@property (retain, nonatomic) TVImageProxy *posterProxy;
@property (retain, nonatomic) id scrubImageLoader;

- (void).cxx_destruct;
- (void)selectMediaOption:(id)a0 inMediaSelectionGroup:(id)a1;
- (void)dealloc;
- (id)initWithAsset:(id)a0;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)a0;

@end
