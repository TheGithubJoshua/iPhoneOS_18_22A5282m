@class UILabel, UIVisualEffectView, REAccessoryDescription;

@interface REUpNextAccessoryView : UIView {
    REAccessoryDescription *_accessoryDescription;
    UILabel *_label;
    UIVisualEffectView *_labelEffectView;
}

+ (void)initialize;

- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextColor:(id)a0;
- (void).cxx_destruct;
- (void)configureWithDescription:(id)a0;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
