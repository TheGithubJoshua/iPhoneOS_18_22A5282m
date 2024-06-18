@class CAMPerformanceTestPlan;

@interface CAMApplication : UIApplication

@property (retain, nonatomic) CAMPerformanceTestPlan *currentTestPlan;

- (void)prepareForDefaultImageSnapshotForScreen:(id)a0;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (void)willOpenViewfinderForReason:(long long)a0;
- (void)didOpenViewfinderForReason:(long long)a0;
- (BOOL)runSwitchCamerasTestWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runSwitchModesWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (void)willCloseViewfinderForReason:(long long)a0;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)a0;
- (BOOL)runTakePictureFrontPortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (void)_configureExtendedLaunchTestIfNeeded;
- (void)didChangeToMode:(long long)a0 device:(long long)a1;
- (id)_extendLaunchTest;
- (void).cxx_destruct;
- (BOOL)runTakeVideoTestWithTestPlan:(id)a0 options:(id)a1 userPreferencesOverrides:(id)a2;
- (BOOL)runNewPPTUICaptureTestWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runLibrarySelectionWithTestPlan:(id)a0 options:(id)a1;
- (void)_registerPreviewStartBlock:(id /* block */)a0;
- (void)didCloseViewfinderForReason:(long long)a0;
- (BOOL)runPresentCameraRollWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runTakePictureTestWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;
- (BOOL)runTakePicturePortraitWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2;
- (BOOL)runSwitchToPortraitFrontWithTestPlan:(id)a0 options:(id)a1;
- (BOOL)runTakePictureFrontCameraWithTestPlan:(id)a0 options:(id)a1 prototype:(id)a2 forCaptureMode:(long long)a3;

@end
