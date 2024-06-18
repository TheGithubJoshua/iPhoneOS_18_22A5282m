@interface _UIPointerEffectTintView : UIVisualEffectView <_UILumaTrackingBackdropViewDelegate> {
    unsigned long long _luminance;
    id /* block */ _tintColorMatrixProvider;
}

@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void)_updateAlpha;
- (void).cxx_destruct;
- (void)backgroundLumaView:(id)a0 didTransitionToLevel:(unsigned long long)a1;
- (void)_updateBackgroundEffects;
- (id)initWithTintColorMatrixProvider:(id /* block */)a0;

@end
