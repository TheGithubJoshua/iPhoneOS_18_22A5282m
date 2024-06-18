@class NSMutableDictionary;

@interface NCMaterialDisplayingCaptureOnlyViewController : UIViewController {
    NSMutableDictionary *_supplementaryMaterialsAndUsageCounts;
}

- (id)init;
- (void)loadView;
- (void)_registerMaterialDisplaying:(BOOL)a0 forDisplaying:(id)a1 persistent:(BOOL)a2;
- (void)unregisterMaterialDisplaying:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)_supportsCaptureForMaterialDisplaying:(id)a0;
- (void)registerMaterialDisplaying:(id)a0 persistent:(BOOL)a1;

@end
