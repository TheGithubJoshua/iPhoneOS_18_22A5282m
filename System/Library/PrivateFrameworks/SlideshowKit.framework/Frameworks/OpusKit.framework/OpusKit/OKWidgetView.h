@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy {
    OKRoundProgressView *_roundProgressView;
}

- (BOOL)isActivityIndicatorVisible;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)commonInit;
- (void)dealloc;
- (void)updateProgressIndicator:(double)a0;
- (void)setActivityIndicatorVisible:(BOOL)a0;
- (BOOL)_canRespondToEventWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)downloadIndicatorEnabled;

@end
