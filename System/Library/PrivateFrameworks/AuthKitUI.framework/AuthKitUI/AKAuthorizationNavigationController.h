@class _UIBackdropView;

@interface AKAuthorizationNavigationController : UINavigationController {
    _UIBackdropView *_backdropView;
    long long _currentStyle;
}

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_updateStyleIfNeeded;

@end
