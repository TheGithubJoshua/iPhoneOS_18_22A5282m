@class SKUIColorScheme, NSString, NSArray, SKUISegmentedControl;

@interface SKUIPillsControl : UIControl {
    SKUISegmentedControl *_segmentedControl;
}

@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) long long maximumNumberOfVisiblePills;
@property (copy, nonatomic) NSString *moreListTitle;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectedPillFrame;
@property (copy, nonatomic) NSArray *titles;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_segmentedControlAction:(id)a0;
- (void)reloadPills;

@end
