@class UIColor, SSChromePlaceholderView;

@interface SSChromePlaceholderViewController : UIViewController {
    SSChromePlaceholderView *_placeholderView;
}

@property (nonatomic) double contentAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenshotContentFrame;
@property (readonly, nonatomic) long long backgroundBlurEffectStyle;
@property (readonly, nonatomic) double cropsCornerContentPadding;
@property (readonly, nonatomic) double cropsCornerEdgeLength;
@property (readonly, nonatomic) double cropsCornerLineWidth;
@property (readonly, nonatomic) UIColor *cropsCornerColor;

- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (int)_preferredStatusBarVisibility;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
