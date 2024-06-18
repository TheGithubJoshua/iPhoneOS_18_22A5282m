@class NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIControlCenterSystemAgent, CCUIContentModuleContentViewController;

@interface CCUIMuteModule : CCUIToggleModule <CCUIInternalContentModule> {
    id<CCUIControlCenterSystemAgent> _systemAgent;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0;
- (id)glyphPackageDescription;
- (void)_updateState;
- (id)initWithSystemAgent:(id)a0;
- (void).cxx_destruct;
- (void)_observeSystemNotifications;
- (id)glyphState;
- (void)dealloc;
- (void)_unobserveSystemNotifications;
- (void)_updateForDarkerSystemColorsChange;

@end
