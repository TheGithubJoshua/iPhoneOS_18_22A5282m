@class UIWindowScene, UIWindow, SBFluidSwitcherModifierTimelineViewController;

@interface SBFluidSwitcherModifierTimelineController : NSObject {
    UIWindow *_window;
    SBFluidSwitcherModifierTimelineViewController *_rootViewController;
    UIWindowScene *_windowScene;
}

@property (nonatomic, getter=isVisible) BOOL visible;

- (id)initWithWindowScene:(id)a0;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;

@end
