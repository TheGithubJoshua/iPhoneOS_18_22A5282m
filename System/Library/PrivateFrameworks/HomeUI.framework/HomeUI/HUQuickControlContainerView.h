@class HUQuickControlAuxiliaryHostView, PLPillControl, HUControlHostView, HUQuickControlButtonRowView, NSObject, HUQuickControlSummaryView, UILayoutGuide, UIButton, NSOrderedSet, NSLayoutConstraint, NSString, UIView, NSAttributedString, NSArray, PCDisambiguationContext, UIImageView;
@protocol OS_dispatch_source, PCActivity, HUQuickControlContainerViewDelegate;

@interface HUQuickControlContainerView : UIView <HFProxControlActivityClientDelegate>

@property (retain, nonatomic) HUControlHostView *controlHostView;
@property (retain, nonatomic) UILayoutGuide *controlViewLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *controlViewPreferredFrameLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *cardViewLayoutGuide;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (retain, nonatomic) NSArray *maxHeightConstraints;
@property (retain, nonatomic) NSLayoutConstraint *compactControlBottomConstraint;
@property (retain, nonatomic) HUQuickControlAuxiliaryHostView *auxiliaryHostView;
@property (retain, nonatomic) HUQuickControlButtonRowView *buttonRowView;
@property (retain, nonatomic) UIButton *detailsButton;
@property (retain, nonatomic) HUQuickControlSummaryView *summaryView;
@property (retain, nonatomic) UILayoutGuide *contentToAuxiliarySpacingLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *topToSummarySpacingLayoutGuide;
@property (readonly, nonatomic) BOOL isExternallyAnimating;
@property (retain, nonatomic) PLPillControl *disambiguationButton;
@property (nonatomic) BOOL isDisambiguationButtonAnimating;
@property (retain, nonatomic) NSAttributedString *disambiguationButtonPrimaryText;
@property (retain, nonatomic) NSString *disambiguationButtonSecondaryText;
@property (retain, nonatomic) UIImageView *disambiguationButtonLeadingImageView;
@property (retain, nonatomic) NSLayoutConstraint *disambiguationButtonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *disambiguationButtonTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlHostViewTopConstraintToView;
@property (retain, nonatomic) PCDisambiguationContext *currentDisambiguationContext;
@property (retain, nonatomic) NSOrderedSet *currentUserActivities;
@property (nonatomic) BOOL hasActivePhoneCall;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *phoneCallStatusUpdateTimer;
@property (retain, nonatomic) id<PCActivity> lastActivity;
@property (nonatomic) double controlTransitionProgress;
@property (nonatomic) double chromeTransitionProgress;
@property (nonatomic) double initialSourceViewScale;
@property (nonatomic) BOOL shouldShowActiveControl;
@property (nonatomic) BOOL shouldShowDetailsButton;
@property (nonatomic) unsigned long long edgesForExtendedLayout;
@property (retain, nonatomic) UIView *activeControlView;
@property (retain, nonatomic) UILayoutGuide *standardViewportFromParentGuide;
@property (nonatomic) BOOL controlViewSupportsTransformTransition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } presentedControlFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, weak, nonatomic) id<HUQuickControlContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)layoutMarginsDidChange;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (void)dealloc;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)a0;
- (void)_disambiguationButtonTouchDown:(id)a0;
- (void)_configureCardViewLayoutGuideConstraints:(id)a0;
- (void)_configureControlViewLayoutGuideConstraints:(id)a0;
- (void)_configureDisambiguationButtonConstraints:(id)a0;
- (void)_configureDisambiguationForActivities:(id)a0 disambiguationContext:(id)a1;
- (void)_configureRegularHeightConstraints:(id)a0;
- (struct CGPoint { double x0; double x1; })_controlHostCenter;
- (struct CGPoint { double x0; double x1; })_controlHostCenterForPresentationProgress:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_controlHostTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_controlHostTransformForPresentationProgress:(double)a0;
- (void)_detailsButtonTapped:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_disambiguationButtonHiddenTransform;
- (double)_disambiguationButtonPreferredHeight;
- (void)_disambiguationButtonTapped:(id)a0;
- (void)_disambiguationButtonTouchUp:(id)a0;
- (void)_invalidatePhoneCallStatusUpdateTimer;
- (BOOL)_isDisambiguationButtonVisible;
- (BOOL)_isPhoneCallStatusUpdateTimerActive;
- (struct CGSize { double x0; double x1; })_presentedControlHostSize;
- (BOOL)_shouldShowControlView;
- (BOOL)_shouldShowDisambiguationButtonForUserActivities:(id)a0 disambiguationContext:(id)a1;
- (void)_startPhoneCallStatusUpdateTimer;
- (void)_updateCompactControlBottomConstraint;
- (void)_updateDetailsButtonVisibility;
- (void)_updateDisambiguationButtonVisible:(BOOL)a0;
- (BOOL)_useCompactHeightLayout;
- (void)didUpdateActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)externalAnimationsBegan;
- (void)externalAnimationsEnded;
- (void)hideAuxiliaryView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)showAuxiliaryView:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })sourceViewTransformForPresentationProgress:(double)a0;

@end