@class UILabel;

@interface _UIDebugIdentifierWindow : UIWindow {
    UILabel *_sceneIdentifierLabel;
}

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_ignoresHitTest;
- (void)_updateSceneIdentifierLabel;

@end
