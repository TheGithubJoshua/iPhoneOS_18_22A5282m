@class UIMenu, UITableViewCell, EKCalendar;

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    UITableViewCell *_cell;
    UIMenu *_popupMenu;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (void)_contentSizeCategoryChanged:(id)a0;
- (id)init;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;
- (BOOL)_calendarCanBeChanged;
- (BOOL)eventViewController:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (id)eligibleCalendars;
- (BOOL)_shouldAllowViewingDetailsForCalendar:(id)a0;
- (id)popupMenu:(id)a0;
- (void).cxx_destruct;
- (BOOL)minimalMode;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)dealloc;
- (void)reset;

@end
