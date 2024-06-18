@class NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, SBWindowScene;
@protocol BSInvalidatable;

@interface SBWindowSceneStatusBarLayoutManager : NSObject <BSDescriptionProviding> {
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    double _defaultWindowLevel;
    SBWindowScene *_windowScene;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } statusBarEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeWindowLevelOverrideReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateWindowLevel;
- (void)setWindowLevel:(double)a0 forOverrideReason:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (id)succinctDescription;
- (void)removeActiveLayoutLayer:(unsigned long long)a0;
- (void)setDefaultWindowLevel:(double)a0;
- (BOOL)statusBarOrientationShouldFollowWindow:(id)a0;
- (void)setOrientationWindow:(id)a0 forStatusBarLayoutLayer:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)addActiveLayoutLayer:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forLayoutLayer:(unsigned long long)a1;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;
- (void)_applyEdgeInsetsToStatusBar;
- (id)orientationWindowForLayoutLayer:(unsigned long long)a0;

@end
