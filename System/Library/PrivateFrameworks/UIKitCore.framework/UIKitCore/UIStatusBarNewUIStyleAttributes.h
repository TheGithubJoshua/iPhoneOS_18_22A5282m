@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}

- (id)foregroundColor;
- (id)initWithRequest:(id)a0;
- (BOOL)isTransparent;
- (BOOL)shouldUseVisualAltitude;
- (id)newForegroundStyleWithHeight:(double)a0;
- (BOOL)isTranslucent;
- (id)backgroundColorWithTintColor:(id)a0;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2;
- (Class)foregroundStyleClass;
- (long long)legibilityStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2 hasBusyBackground:(BOOL)a3;

@end
