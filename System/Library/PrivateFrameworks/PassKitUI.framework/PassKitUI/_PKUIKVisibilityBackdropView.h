@protocol _PKUIKVisibilityBackdropViewDelegate;

@interface _PKUIKVisibilityBackdropView : _UIBackdropView {
    double _visibility;
    double _visibilityAnimationTarget;
    unsigned int _animationCounter;
    unsigned int _styleToken;
    BOOL _updatingBackdropSettings;
    long long _style;
}

@property (weak, nonatomic) id<_PKUIKVisibilityBackdropViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 privateStyle:(long long)a1;
- (void)pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (void)_pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (void)pkui_updateBackdropSettings;
- (void)pkui_accessibilitySettingsDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateStyleIfNecessary;
- (void).cxx_destruct;
- (double)pkui_visibility;
- (long long)pkui_preferredBackdropStyle;
- (void)pkui_commitBackdropSettings;
- (void)dealloc;

@end
