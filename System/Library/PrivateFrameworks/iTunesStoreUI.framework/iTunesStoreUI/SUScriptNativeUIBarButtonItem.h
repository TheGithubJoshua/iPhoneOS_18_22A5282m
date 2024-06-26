@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
    BOOL _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)a0;

- (void)setLoading:(BOOL)a0;
- (BOOL)isLoading;
- (long long)tag;
- (id)image;
- (void)setTag:(long long)a0;
- (int)buttonType;
- (void)setImage:(id)a0;
- (BOOL)isBackButton;
- (id)title;
- (void)setTitle:(id)a0;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (id)styleString;
- (BOOL)isShowingConfirmation;
- (void)connectButtonAction;
- (void)destroyNativeObject;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)a0;
- (void)setStyleFromString:(id)a0;
- (void)setupNativeObject;
- (void)showConfirmationWithTitle:(id)a0 animated:(BOOL)a1;
- (id)systemItemString;

@end
