@class CDComplicationHostingView;

@interface NTKRichComplicationCornerTextSwiftUIView : CDRichComplicationCornerTextCustomView {
    CDComplicationHostingView *_swiftUIView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)setPaused:(BOOL)a0;
- (id)_outerView;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
