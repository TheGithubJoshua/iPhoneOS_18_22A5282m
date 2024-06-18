@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    struct CGSize { double width; double height; } _boundsSize;
}

- (id)layerHost;
- (struct CGColorSpace { } *)colorSpace;
- (id)description;
- (double)pixelAspectRatio;
- (struct CGSize { double x0; double x1; })boundsSize;
- (id)configurationWithUpdatedLayerScreenEnvironment;
- (id)initWithOffscreenCGContextBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isMetalEnabled;
- (BOOL)isSceneRenderingEnabled;

@end
