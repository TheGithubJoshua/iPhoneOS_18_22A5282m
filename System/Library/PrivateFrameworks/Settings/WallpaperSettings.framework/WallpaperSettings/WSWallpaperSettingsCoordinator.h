@class UINavigationController, WSWallpaperSettingsCoordinatorInternal;

@interface WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator>

@property (retain, nonatomic) WSWallpaperSettingsCoordinatorInternal *_storage;
@property (readonly, weak, nonatomic) UINavigationController *navigationController;

- (void)start;
- (void).cxx_destruct;
- (id)initWithNavigationController:(id)a0;
- (BOOL)runTestWithTestName:(id)a0 options:(id)a1;

@end
