@class CLSilo, NSString, NSMutableSet, CLLocationManager, CLTimer, CLLocationManagerStateTracker;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerInternal : NSObject {
    struct __CLClient { } *fClient;
    CLLocationManagerStateTracker *fState;
    struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; double ellipsoidalAltitude; BOOL fromSimulationController; } fLocation;
    NSString *fLocationEventType;
    CLTimer *fLocationRequestTimer;
    double fLocationRequestTimeout;
    CLTimer *fRangingRequestTimer;
    double fLastRangingRequestTimeout;
    unsigned long long fLastRangingRequestMachTime;
    int fHeadingOrientation;
    id /* block */ fPlaceInferenceHandler;
    unsigned long long fFidelityPolicy;
    CLTimer *fPlaceInferenceTimer;
    CLSilo *fSilo;
}

@property (readonly, nonatomic) NSMutableSet *rangedRegions;
@property (readonly, nonatomic) NSMutableSet *rangedConstraints;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (weak, nonatomic) CLLocationManager *manager;

- (void)setPausesLocationUpdatesAutomatically:(int)a0;
- (void)setShowsBackgroundLocationIndicator:(BOOL)a0;
- (BOOL)allowsBackgroundLocationUpdates;
- (BOOL)hasLingeringRangingRequest;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)a0;
- (void)cancelRangingRequest;
- (int)PausesLocationUpdatesAutomatically;
- (BOOL)showsBackgroundLocationIndicator;
- (id)initWithInfo:(id)a0 bundleIdentifier:(id)a1 bundlePath:(id)a2 websiteIdentifier:(id)a3 delegate:(id)a4 silo:(id)a5;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stopUpdatingLocationAutoPaused;
- (void)dealloc;
- (void)performCourtesyPromptIfNeeded;
- (void)cancelLocationRequest;
- (void)cancelLingeringRangingRequest;

@end
