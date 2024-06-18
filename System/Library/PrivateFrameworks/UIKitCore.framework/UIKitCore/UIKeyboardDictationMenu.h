@interface UIKeyboardDictationMenu : UIKeyboardMenuView

+ (id)activeInstance;
+ (id)sharedInstance;

- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)usesDimmingView;
- (BOOL)centerPopUpOverKey;
- (void)cleanupForFadeOrHide;
- (void)fade;
- (void)fadeWithDelay:(double)a0;
- (void)performShowAnimation;
- (struct CGSize { double x0; double x1; })preferredSize;
- (BOOL)usesTable;
- (void)willShow;

@end
