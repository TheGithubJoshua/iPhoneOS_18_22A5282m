@interface _UIContentUnavailableWrapperScrollView : UIScrollView {
    BOOL _hasFlashedScrollIndicators;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void)_windowDidRotate:(id)a0;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)flashScrollIndicatorsIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)_effectiveBoundingPathAndBoundingPathView:(id *)a0;
- (id)_parentScrollView;

@end
