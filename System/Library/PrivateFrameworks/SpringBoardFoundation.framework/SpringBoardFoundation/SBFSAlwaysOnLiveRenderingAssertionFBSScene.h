@class FBSScene;

@interface SBFSAlwaysOnLiveRenderingAssertionFBSScene : SBFAlwaysOnLiveRenderingSceneBLSAttributesProvider {
    FBSScene *_scene;
}

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (id)assertionAttributes;

@end
