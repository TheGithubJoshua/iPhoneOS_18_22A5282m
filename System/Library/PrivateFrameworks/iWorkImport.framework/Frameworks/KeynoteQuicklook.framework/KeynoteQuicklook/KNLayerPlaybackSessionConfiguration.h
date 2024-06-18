@class KNAnimationScreenEnvironment;
@protocol KNPlaybackLayerHost;

@interface KNLayerPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    KNAnimationScreenEnvironment *_screenEnvironment;
    BOOL _isMetalEnabled;
    BOOL _isSceneRenderingEnabled;
    id<KNPlaybackLayerHost> _layerHost;
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)layerHost;
- (struct CGColorSpace { } *)colorSpace;
- (void).cxx_destruct;
- (id)description;
- (double)pixelAspectRatio;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithLayerHost:(id)a0 isMetalEnabled:(BOOL)a1 isSceneRenderingEnabled:(BOOL)a2;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;

@end
