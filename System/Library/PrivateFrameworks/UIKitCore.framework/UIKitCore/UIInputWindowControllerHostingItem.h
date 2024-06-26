@class UIInputSetHostView, NSMutableDictionary, UIInputViewSet, UIInputViewSetPlacement, UIViewController, UIFlickingAssistantViewSupport, UIView, TUIInputAssistantHostView, NSString, UIInputWindowController, UIInputWindowControllerHosting, NSLayoutConstraint, UISystemKeyboardDockController, UIKBInputBackdropView, UISplitKeyboardSupport, UIScrollToDismissSupport;
@protocol UIInputViewSetPlacementApplicator, _UIRemoteKeyboardControllerDelegate;

@interface UIInputWindowControllerHostingItem : NSObject <UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardViewSource, UIInputViewSetPlacementDelegate, _UIRemoteKeyboardDistributedViewSource> {
    UIScrollToDismissSupport *_cachedScrollDismissController;
    id /* block */ _interactiveTransitionCleanupBlock;
    double _backdropHeightDelta;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_assistantViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_emptyHeightConstraint;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_assistantViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropBackgroundViewEdgeConstraints;
    NSMutableDictionary *_inputDockViewEdgeConstraints;
    NSMutableDictionary *_assistantBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_inputBackdropBackgroundView;
    UISystemKeyboardDockController *_dockViewController;
    double _verticalTranslationForSplitKeyboard;
    UIInputViewSetPlacement *_cachedPlacement;
    BOOL _supportsDockViewController;
    TUIInputAssistantHostView *_inputAssistantHostView;
}

@property (retain, nonatomic) id<UIInputViewSetPlacementApplicator> applicator;
@property (readonly, weak, nonatomic) UIInputWindowController *owner;
@property (readonly, weak, nonatomic) UIInputWindowControllerHosting *container;
@property (retain, nonatomic) UIView *floatingKeyboardMaskView;
@property (retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView;
@property (retain, nonatomic, setter=setInputAssistantBackdropView:) UIKBInputBackdropView *_inputAssistantBackdropView;
@property (retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView;
@property (retain, nonatomic) UIInputSetHostView *hostView;
@property (nonatomic) UIView *inputView;
@property (nonatomic) UIView *inputAccessoryView;
@property (nonatomic) UIView *inputAssistantView;
@property (readonly, nonatomic) UIView *dockView;
@property (readonly, retain, nonatomic) UISplitKeyboardSupport *splitKeyboardController;
@property (readonly, retain, nonatomic) UIFlickingAssistantViewSupport *flickingAssistantViewSupport;
@property (readonly, nonatomic) BOOL scrollKeyboardActive;
@property (readonly) BOOL keyboardController;
@property (readonly) UIInputViewSetPlacement *placement;
@property (readonly) UIInputViewSet *inputViewSet;
@property (readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inputViewPadding;
@property (readonly) UIView *containerView;
@property BOOL hideInputViewBackdrops;
@property (readonly) long long inputViewBackdropStyle;
@property BOOL hideInputAssistantBackdrop;
@property BOOL hideInputView;
@property (readonly) TUIInputAssistantHostView *inputAssistantHostView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) BOOL isChangingPlacement;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } positionConstraintConstant;
@property (readonly, nonatomic) UIViewController *_inputViewController;
@property (retain, nonatomic) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;
@property (readonly, nonatomic) BOOL isOnScreenRotating;
@property (nonatomic) BOOL dontDismissReachability;

- (void)removeInputAssistantHostView;
- (void)configureFlickingAssistantViewController:(BOOL)a0;
- (void)updateInputAssistantBackdropView;
- (void)completeTransition:(id)a0 withInfo:(id)a1;
- (void)configureSplitKeyboardController:(BOOL)a0;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)resetInputViewVisibility;
- (BOOL)_shouldShowInputDockView;
- (void)updateSupportsDockViewController;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)updateForKeyplaneChangeWithContext:(id)a0;
- (void)finishSplitTransition:(BOOL)a0;
- (BOOL)_isForDragToDismiss;
- (void)updateInputBackdropViewVisibility;
- (void)updateViewSizingConstraints;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)updateViewSizingConstraints:(id)a0;
- (void)someViewDidLayoutSubviews;
- (void)refreshApplicator;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)inputAssistantViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullScreenFrame;
- (void)setAccessoryViewVisible:(BOOL)a0 delay:(double)a1;
- (BOOL)_isForSplitKeyboard;
- (BOOL)_isForSelf:(id)a0;
- (void)setPlacement:(id)a0 quietly:(BOOL)a1 animated:(BOOL)a2 generateSplitNotification:(BOOL)a3;
- (void)configureScrollDismissController:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })notificationsFrame;
- (void)resetBackdropHeight;
- (void)setInterfaceAutorotationDisabled:(BOOL)a0;
- (void)enumerateBoundingRects:(id /* block */)a0;
- (void)updateEmptyHeightConstraint;
- (id)ownerView;
- (void)updateKeyboardDockViewVisibility;
- (id)viewMatchingConstraintForAttribute:(long long)a0 primaryView:(id)a1 secondaryView:(id)a2;
- (void)rebuildConstraints:(id)a0 forView:(id)a1 toMatchView:(id)a2 tracker:(id)a3;
- (void)clearInputViewEdgeConstraints;
- (id)initWithContainer:(id)a0;
- (void)updateInputAccessoryBackdropView;
- (id)constructNotificationInfoForScrollWithMode:(unsigned long long)a0;
- (id)_updateOrCreateConstraintInDict:(id)a0 key:(id)a1 fromView:(id)a2 toView:(id)a3 tracker:(id)a4 creator:(id /* block */)a5;
- (void)updateVisibilityConstraintsForPlacement:(id)a0;
- (void)updateTransition:(id)a0 withInfo:(id)a1;
- (void)finishSplitTransition;
- (void)_fillInNotificationInfo:(id)a0 forDismissMode:(unsigned long long)a1;
- (void)placementNeedsUpdate:(id)a0;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)resetVerticalConstraint;
- (void)didFinishTranslation;
- (void)prepareForSplitTransition;
- (void)prepareTranslationFromPlacement:(id)a0 to:(id)a1;
- (void)resetPlacement;
- (void)updateProgress:(double)a0 startHeight:(double)a1 endHeight:(double)a2;
- (void)updateInputBackdropView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullInputViewAndAssistantFrame;
- (void)setPlacement:(id)a0;
- (id)inputViewController;
- (void)configureDockViewController:(BOOL)a0;
- (void)willBeginTranslationFromPlacement:(id)a0 to:(id)a1;
- (void)finishScrollViewTransition;
- (void)willBeginTranslation;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)_updateBackdropViews;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)setPlacement;
- (void)transitionDidFinish:(BOOL)a0;
- (id)inputAccessoryViewController;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_aligningInsetsForChildInputViewController:(id)a0 includeSceneBounds:(BOOL)a1;
- (void)didFinishTranslationFromPlacement:(id)a0 to:(id)a1;
- (void)clearVisibilityConstraints;
- (void)startTransition:(id)a0 withInfo:(id)a1;
- (void)updateConstraintInsets;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)dealloc;

@end
