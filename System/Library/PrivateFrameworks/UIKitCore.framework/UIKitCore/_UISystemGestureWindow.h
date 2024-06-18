@class UISystemGestureView;

@interface _UISystemGestureWindow : _UIRootWindow {
    UISystemGestureView *_systemGestureView;
}

+ (BOOL)_isSecure;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithScreen:(id)a0;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_appearsInLoupe;
- (void).cxx_destruct;
- (id)initWithDisplayConfiguration:(id)a0;
- (BOOL)_isSystemGestureWindow;
- (id)initWithDisplay:(id)a0;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)canBecomeKeyWindow;
- (id)_systemGestureView;
- (id)_focusResponder;
- (BOOL)_shouldPrepareScreenForWindow;

@end
