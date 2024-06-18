@class UIView, EKEvent, NSString, NSArray, NSDate, CalendarModel, EKDayView, UIViewController;
@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    BOOL _firstshow;
    BOOL _userHasTappedToExpand;
    BOOL _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    BOOL _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CalendarModel *_model;
    BOOL _hasOverriddenStatus;
    BOOL _requireScrollPositionCorrection;
}

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (nonatomic) BOOL hidesAllDayEvents;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter;
@property (nonatomic) long long overriddenParticipantStatus;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void)reload;
- (id)dayView:(id)a0 eventsForStartDate:(id)a1 endDate:(id)a2;
- (void)_setupDayView;
- (id)_dateForFirstHourMarker;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)_hourMaskForEvents:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_eventsForStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_eventOccursOnThisDay:(id)a0;
- (BOOL)_shouldShowAllVisibleEvents;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)reloadWithNewDate:(id)a0 overriddenEventStartDate:(id)a1 overriddenEventEndDate:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_displayedHoursRange;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3 model:(id)a4;
- (double)_dayViewHeight;
- (void)toggleExpandedState;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setNewVisibleHourLabels;
- (id)_selectedCalendars;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_anchorEvent;
- (void)renderPressHighlight:(BOOL)a0;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (void)_setupAutoLayout;

@end
