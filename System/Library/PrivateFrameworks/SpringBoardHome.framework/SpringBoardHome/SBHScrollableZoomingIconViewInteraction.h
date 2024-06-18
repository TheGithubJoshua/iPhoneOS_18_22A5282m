@interface SBHScrollableZoomingIconViewInteraction : SBHScrollableIconViewInteraction

@property (nonatomic) BOOL considersFolderIconTargets;

- (void)handleTargetIconViewClipped:(id)a0;
- (double)_clippingFudgeInset;
- (BOOL)isIconViewTheInteractingTargetIconView:(id)a0;

@end
