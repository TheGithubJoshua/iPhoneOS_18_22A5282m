@class NSString;
@protocol VKMapViewCameraDelegate;

@interface VKCameraDelegateMediator : NSObject <VKMapViewCameraDelegate> {
    unsigned long long _regionChangeCount;
}

@property (weak, nonatomic) id<VKMapViewCameraDelegate> cameraDelegate;
@property (nonatomic) BOOL isChangingMapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapLayerPresentationForAnnotation:(id)a0;
- (void)mapLayerNavigationCameraHasStoppedPanning;
- (id)init;
- (void)mapLayerNavigationCameraDidReturnToDefaultZoom;
- (void)mapLayerNavigationCameraHasStartedPanning;
- (void)mapLayerDidChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerDidChangeVisibleRegion;
- (void)mapLayerCanEnter3DModeDidChange:(BOOL)a0;
- (void)mapLayerDidBecomePitched:(BOOL)a0;
- (void)mapLayerCanZoomOutDidChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)mapLayerWasUnableToAnimate;
- (void)mapLayerCanZoomInDidChange:(BOOL)a0;
- (void)mapLayerMuninAvailabilityDidChange:(long long)a0;
- (void)mapLayerNavigationCameraDidLeaveDefaultZoom;
- (void)mapLayerDidFinishInitialTrackingAnimation;
- (void)mapLayerWillChangeRegionAnimated:(BOOL)a0;
- (void)mapLayerWillAnimateToLocation:(struct { double x0; double x1; })a0;

@end
