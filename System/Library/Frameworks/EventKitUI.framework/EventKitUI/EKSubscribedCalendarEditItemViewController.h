@class EKAbstractCalendarEditor, EKCalendar;

@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar *_calendar;
    EKAbstractCalendarEditor *_calendarEditor;
}

- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (void)save;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 calendar:(id)a1;

@end
