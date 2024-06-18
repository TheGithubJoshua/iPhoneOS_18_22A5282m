@class NSString, _UIFloatingContentView;

@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider <_UIFloatingContentViewDelegate> {
    _UIFloatingContentView *_floatingContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanupForVisualProvider:(id)a0;
- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)effectiveContentView;
- (void)_updateContentBackdropView;
- (id)_floatingContentView;
- (void)setSelected:(BOOL)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_layoutFloatingContentView;
- (void)_updateBackgroundViewWithConfiguration:(id)a0;
- (void)layoutSubviews;

@end
