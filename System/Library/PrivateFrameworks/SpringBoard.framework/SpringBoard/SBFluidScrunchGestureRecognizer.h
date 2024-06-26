@class SBTouchHistory, FBSDisplayConfiguration, NSString;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>

@property (nonatomic) struct CGPoint { double x; double y; } absoluteTranslation;
@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint { double x; double y; } additionalTranslationDueToChangingAnchorPoints;
@property (nonatomic) double lastPerimeter;
@property (nonatomic) struct CGPoint { double x; double y; } initialCentroid;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centroid;
@property (readonly, nonatomic) long long recognizedTouchType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_panTemplatesForTouchType:(long long)a0 displayConfiguration:(id)a1;
+ (void)_rotateTemplates:(id)a0 forDisplayConfiguration:(id)a1;
+ (id)_scrunchTemplatesForTouchType:(long long)a0 displayConfiguration:(id)a1;

- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (double)_hysteresis;
- (void)setAllowedTouchTypes:(id)a0;
- (void)_installTemplatesForDisplayConfiguration:(id)a0;
- (void)setState:(long long)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_gestureView;
- (BOOL)_shouldAddNewTouchesAfterGestureRecognition;
- (id)logCategory;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (struct CGPoint { double x0; double x1; })_centroidInGestureViewForPolygon:(id)a0;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (double)incrementalGestureMotionForCandidate:(id)a0 withTransformAnalyzerInfo:(id)a1;
- (BOOL)_isMatchedTemplateScrunchTemplate;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (double)peakSpeed;
- (id)initWithTarget:(id)a0 action:(SEL)a1 displayConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_updateRecognizedTouchTypeIfNecessaryWithTouches:(id)a0;
- (void)_setMatchedPolygon:(id)a0;
- (double)animationDistance;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_computeGestureMotionWithTouches:(id)a0 polygon:(id)a1;
- (struct CGPoint { double x0; double x1; })translationWithoutConsideringScaleInView:(id)a0;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
