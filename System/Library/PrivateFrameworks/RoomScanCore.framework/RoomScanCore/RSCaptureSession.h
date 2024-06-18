@class NSDate, RSOnlineFloorPlanGenerator, RSScanCoaching, NSArray, RSInternalInfoDumper, NSMutableDictionary, RSFloorPlanBoundaryRefinement, RSCaptureConfiguration, NSObject, OS_os_workgroup, RSFloorPlan, RSDriftDetection;
@protocol OS_dispatch_semaphore, RSCaptureSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface RSCaptureSession : NSObject {
    RSCaptureConfiguration *_configuration;
    RSOnlineFloorPlanGenerator *_fpGenerator;
    NSObject<OS_dispatch_queue> *_fpQueue;
    NSMutableDictionary *_allKeyframes;
    NSArray *_updateKeyframes;
    NSDate *_fpStartDate;
    NSObject<OS_dispatch_queue> *_coachingQueue;
    RSScanCoaching *_textCoaching;
    NSDate *_coachingStartDate;
    RSDriftDetection *_driftDetection;
    NSObject<OS_dispatch_queue> *_mirrorPointQueue;
    RSFloorPlan *_floorPlan;
    RSFloorPlan *_refinedFloorPlan;
    NSArray *_detectedObjects;
    NSObject<OS_dispatch_source> *_memoryMonitorSource;
    BOOL _memoryMonitorSuspended;
    NSObject<OS_dispatch_semaphore> *_fpSemaphore;
    NSObject<OS_dispatch_semaphore> *_coachingSemaphore;
    NSObject<OS_dispatch_semaphore> *_mirrorPointSemaphore;
    RSInternalInfoDumper *_debugDumper;
    OS_os_workgroup *_workgroupFloorPlan;
    OS_os_workgroup *_workgroupCoaching;
    OS_os_workgroup *_workgroupMirror;
    NSObject<OS_dispatch_semaphore> *_boundaryRefinementSemaphore;
    RSFloorPlanBoundaryRefinement *_boundaryRefinement;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    OS_os_workgroup *_workgroupReadWrite;
}

@property (weak, nonatomic) id<RSCaptureSessionDelegate> delegate;

- (id)init;
- (void)stop;
- (void)runWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithFrame:(id)a0;
- (id)getDebugInfo;
- (void)setUpInternalDumpWithLogDir:(id)a0 enable:(BOOL)a1;
- (void)updateWithKeyframes:(id)a0;
- (void)updateWithObjects:(id)a0;
- (void)_processInfoThermalStateDidChangeNotification:(id)a0;
- (id)exportAsset;
- (id)generateFloorPlanWithKeyframes:(id)a0 objects:(id)a1;
- (void)generateMirrorPointWithFrame:(id)a0;
- (void)listenToAvailableMemory;
- (void)listenToThermalState;
- (void)refineBoundaryWithFrame:(id)a0;
- (id)standardizeFloorPlan:(id)a0;
- (void)updateCoachingWithFrame:(id)a0;
- (void)updateMirrorPointWithFrame:(id)a0;
- (BOOL)validateDepthOfRSFrame:(id)a0;

@end
