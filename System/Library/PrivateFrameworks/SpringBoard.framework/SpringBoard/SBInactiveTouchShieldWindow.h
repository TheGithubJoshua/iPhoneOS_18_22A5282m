@interface SBInactiveTouchShieldWindow : _UIRootWindow

+ (BOOL)_isSecure;
+ (id)emptyContentImage;

- (BOOL)_appearsInLoupe;
- (id)initWithDisplay:(id)a0;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_shouldPrepareScreenForWindow;

@end
