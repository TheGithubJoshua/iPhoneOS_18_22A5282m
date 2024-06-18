@class UIView;

@interface UIAccessibilityMathNavigationBar : UINavigationBar {
    UIView *_titleView;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_popNavigationItemWithTransition:(int)a0;
- (void)_pushNavigationItem:(id)a0 transition:(int)a1;
- (BOOL)accessibilityPerformEscape;

@end