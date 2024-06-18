@class HKDateCache, HKCalendarDayCell, NSDate, UIView, NSMutableArray;
@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;

@interface HKCalendarWeekView : UIView

@property (retain, nonatomic) UIView<HKCalendarMonthTitleFormatting> *monthTitleView;
@property (nonatomic) double dateTopMargin;
@property (nonatomic) double dateBottomMargin;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double monthTitleTopMargin;
@property (nonatomic) double monthTitleBottomMargin;
@property (nonatomic) double dateDiameter;
@property (nonatomic) double additionalSpacingPerRow;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (copy, nonatomic) NSDate *monthWeekStart;
@property (weak, nonatomic) id<HKCalendarWeekViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSMutableArray *dayCells;
@property (nonatomic) long long firstDayOfMonthCellIndex;
@property (nonatomic) long long pressedDayOfWeek;
@property (retain, nonatomic) HKCalendarDayCell *pressedDayCell;

- (double)preferredHeight;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)containsDate:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)supportsRTL;
- (id)initWithDateCache:(id)a0;
- (void)pressedOnCalendarDay:(long long)a0 cell:(id)a1 down:(BOOL)a2;
- (Class)monthTitleClass;
- (id)_getDayCellWithTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_getDayCellWithTouches:(id)a0;
- (BOOL)containsMonthTitle;
- (id)currentWeekStartDate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDayCell:(id)a0;
- (id)nextWeekStartDate;
- (id)previousWeekStartDate;
- (void)reloadCells;
- (void)selectedCalendarDay:(id)a0;

@end
