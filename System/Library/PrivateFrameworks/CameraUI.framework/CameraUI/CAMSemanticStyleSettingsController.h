@class CAMSemanticStyleSettingsRootController;
@protocol CAMSemanticStyleSettingsControllerDelegate;

@interface CAMSemanticStyleSettingsController : UINavigationController

@property (readonly, nonatomic) CAMSemanticStyleSettingsRootController *_rootController;
@property (weak, nonatomic) id<CAMSemanticStyleSettingsControllerDelegate> controllerDelegate;

- (id)init;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;

@end
