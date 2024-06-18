@interface DBNowPlayingFocusHighlightButton : CPUIMediaButton

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)canShowHighlight;
- (id)colorForKnobFocusLayer;
- (BOOL)shouldUpdateButtonOpacityForKnobUnfocused;

@end
