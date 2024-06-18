@class PVTransformAnimation, AVTimedMetadataGroup;

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (nonatomic) int transformAnimationContentMode;
@property (nonatomic) int textureWrapMode;
@property (retain, nonatomic) AVTimedMetadataGroup *timedMetadataGroup;
@property (nonatomic) BOOL isOverlayTrack;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isPortrait;
- (id)instructionGraphNodeDescription;
- (struct HGRef<HGNode> { struct HGNode *x0; })applyWrapModeToInput:(struct HGRef<HGNode> { struct HGNode *x0; })a0;
- (id)getAllSourceNodes;

@end
