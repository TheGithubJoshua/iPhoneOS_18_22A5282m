@class CSTeachableMomentsContainerView, NSMutableDictionary, NSTimer, CSHomeAffordanceViewController, NSString, UITapGestureRecognizer;
@protocol SBUIBiometricResource, SBDashBoardHomeAffordanceAnimationViewProviding;

@interface CSTeachableMomentsContainerViewController : CSCoverSheetViewControllerBase <CAAnimationDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSTimer *fireOffAnimationTimer;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL updateTextLabelOnNextAnimation;
@property (retain, nonatomic) NSMutableDictionary *cachedLegibilityLabels;
@property (nonatomic) BOOL controlCenterCoachingIsHidden;
@property (retain, nonatomic) UITapGestureRecognizer *homeAffordanceClickGestureRecognizer;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic) unsigned long long effectiveAnimationState;
@property (readonly, nonatomic) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (readonly, nonatomic) CSHomeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id<SBDashBoardHomeAffordanceAnimationViewProviding> viewProvider;
@property (retain, nonatomic) id<SBUIBiometricResource> biometricResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_addRepeatedAnimationWithProvider:(id /* block */)a0 toLayer:(id)a1;
+ (id)_animationKeyForKeyPath:(id)a0 iteration:(unsigned long long)a1 reset:(BOOL)a2;

- (void)_moveUpTimerForFiringAfterDelay:(double)a0;
- (void)_addHomeAffordanceResetAnimation;
- (void)_addResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (id)_homeAffordancePositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (BOOL)_shouldTeachAboutControlCenter;
- (id)init;
- (unsigned long long)currentState;
- (void)loadView;
- (id)_controlCenterGlyphAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_textPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_addControlCenterGlyphResetAnimation;
- (void)_contentSizeCategoryChanged;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_addControlCenterGrabberResetAnimation;
- (void)_updateTextLabelIfNeeded;
- (void)_removeResetAnimationForKeyPath:(id)a0 onLayer:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void)_addControlCenterGrabberAnimation;
- (void)_addControlCenterGlyphAnimation;
- (void)_addHomeAffordanceAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)_addTextResetAnimation;
- (id)_textAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_setupTimerWithDelay:(double)a0;
- (void)_removeNormalAnimationsForKeyPath:(id)a0 onLayer:(id)a1;
- (void)_updateEffectiveAnimationState;
- (void)_cancelTimerAndResetAnimation;
- (void)aggregateAppearance:(id)a0;
- (void)_addTextAnimation;
- (void)_updateTextLabel;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setControlCenterTutorsHidden:(BOOL)a0;
- (id)_controlCenterGrabberPositionAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (id)_controlCenterGrabberAlphaAnimationWithDuration:(double)a0 beginTime:(double)a1;
- (void)_setupTimer;
- (void)_updateLegibilitySettings;
- (void)_updateText:(id)a0;
- (void)_homeAffordanceClickRecognized:(id)a0;

@end
