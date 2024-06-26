@class UIButton, NSString, NSDateFormatter, UIImageView, UIView, _UIDatePickerLinkedLabel, _UICalendarDataModel;
@protocol _UICalendarHeaderViewDelegate;

@interface _UICalendarHeaderView : UIView <UIPointerInteractionDelegate> {
    NSDateFormatter *_longFormatter;
    NSDateFormatter *_shortFormatter;
    UIView *_monthYearContainer;
    _UIDatePickerLinkedLabel *_monthYearLabel;
    UIImageView *_chevron;
    UIButton *_previousMonthButton;
    UIButton *_nextMonthButton;
}

@property (weak, nonatomic) id<_UICalendarHeaderViewDelegate> delegate;
@property (retain, nonatomic) _UICalendarDataModel *dataModel;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExpanded:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithDataModel:(id)a0;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_didTap:(id)a0;
- (void)layoutSubviews;
- (void)_updateFont;
- (void)tintColorDidChange;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didUpdateLocale;
- (void)_adjustMonth:(id)a0;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_updateMonthButtonEnablement;
- (void)_updateMonthButtonVisibility;
- (void)_updateMonthYearLabel;
- (void)didUpdateCalendar;
- (void)didUpdateDateRange;
- (void)didUpdateFontDesign;
- (void)didUpdateTimeZone;
- (void)didUpdateVisibleMonth;

@end
