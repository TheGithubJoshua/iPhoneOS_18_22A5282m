@class SearchUISeparatorView;

@interface SPUINavigationBar : UINavigationBar

@property (retain) SearchUISeparatorView *topDividerView;

- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (BOOL)isLocked;
- (void)performShowSeparator:(BOOL)a0 animated:(BOOL)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void)showSeparator:(BOOL)a0 animated:(BOOL)a1;
- (void)updateBackgroundViewVisibility;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)didAddSubview:(id)a0;
- (id)_popNavigationItemWithTransition:(int)a0;
- (void)_dynamicUserInterfaceTraitDidChange;

@end
