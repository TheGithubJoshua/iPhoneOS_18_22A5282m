@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette

@property (readonly, nonatomic) UIView *viewForAsymmetricFade;
@property (nonatomic) BOOL ignoreGeometryChanges;
@property (copy, nonatomic) id /* block */ resetAfterSearchFieldFade;
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar;
@property (nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldUpdateBackground;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (BOOL)_supportsSpecialSearchBarTransitions;
- (void)_pushDisableLayoutFlushingForTransition;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateLayoutForCurrentConfiguration;
- (void)_popDisableLayoutFlushingForTransition;
- (id)_initWithNavigationController:(id)a0 forEdge:(unsigned long long)a1;
- (void)_propagateBackgroundToContents;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
