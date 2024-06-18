@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {
    UITextFieldBackgroundView *_systemBackgroundView;
}

+ (id)systemStyleMetricsProvider;

- (void)_buildDescription:(id)a0;
- (void)removeFromTextField;
- (long long)associatedBorderStyle;
- (id)overridingGetBackgroundColor;
- (void)setProgress:(double)a0;
- (void)addToTextField:(id)a0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)preferredMetricsProvider;
- (id)overridingSetBackgroundColor:(id)a0;
- (Class)systemBackgroundViewClass;
- (void)enabledDidChangeAnimated:(BOOL)a0;

@end
