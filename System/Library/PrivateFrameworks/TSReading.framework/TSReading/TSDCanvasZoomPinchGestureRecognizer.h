@interface TSDCanvasZoomPinchGestureRecognizer : UIPinchGestureRecognizer {
    BOOL mZoomTimedOut;
}

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)p_cancelAfterDelay;
- (void)p_startCancellationTimer;
- (void)p_stopCancellationTimer;

@end
