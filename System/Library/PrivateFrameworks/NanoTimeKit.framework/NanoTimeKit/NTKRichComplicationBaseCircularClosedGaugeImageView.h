@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *imageView;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)gaugeProviderFromTemplate:(id)a0;
- (id)innerView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
