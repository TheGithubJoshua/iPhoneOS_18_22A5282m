@class NSHashTable, NSString, SBWindowSceneStatusBarLayoutManager, UIStatusBarWindow, SBStatusBarReusePool, NSMutableDictionary, SBWindowSceneStatusBarAssertionManager, UIStatusBar, NSMapTable;

@interface SBWindowSceneStatusBarManager : UIStatusBarManager <BSDescriptionProviding> {
    NSMutableDictionary *_globalAvoidanceFrames;
    NSMapTable *_instanceAvoidanceFrames;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) UIStatusBarWindow *statusBarWindow;
@property (readonly, nonatomic) UIStatusBar *statusBar;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarWindowFrame;
@property (readonly, nonatomic) SBWindowSceneStatusBarAssertionManager *assertionManager;
@property (readonly, nonatomic) SBWindowSceneStatusBarLayoutManager *layoutManager;
@property (readonly, nonatomic) SBStatusBarReusePool *reusePool;
@property (nonatomic) long long statusBarOrientation;
@property (readonly, nonatomic, getter=isStatusBarEffectivelyHidden) BOOL statusBarEffectivelyHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)windowSceneStatusBarManagerForEmbeddedDisplay;

- (id)leadingStatusBarStyleRequest;
- (id)trailingStatusBarStyleRequest;
- (void)sbf_addObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarFrame;
- (void)sbf_removeObserver:(id)a0;
- (id)frontmostStatusBarStyleRequest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sb_statusBarFrameForStatusBarHeight:(double)a0;
- (id)succinctDescription;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reason:(id)a1 statusBar:(id)a2 animationSettings:(id)a3 options:(unsigned long long)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avoidanceFrameForStatusBar:(id)a0;
- (BOOL)_isEmbeddedDisplay;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_applyAvoidanceFrameToStatusBar:(id)a0 withGlobalAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animationSettings:(id)a2 reason:(id)a3 options:(unsigned long long)a4;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 reason:(id)a1 statusBar:(id)a2 animationSettings:(id)a3;
- (id)initWithScene:(id)a0;
- (id)_transientOverlayPresentationManagerActiveStatusBarStyleRequest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_globalAvoidanceFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_combineAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
