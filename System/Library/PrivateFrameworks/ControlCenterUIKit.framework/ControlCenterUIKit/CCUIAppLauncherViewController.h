@class NSString, SCUIAssetProvider, UIViewPropertyAnimator, NSArray, NSObject, CCUIAppLauncherModule;
@protocol OS_dispatch_queue;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController <CCUIContentModuleContentViewControllerInternal> {
    SCUIAssetProvider *_assetProvider;
    NSObject<OS_dispatch_queue> *_menuItemsFetchQueue;
    NSArray *_fetchedMenuItems;
}

@property (weak, nonatomic) CCUIAppLauncherModule *module;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (BOOL)shouldRequestAuthenticationForTransitionToExpandedContent;
- (void)_queue_updateApplicationShortcutsActions;
- (void)_activateApplicationForShortcutItem:(id)a0;
- (id)_assetProvider;
- (void)_queue_setFetchedMenuItems:(id)a0;
- (id)leadingImageForMenuItem:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)_menuItemForShortcutItem:(id)a0;
- (void)_updateWithFetchedMenuItemsIfNecessary;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_updateApplicationShortcutsActionsIfNecessary;
- (void)buttonTouchDown:(id)a0 forEvent:(id)a1;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)requestAuthenticationForTransitionToExpandedContentModuleWithCompletionHandler:(id /* block */)a0;

@end
