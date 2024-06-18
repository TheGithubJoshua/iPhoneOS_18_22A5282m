@class NSString, UIViewController, UIView;
@protocol SBHWidgetContainerViewControllerDelegate;

@interface SBHWidgetContainerViewController : UIViewController <SBHMultiplexingViewControllerObserver>

@property (retain, nonatomic) UIView *deactivationSnapshotView;
@property (readonly, nonatomic) UIViewController *widgetViewController;
@property (readonly, nonatomic) unsigned long long gridSizeClass;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (weak, nonatomic) id<SBHWidgetContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL requiresClippingToBounds;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) BOOL wantsSystemMaterialBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateWidgetVisibility;
- (void)loadView;
- (void)multiplexingViewControllerWillDeactivate:(id)a0;
- (id)_avocadoViewController;
- (id)_avocadoWidget;
- (void)multiplexingViewControllerDidActivate:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_clearDeactivationSnapshotView;
- (id)snapshotView;
- (id)widgetContextMenuController;
- (void)viewWillAppear:(BOOL)a0;
- (id)_widgetExtensionBundleIdentifier;
- (id)initWithWidgetViewController:(id)a0 gridSizeClass:(unsigned long long)a1 applicationName:(id)a2;
- (id)widgetContainerView;

@end
