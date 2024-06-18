@class CSBehavior, NSArray, CSAppearance, SBFSteppedAnimationTimingFunctionCalculator, _UILegibilitySettings;
@protocol CSCoverSheetViewTransitionSource, CSLegibilityProviding;

@interface CSCoverSheetAppearanceResolver : NSObject {
    SBFSteppedAnimationTimingFunctionCalculator *_interactiveAnimationCalculator;
}

@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) double appearanceFraction;
@property (nonatomic) double fraction;
@property (retain, nonatomic) _UILegibilitySettings *discreteLegibilitySettings;
@property (retain, nonatomic) CSAppearance *desiredAppearance;
@property (retain, nonatomic) CSAppearance *oldAppearance;
@property (nonatomic) CSBehavior *activeBehavior;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic) unsigned long long targetIndex;
@property (nonatomic) unsigned long long indexOfMainPage;
@property (retain, nonatomic) CSAppearance *targetAppearance;
@property (retain, nonatomic) CSAppearance *modalAppearance;
@property (retain, nonatomic) id<CSCoverSheetViewTransitionSource> currentTransitionSource;
@property (nonatomic) BOOL contentTransitionIsAtCoverSheetLevel;
@property (retain, nonatomic) id<CSLegibilityProviding> legibilityProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (copy, nonatomic) NSArray *whitePointValues;
@property (nonatomic) BOOL hasContentAboveCoverSheet;

- (id)init;
- (id)_resolveWhitePointComponent;
- (id)_resolveFooterCallToActionLabelComponentWithHomeAffordance:(id)a0;
- (id)_resolveQuickActionsComponent;
- (id)_resolveTintingComponent;
- (id)_resolvePoseidonComponent;
- (id)_resolvePageContentComponent;
- (id)_resolveStatusBarComponent;
- (id)newActiveAppearanceGivenDesiredAppearance:(id)a0 oldAppearance:(id)a1 activeAppearance:(id)a2 activeBehavior:(id)a3 startIndex:(unsigned long long)a4 targetIndex:(unsigned long long)a5 indexOfMainPage:(unsigned long long)a6 targetAppearance:(id)a7 modalAppearance:(id)a8 currentTransitionSource:(id)a9 contentTransitionIsAtCoverSheetLevel:(BOOL)a10 legibilityProvider:(id)a11 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 whitePointValues:(id)a13 hasContentAboveCoverSheet:(BOOL)a14;
- (id)_resolveDateViewComponent;
- (id)_resolveSlideableContentComponent;
- (void).cxx_destruct;
- (id)_resolveControlCenterGrabberComponent;
- (id)_resolveHomeAffordanceComponent;
- (id)_resolveStatusBarGradientComponent;
- (id)_resolveComponentWithType:(long long)a0;
- (id)_resolveStatusBarBackgroundComponent;
- (id)_resolveLegibilitySettings;
- (void)setInteractiveAnimationCalculatorPercentComplete:(double)a0;
- (id)_resolveProudLockComponent;
- (id)_resolveContentComponent;
- (id)_resolveBackgroundComponent;

@end
