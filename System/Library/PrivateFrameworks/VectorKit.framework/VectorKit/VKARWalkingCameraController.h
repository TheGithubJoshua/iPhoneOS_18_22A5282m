@class NSString, _delegate;

@interface VKARWalkingCameraController : VKScreenCameraController <VKGesturingCameraController> {
    void *_arLogic;
    void *_elevationLogic;
    struct Quaternion<double> { struct Matrix<double, 3, 1> { double _e[3]; } _imaginary; double _scalar; } _rotationCorrectionQuaternion;
    struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double _value; } latitude; struct Unit<geo::DegreeUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _coordinate;
    struct EulerAngles { struct Unit<geo::RadianUnitDescription, double> { double _value; } pitch; struct Unit<geo::RadianUnitDescription, double> { double _value; } yaw; struct Unit<geo::RadianUnitDescription, double> { double _value; } roll; } _eulerAngles;
    struct Unit<geo::DegreeUnitDescription, double> { double _value; } _heading;
    struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> { void *__begin_; void *__end_; struct __compressed_pair<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent> *, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> { void *__value_; } __end_cap_; } _gestures;
    struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> { struct { struct { unsigned int identifier; void *metadata; } key; } _key; double _value; _delegate *_listener; struct function<void (double)> { struct __value_func<void (double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } x0; } _maxClipDistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)usesVKCamera;
- (struct { double x0; double x1; })centerCoordinate;
- (double)currentZoomLevel;
- (double)pitch;
- (void)_updateDebugOverlay:(void *)a0;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0 altitude:(double)a1 yaw:(double)a2 pitch:(double)a3 duration:(double)a4 animationStyle:(long long)a5 timingCurve:(id /* block */)a6 completion:(id /* block */)a7;
- (void)setCenterCoordinate:(struct { double x0; double x1; })a0;
- (double)maxPitch;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (void)setDistanceFromCenterCoordinate:(double)a0;
- (void)setPitch:(double)a0;
- (double)altitude;
- (double)heading;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)presentationHeading;
- (void *)_locationProvider;
- (double)minPitch;
- (void)pushGesture:(void *)a0;
- (void)setCamera:(struct shared_ptr<gdc::Camera> { struct Camera *x0; struct __shared_weak_count *x1; })a0;
- (double)topDownMinimumZoomLevel;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)stopTrackingAnnotation;
- (void)setHeading:(double)a0;
- (id)initWithTaskContext:(struct shared_ptr<md::TaskContext> { struct TaskContext *x0; struct __shared_weak_count *x1; })a0 mapDataAccess:(void *)a1 animationRunner:(struct AnimationRunner { struct MapEngine *x0; } *)a2 runLoopController:(struct RunLoopController { struct MapEngine *x0; long long x1; long long x2; } *)a3 cameraDelegate:(id)a4 arLogic:(void *)a5 elevationLogic:(void *)a6;
- (void)startTrackingAnnotation:(id)a0 trackHeading:(BOOL)a1 animated:(BOOL)a2 duration:(double)a3 timingFunction:(id /* block */)a4;
- (void)setVkCamera:(id)a0;
- (void)setAltitude:(double)a0;
- (id)_buildDebugString:(void *)a0;
- (double)distanceFromCenterCoordinate;
- (void)_updateClipPlanes;

@end
