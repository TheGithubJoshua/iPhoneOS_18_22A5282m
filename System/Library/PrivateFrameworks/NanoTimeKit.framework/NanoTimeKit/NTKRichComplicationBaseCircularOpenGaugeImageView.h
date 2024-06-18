@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView

@property (retain, nonatomic) NTKRichComplicationImageView *bottomImageView;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)bottomView;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
