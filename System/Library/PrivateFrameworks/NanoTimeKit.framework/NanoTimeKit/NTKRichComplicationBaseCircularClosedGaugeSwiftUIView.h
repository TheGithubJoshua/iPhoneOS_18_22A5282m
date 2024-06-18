@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularClosedGaugeSwiftUIView : NTKRichComplicationCircularClosedGaugeContentView {
    CDComplicationHostingView *_swiftUIView;
}

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)gaugeProviderFromTemplate:(id)a0;
- (id)innerView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
