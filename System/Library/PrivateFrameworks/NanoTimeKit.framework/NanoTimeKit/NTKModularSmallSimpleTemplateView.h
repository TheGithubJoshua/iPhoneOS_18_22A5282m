@class CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
    UIView<CDComplicationImageView> *_imageView;
    CLKUIColoringLabel *_label;
    long long _maxDynamicFontSize;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (id)supportedTemplateClasses;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_layoutContentView;
- (void)_update;
- (void)_configureWithImageTemplate:(id)a0;
- (void)_configureWithTextTemplate:(id)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (double)_maxTextWidthForDynamicFontSize:(long long)a0;

@end
