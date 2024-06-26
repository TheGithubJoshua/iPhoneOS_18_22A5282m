@class NSString, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface PXUISlowMotionEditor : PXSlowMotionEditor <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSnappingControllerWithSnappingTarget:(double)a0;
+ (id)handleImage;

- (id)init;
- (void)_handlePan:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleTap:(id)a0;
- (void)_PXUISlowMotionEditor_commonInit;
- (void)_handleBeginPanGesture:(id)a0;
- (void)_handleChangePanGesture:(id)a0;
- (void)_handleEndPanGesture:(id)a0;
- (void)impactOccured;
- (void)prepareForImpact;

@end
