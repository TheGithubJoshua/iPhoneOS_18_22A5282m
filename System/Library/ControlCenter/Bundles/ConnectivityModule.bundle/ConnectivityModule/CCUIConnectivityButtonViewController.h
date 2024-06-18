@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {
    BOOL _observingStateChanges;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;

+ (BOOL)isSupported;

- (id)statusText;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)stopObservingStateChangesIfNecessary;
- (id)subtitleText;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (void)buttonTapped:(id)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (id)displayName;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)startObservingStateChangesIfNecessary;

@end
