@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled;

- (id)initWithRequest:(id)a0;
- (BOOL)isTransparent;
- (id)init;
- (BOOL)shouldUseVisualAltitude;
- (id)backgroundImageName;
- (id)newForegroundStyleWithHeight:(double)a0;
- (BOOL)isTranslucent;
- (BOOL)shouldProduceReturnEvent;
- (long long)idiom;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)isLockScreen;
- (BOOL)isDoubleHeight;
- (long long)tapButtonType;
- (long long)legibilityStyle;
- (void).cxx_destruct;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)style;
- (double)heightForOrientation:(long long)a0;
- (double)heightForMetrics:(long long)a0;
- (double)foregroundAlpha;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (void)setForegroundAlpha:(double)a0;
- (BOOL)supportsRasterization;
- (BOOL)usesVerticalLayout;

@end
