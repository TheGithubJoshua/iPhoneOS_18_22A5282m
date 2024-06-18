@class UITouch;
@protocol _UIControlEventsGestureRecognizerDelegate;

@interface _UIControlEventsGestureRecognizer : UIGestureRecognizer {
    struct { unsigned char touchInside : 1; unsigned char touchDragged : 1; unsigned char deliveredCancel : 1; } _flags;
}

@property (readonly, nonatomic) UITouch *activeTouch;
@property (weak, nonatomic) id<_UIControlEventsGestureRecognizerDelegate> controlEventsDelegate;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)gestureRecognizerFailed;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)sendControlEvent:(unsigned long long)a0 withEvent:(id)a1;

@end
