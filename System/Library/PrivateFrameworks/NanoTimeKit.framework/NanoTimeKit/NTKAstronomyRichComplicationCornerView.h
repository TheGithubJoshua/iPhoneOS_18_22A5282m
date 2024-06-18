@class NTKAstronomyRichComplicationContentView;

@interface NTKAstronomyRichComplicationCornerView : CDRichComplicationCornerTextCustomView {
    NTKAstronomyRichComplicationContentView *_astronomyContentView;
}

- (void)setEditing:(BOOL)a0;
- (void).cxx_destruct;
- (id)_outerView;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_updateInnerLabel;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
