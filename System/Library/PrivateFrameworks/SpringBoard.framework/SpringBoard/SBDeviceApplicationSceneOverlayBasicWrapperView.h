@interface SBDeviceApplicationSceneOverlayBasicWrapperView : UIView <SBDeviceApplicationSceneOverlayView>

@property (nonatomic) long long hostOrientation;
@property (nonatomic) BOOL shouldLayoutOverlayImmediatelyForContainerGeometryChange;
@property (readonly, nonatomic) BOOL needsCounterRotation;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
