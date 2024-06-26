@class NSCache, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUSpatialAudioPreferencesControllerDelegate;

@interface MRUSpatialAudioPreferencesController : NSObject <MRUSystemOutputDeviceRouteControllerObserver>

@property (retain, nonatomic) NSCache *cache;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (weak, nonatomic) id<MRUSpatialAudioPreferencesControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) BOOL isHeadTrackingSupported;
@property (readonly, nonatomic) int accessoryStereoHFPStatus;
@property (readonly, nonatomic) BOOL isMonoAudioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoring;
- (void)startMonitoring;
- (id)preferenceForBundleID:(id)a0;
- (void)updateSpatialAudioSupported;
- (void)updateHeadTrackedFaceTimeSupport;
- (void)updateHeadTrackingSupported;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void).cxx_destruct;
- (void)setPreferences:(id)a0 forBundleID:(id)a1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)dealloc;
- (void)updateMonoAudioEnabled;
- (void)resetPreferences;
- (void)accessibilityHeadTrackChangedNotification;

@end
