@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>

@property (readonly, nonatomic) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)view;
- (void)aggregateBehavior:(id)a0;
- (long long)presentationTransition;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)presentationStyle;
- (id)coverSheetIdentifier;
- (void)_updateLegibility;
- (long long)presentationType;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (void)performCustomTransitionToVisible:(BOOL)a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)_newDisplayLayoutElement;
- (void)updateForPresentation:(id)a0;
- (void)willTransitionToPresented:(BOOL)a0;
- (long long)_presentationPriority;
- (id)initWithLockScreenPlugin:(id)a0;
- (void)pluginAppearanceDidChange:(id)a0;

@end
