@class UIPeripheralHostState, NSString, UIView, UITextInputMode, CADisplayLink, NSMutableDictionary, UIKeyboardRotationState, UIResponder, UIPeripheralHostView, NSMutableArray, UIInputViewSet;

@interface UIPeripheralHost : NSObject <UIScrollViewIntersectionDelegate, UIGestureRecognizerDelegate> {
    UIPeripheralHostView *_hostView;
    BOOL _automaticAppearanceEnabledInternal;
    int _ignoredReloads;
    int _nextAutomaticOrderInDirection;
    BOOL _isTranslating;
    BOOL _isUndocked;
    BOOL _splitLockState;
    CADisplayLink *_displayLink;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _targetTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _initialTransform;
    struct CGPoint { double x; double y; } _velocity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownIVFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownIAVFrame;
    long long _disableAnimationsCount;
    NSMutableArray *_targetStateStack;
    BOOL _interfaceAutorotationDisabled;
    double _ambiguousControlCenterActivationMargin;
    NSMutableDictionary *_deferredTransitionTasks;
}

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) BOOL automaticAppearanceInternalEnabled;
@property (nonatomic) double ambiguousControlCenterActivationMargin;
@property (readonly, nonatomic) UIResponder *responder;
@property (nonatomic) BOOL animationFencingEnabled;
@property (readonly, nonatomic) UIInputViewSet *inputViews;
@property (readonly, nonatomic) UIInputViewSet *loadAwareInputViews;
@property (readonly, nonatomic) BOOL keyClicksEnabled;
@property (retain, nonatomic) UIKeyboardRotationState *rotationState;
@property (retain, nonatomic) UIPeripheralHostState *targetState;
@property (retain, nonatomic) UIResponder *responder;
@property (nonatomic) BOOL animationFencingEnabled;
@property (readonly, nonatomic) BOOL animationsEnabled;
@property (retain, nonatomic) UIInputViewSet *_inputViews;
@property (retain, nonatomic) UIInputViewSet *_transientInputViews;
@property (nonatomic) int currentState;
@property (readonly, nonatomic) BOOL automaticAppearanceReallyEnabled;
@property (nonatomic) BOOL automaticAppearanceEnabled;
@property (retain, nonatomic) UITextInputMode *documentInputMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeInstance;
+ (id)endPlacementForInputViewSet:(id)a0 windowScene:(id)a1;
+ (id)passthroughViews;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBoundsInAppOrientation;
+ (BOOL)pointIsWithinKeyboardContent:(struct CGPoint { double x0; double x1; })a0;
+ (id)sharedInstance;
+ (Class)floatingAssistantBarPlacementClassSupportingCompactStyle:(BOOL)a0;
+ (id)allVisiblePeripheralFrames;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleInputViewFrame;
+ (void)_releaseSharedInstance;
+ (void)adjustFloatingPersistentOffsetForKeyboardSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })defaultUndockedOffset;
+ (void)setFloating:(BOOL)a0 onCompletion:(id /* block */)a1;
+ (double)gridViewRubberBandValueForValue:(double)a0 target:(double)a1 timeInterval:(double)a2 velocity:(double *)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visiblePeripheralFrame;
+ (BOOL)inputViewSetContainsView:(id)a0;
+ (Class)hostViewClass;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })floatingChromeBuffer;
+ (void)setKeyboardOnScreenNotifyKey:(BOOL)a0;
+ (struct CGPoint { double x0; double x1; })adjustedFloatingOffsetForKeyboardSize:(struct CGSize { double x0; double x1; })a0;

- (unsigned long long)_clipCornersOfView:(id)a0;
- (BOOL)isUndocked;
- (void)flushDelayedTasks;
- (id)_inheritedRenderConfig;
- (void)queueDelayedTask:(id /* block */)a0;
- (void)_beginDisablingAnimations;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atCenter:(struct CGPoint { double x0; double x1; })a1 applyingSourceHeightDelta:(double)a2;
- (id)transitioningView;
- (void)setInputViewsHidden:(BOOL)a0;
- (void)orderOutAutomatic;
- (void)setUndockedWithOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)_renderConfigForResponder:(id)a0;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)postDidShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0;
- (id)init;
- (void)_preserveInputViewsWithId:(id)a0 animated:(BOOL)a1;
- (void)updateInputAccessoryViewVisibility:(BOOL)a0 withDuration:(double)a1;
- (id)_sceneForFirstResponder:(id)a0;
- (id)_screenForFirstResponder:(id)a0;
- (id)containerWindow;
- (struct CGPoint { double x0; double x1; })offHostPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)manualKeyboardWasOrderedOut:(id)a0;
- (double)getVerticalOverlapForView:(id)a0 usingKeyboardInfo:(id)a1;
- (BOOL)_isSuppressedByManualKeyboard;
- (BOOL)minimize;
- (void)pushAnimationStyle:(id)a0;
- (BOOL)maximize;
- (id)_renderConfigForCurrentResponder;
- (id)containerTextEffectsWindowAboveStatusBar;
- (void)orderInAutomatic;
- (id)containerTextEffectsWindow;
- (void)forceOrderInAutomaticAnimated:(BOOL)a0;
- (void)setDeactivatedKeyboard:(BOOL)a0 forScene:(id)a1 forSuppressionAssertion:(BOOL)a2;
- (void)orderOutAutomaticSkippingAnimation;
- (BOOL)isOffScreen;
- (void)manualKeyboardWillBeOrderedIn:(id)a0;
- (void)performMultipleOperations:(id /* block */)a0 withAnimationStyle:(id)a1;
- (void)setKeyboardFencingEnabled:(BOOL)a0;
- (void)rotateKeyboard:(id)a0 toOrientation:(long long)a1;
- (void)queueDelayedTask:(id /* block */)a0 forKey:(id)a1 delay:(double)a2;
- (id)transformedContainerView;
- (void)forceOrderInAutomaticFromDirection:(int)a0 withDuration:(double)a1;
- (void)setDeactivatedKeyboard:(BOOL)a0 forScene:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitioningFrame;
- (struct CGSize { double x0; double x1; })totalPeripheralSizeForOrientation:(long long)a0;
- (BOOL)_restoreInputViewsWithId:(id)a0 animated:(BOOL)a1;
- (void)logGeometryDescriptionFromUserInfo:(id)a0;
- (void)enableKeyboardTyping;
- (struct CGPoint { double x0; double x1; })adjustedPersistentOffset;
- (id)viewForTransitionScreenSnapshot;
- (BOOL)hasDelayedTasksForKey:(id)a0;
- (void)setTextEffectsWindowLevelForInputView:(id)a0 responder:(id)a1;
- (BOOL)shouldUseHideNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0;
- (void)forceOrderInAutomatic;
- (BOOL)_isTransitioning;
- (id)lastUsedInputModeForCurrentContext;
- (BOOL)isTranslating;
- (void)popAnimationStyle;
- (void)queueDelayedTask:(id /* block */)a0 forKey:(id)a1;
- (id)_currentInputView;
- (void)finishRotation;
- (BOOL)isOnScreen;
- (void)postWillShowNotificationForGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0 duration:(double)a1;
- (void)_endDisablingAnimations;
- (void)forceOrderOutAutomaticAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollView:(id)a0 didPanWithGesture:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visiblePeripheralFrame:(BOOL)a0;
- (void)_preserveInputViewsWithId:(id)a0 animated:(BOOL)a1 reset:(BOOL)a2;
- (BOOL)hasDictationKeyboard;
- (void)orderInAutomaticFromDirection:(int)a0 withDuration:(double)a1;
- (void)scrollView:(id)a0 didFinishPanGesture:(id)a1;
- (id)containerRootController;
- (void)textEffectsWindowDidRotate:(id)a0;
- (id)contentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inputViewRectToAvoid;
- (BOOL)_isCoordinatingWithSystemGestures;
- (void)manualKeyboardWasOrderedIn:(id)a0;
- (id)userInfoFromGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0 duration:(double)a1 forWill:(BOOL)a2 forShow:(BOOL)a3;
- (void)_updateContainerWindowLevel;
- (void)finishRotationOfKeyboard:(id)a0;
- (void)_preserveInputViewsWithId:(id)a0;
- (void)_clearPreservedInputViewsWithRestorableResponder:(id)a0;
- (BOOL)isRotating;
- (id)existingContainerRootController;
- (void)forceReloadInputViews;
- (BOOL)_shouldDelayRotationForWindow:(id)a0;
- (void)rotateToOrientation:(long long)a0;
- (void)prepareForRotationOfKeyboard:(id)a0 toOrientation:(long long)a1;
- (BOOL)userInfoContainsActualGeometryChange:(id)a0;
- (void)peripheralHostWillResume:(id)a0;
- (void)_clearPreservedInputViewsWithId:(id)a0 clearKeyboard:(BOOL)a1;
- (BOOL)maximizeWithAnimation:(BOOL)a0;
- (void)dealloc;
- (void)updateToPlacement:(id)a0 withNormalAnimationsAndNotifications:(BOOL)a1;
- (void)postKeyboardFrameChangeNotification:(id)a0 withInfo:(id)a1;
- (void)forceOrderOutAutomaticToDirection:(int)a0 withDuration:(double)a1;
- (struct CGSize { double x0; double x1; })sizeOfInputViewForInputViewSet:(id)a0 withInterfaceOrientation:(long long)a1;
- (void)orderInAutomaticSkippingAnimation;
- (void)disableInterfaceAutorotation:(BOOL)a0;
- (int)_isKeyboardDeactivated;
- (void)moveToPersistentOffset;
- (void)orderOutAutomaticToDirection:(int)a0 withDuration:(double)a1;
- (void)manualKeyboardWillBeOrderedOut:(id)a0;
- (void)forceOrderOutAutomatic;
- (void)prepareForRotationToOrientation:(long long)a0;
- (BOOL)hasCustomInputView;
- (double)minimumOffsetForBuffer:(double)a0;
- (void)removePreservedInputViewSetForInputView:(id)a0;
- (void)_restoreInputAccessoryViewOverrideWithId:(id)a0;
- (void)flushDelayedTasksForKey:(id)a0;
- (void)performWithoutDeactivation:(id /* block */)a0;
- (void)setKeyboardOnScreenNotifyKey:(BOOL)a0;

@end