@class NSString, SBAssistantRootViewController;

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow <SBAssistantWindowProtocol>

@property (nonatomic) BOOL touchesPassThroughToSpringBoard;
@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)_isSecure;
+ (BOOL)sb_autorotates;
+ (id)defaultLayoutStrategy;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)isOpaque;
- (id)initWithWindowScene:(id)a0 role:(id)a1 debugName:(id)a2;

@end
