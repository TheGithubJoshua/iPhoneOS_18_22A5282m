@class UIColor, UIView;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    UIView *_selectionBackgroundView;
}

@property (retain, nonatomic) UIColor *selectionBackgroundTintColor;
@property (retain, nonatomic) UIColor *selectionTintColor;

- (id)init;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (unsigned long long)hash;
- (long long)_securePasteButtonSite;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;

@end
