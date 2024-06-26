@class UITouch, NSString, _UITouchesObservingGestureRecognizer, UIView;

@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double touchForce;

- (void)cancelInteraction;
- (id)initWithView:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleTouchObservingGestureRecognizer:(id)a0;

@end
