@class TLKLabel, UIView;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithProminence:(unsigned long long)a0;
- (BOOL)allowsVibrancy;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)updateFont;

@end
