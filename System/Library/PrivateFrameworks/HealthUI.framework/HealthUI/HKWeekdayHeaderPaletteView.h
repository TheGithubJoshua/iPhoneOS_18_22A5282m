@class NSMutableArray;

@interface HKWeekdayHeaderPaletteView : UIView {
    NSMutableArray *_weekdayLabels;
}

+ (double)preferredHeight;
+ (id)weekdayFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldSupportRTL:(BOOL)a1;
- (double)_xOriginForMonthViewWithIndex:(long long)a0 itemWidth:(double)a1 leftMargin:(double)a2;

@end
