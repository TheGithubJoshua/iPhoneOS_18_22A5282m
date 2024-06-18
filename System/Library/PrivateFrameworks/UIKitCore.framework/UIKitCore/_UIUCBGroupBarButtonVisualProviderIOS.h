@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIColor *_tintColor;
}

@property (nonatomic) BOOL lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (void)setTintColor:(id)a0;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (id)tintColor;
- (BOOL)shouldLift;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (long long)_securePasteButtonSite;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageSymbolConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;

@end
