@class UIView, HUQuickControlRingSliderHandleView, UIImage, UILongPressGestureRecognizer, HUQuickControlRingSliderViewProfile, UIImageView, NSMutableDictionary, NSString, NSMutableArray, UISelectionFeedbackGenerator, UILabel, UIImpactFeedbackGenerator;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlRingSliderView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView, HURingSliderStatusLabelUpdateDelegate>

@property (nonatomic) struct { double minimum; double maximum; } modelRangeValue;
@property (nonatomic) BOOL isDraggingPrimaryHandleView;
@property (nonatomic) BOOL isDraggingSecondaryHandleView;
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *primaryHandleView;
@property (retain, nonatomic) HUQuickControlRingSliderHandleView *secondaryHandleView;
@property (retain, nonatomic) UIView *backgroundRingView;
@property (retain, nonatomic) UIView *edgesAndColoredSupplementaryValueLineView;
@property (retain, nonatomic) UIImage *gradientRingImage;
@property (retain, nonatomic) UIImageView *selectedRangeImageView;
@property (retain, nonatomic) UIImageView *selectedRangeImageViewForEdges;
@property (nonatomic) BOOL didMaskBackgroundImageView;
@property (nonatomic) double outerRadius;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (nonatomic) unsigned long long prevTouchArea;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UIView *labelsBackgroundView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressPanGestureRecognizer;
@property (retain, nonatomic) UIView *supplementaryValueMarkingView;
@property (retain, nonatomic) NSMutableArray *gradationMarkingViews;
@property (retain, nonatomic) NSMutableDictionary *markingValuesAndViewsDictionary;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) double prevSliderValue;
@property (nonatomic) unsigned long long prevSlidingDirection;
@property (retain, nonatomic) NSMutableArray *currentDirectionTapticValues;
@property (nonatomic) BOOL showOffState;
@property (copy, nonatomic) HUQuickControlRingSliderViewProfile *profile;
@property (nonatomic) double supplementaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)a0;
- (void)_updateTransform;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)layoutSubviews;
- (void)_touchEnded;
- (struct CGPoint { double x0; double x1; })_getHandleCenterOnRingForValue:(double)a0;
- (void)_actuateSelectionTapticFeedback;
- (double)_getClosestMarkingValueToValue:(double)a0;
- (void)_actuateImpactTapticFeedback;
- (void)_animateToEnlargeHandleView:(id)a0;
- (BOOL)_areHandleViewsAnimating;
- (double)_getAngleFrom12OClockForPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_getAngleFrom12OClockForValue:(double)a0;
- (struct CGPoint { double x0; double x1; })_getCircleCenterPoint;
- (struct CGPoint { double x0; double x1; })_getClosestPointOnMiddleCircleOfRing:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_getEdgeRectSize;
- (double)_getInnerCircleRadius;
- (double)_getMaxAngleFrom12OClock;
- (double)_getMaximumMarkingValue;
- (double)_getMiddleCircleRadius;
- (double)_getMinAngleFrom12OClock;
- (double)_getMinimumMarkingValue;
- (double)_getOneMarkerValueDifference;
- (struct CGPoint { double x0; double x1; })_getPointForAngleFrom12OClock:(double)a0;
- (struct { double x0; double x1; })_getPossibleAngleRange12OClock;
- (double)_getPrimarySliderValue;
- (unsigned long long)_getRingSliderAreaForAngleFrom12Oclock:(double)a0;
- (unsigned long long)_getRingSliderAreaForAngleFrom12Oclock:(double)a0 minAngle:(double)a1 maxAngle:(double)a2;
- (unsigned long long)_getRingSliderAreaForHandleViewForAngleFrom12Oclock:(double)a0;
- (unsigned long long)_getRingSliderAreaForPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_getSecondarySliderValue;
- (double)_getSliderValueForAngleFrom12OClock:(double)a0;
- (double)_getSliderValueForPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_getStartAngleEdgeLocationShiftForBackgroundRing:(BOOL)a0;
- (BOOL)_isIncreasingOrDecreasing:(unsigned long long)a0;
- (BOOL)_isPoint:(struct CGPoint { double x0; double x1; })a0 withInMarginOfRing:(double)a1;
- (void)_maskBackgroundImageViewToRingShape;
- (void)_prepareForTapticFeedback;
- (BOOL)_primaryHandleViewContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_redrawGradationMarkingViews;
- (BOOL)_secondaryHandleViewContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateLabelsSize;
- (void)_updateModelValue:(struct { double x0; double x1; })a0 roundValue:(BOOL)a1 notifyInteractionDelegate:(BOOL)a2;
- (void)_updateModelValueWithNewPrimarySliderValue:(double)a0 roundValue:(BOOL)a1 notifyInteractionDelegate:(BOOL)a2;
- (void)_updateModelValueWithNewSecondarySliderValue:(double)a0 roundValue:(BOOL)a1 notifyInteractionDelegate:(BOOL)a2;
- (void)_updateModelValueWithSlidersPositions;
- (void)_updatePrimaryHandleViewPositionToSliderValue;
- (void)_updateRingViewAndHandleViews;
- (void)_updateSecondaryHandleViewPositionToSliderValue;
- (void)_updateSelectedRangeImageView;
- (void)_updateSupplementaryValueMarkingView;
- (void)_updateSupplementaryValueMarkingViewColor;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)_updateUIForThresholdModeForPrimaryHandleViewWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 didTouchBegin:(BOOL)a1;
- (void)_updateUIForThresholdModeForSecondaryHandleViewWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 didTouchBegin:(BOOL)a1;
- (void)_updateUIForTouchPoint:(struct CGPoint { double x0; double x1; })a0 didTouchBegin:(BOOL)a1 forHandleView:(id)a2 minValue:(double)a3 maxValue:(double)a4;
- (void)_updateUIWithTouchAtPoint:(struct CGPoint { double x0; double x1; })a0 didTouchBegin:(BOOL)a1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (void)handlePanGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (void)updatePrimaryLabelWithString:(id)a0 fontSize:(double)a1;
- (void)updateSupplementaryLabelWithString:(id)a0;

@end