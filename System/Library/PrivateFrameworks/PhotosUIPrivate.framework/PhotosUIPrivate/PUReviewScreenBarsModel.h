@class NSSet, NSDictionary, UIView;

@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel>

@property (nonatomic, setter=_setNeedsUpdateAvailableControls:) BOOL _needsUpdateAvailableControls;
@property (retain, nonatomic, setter=_setAvailableControls:) NSSet *availableControls;
@property (retain, nonatomic, setter=_setEnabledControls:) NSSet *enabledControls;
@property (readonly, copy, nonatomic) NSDictionary *availableItemsByIdentifier;
@property (readonly, nonatomic) BOOL shouldPlaceScrubberInScrubberBar;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic, getter=isTransitioningWithCamera) BOOL transitioningWithCamera;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } controlCenterAlignmentPoint;
@property (readonly, nonatomic) BOOL lastControlAlignmentChangeForcedLayout;
@property (readonly, nonatomic) BOOL useVerticalControlLayout;
@property (readonly, nonatomic) BOOL shouldBarsCounterrotate;

- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)setAccessoryView:(id)a0;
- (void).cxx_destruct;
- (void)setShouldPlaceScrubberInScrubberBar:(BOOL)a0;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateAvailableControls;
- (void)invokeCallbackForBarButtonItemWithIdentifier:(long long)a0;
- (void)setAvailableItemsByIdentifier:(id)a0;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x0; double x1; })a0 forceLayout:(BOOL)a1;
- (void)setShouldBarsCounterrotate:(BOOL)a0;
- (void)setTransitioningWithCamera:(BOOL)a0;
- (void)setUseVerticalControlLayout:(BOOL)a0;

@end
