@class SBSystemApertureSceneElementAccessoryPortalView;

@interface SBSystemApertureSceneElementAccessoryView : UIView

@property (readonly, nonatomic) SBSystemApertureSceneElementAccessoryPortalView *portalView;
@property (nonatomic) unsigned long long layerRenderingId;
@property (nonatomic) unsigned int sourceContextId;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSourceLayerRenderingId:(unsigned long long)a0 contextId:(unsigned int)a1;
- (void)_configurePortalLayerWithSourceLayerRenderingId:(unsigned long long)a0 contextId:(unsigned int)a1;
- (void)_configurePortalView;
- (BOOL)allowsReparentingByLayoutHost;

@end
