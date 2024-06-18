@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

@property (nonatomic) long long renderMode;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)isTransparentFocusItem;
- (void)applyRequestedFilterEffects;
- (void)removeFromCurrentCaptureGroup;
- (void).cxx_destruct;
- (void)applyIdentityFilterEffects;
- (void)willMoveToWindow:(id)a0;
- (void)_applyScaleHintAsRequested:(BOOL)a0;

@end
