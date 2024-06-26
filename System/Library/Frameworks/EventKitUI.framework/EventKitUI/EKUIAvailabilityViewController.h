@class UIBarButtonItem, NSDate, EKUIResizingDateLabel, _UINavigationBarPalette, NSMutableArray, UIButton, UIView, EKUIAvailabilityFreeSpanView, EKEvent, EKUIAvailabilityTitleContainerView, UIScrollView, NSLayoutConstraint, EKUIAvailabilityTimelineView, EKUIAvailabilityParticipantList, NSArray, NSOperationQueue, NSString;

@interface EKUIAvailabilityViewController : EKEditItemViewController <UIScrollViewDelegate>

@property (retain) EKEvent *event;
@property (retain, nonatomic) EKUIAvailabilityParticipantList *participantList;
@property (retain, nonatomic) NSMutableArray *participantAvailabilityViews;
@property (retain, nonatomic) NSMutableArray *freeSpanViews;
@property (retain, nonatomic) NSArray *participants;
@property (retain) NSDate *currentStartDate;
@property (retain) EKUIAvailabilityTitleContainerView *titleContainer;
@property (retain) UIView *largeDateNavContainer;
@property (retain) UIView *dateNavContainer;
@property (retain) EKUIResizingDateLabel *weekdayLabel;
@property (retain) EKUIResizingDateLabel *largeWeekdayLabel;
@property (retain) UIButton *previousButton;
@property (retain) UIButton *nextButton;
@property (retain) UIView *participantDivider;
@property (retain) UIBarButtonItem *topNextTime;
@property (retain) UIBarButtonItem *bottomNextTime;
@property (retain) UIBarButtonItem *topSpacer;
@property (retain) UIBarButtonItem *topSpinner;
@property (retain) UIBarButtonItem *bottomSpinner;
@property (retain) UIBarButtonItem *doneButton;
@property BOOL searchingForNextAvailableTime;
@property BOOL fetchingData;
@property BOOL compact;
@property (retain) UIScrollView *scrollView;
@property (retain) EKUIAvailabilityTimelineView *timelineView;
@property (retain) EKUIAvailabilityFreeSpanView *eventTime;
@property double availableWidth;
@property double pinchStartWidth;
@property double pinchStartRatio;
@property double rowHeight;
@property (retain) NSMutableArray *hourLines;
@property (retain) NSLayoutConstraint *participantWidthConstraint;
@property (retain) NSLayoutConstraint *timelineHeightConstraint;
@property (retain) NSLayoutConstraint *largeNavLeadingConstraint;
@property (retain) NSMutableArray *titleConstraints;
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue;
@property (retain) _UINavigationBarPalette *palette;
@property (copy) id /* block */ saveBlock;
@property BOOL fromDetail;
@property (retain) NSDate *modifiedStartDate;
@property (retain) NSDate *modifiedEndDate;
@property (retain) NSArray *busyParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cancelNextTimeString;
+ (double)defaultTimelineHeight;
+ (id)nextTimeString;
+ (id)presentAvailabilityViewControllerForEvent:(id)a0 fromViewController:(id)a1 editDelegate:(id)a2;

- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)setDate:(id)a0;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)layout;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)doneTapped:(id)a0;
- (void)cancelTapped:(id)a0;
- (void)clearFreeSpanViews;
- (void)configureNavBarAndToolBar;
- (void)configureParticipants;
- (void)contentCategorySizeChanged:(id)a0;
- (double)convertDateIntoOffset:(id)a0;
- (id)dedupSpans:(id)a0;
- (id)eventFreeSpanAtStart:(id)a0 endDate:(id)a1 isFreeSpan:(BOOL)a2;
- (void)fetchAvailability;
- (void)findNextFreeSpan;
- (void)findPossibleEventRanges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFreeSpanViewAtStart:(id)a0 endDate:(id)a1 duration:(double)a2;
- (id)mergeSpan:(id)a0 intoSpans:(id)a1;
- (void)nextAvailableTimeTapped:(id)a0;
- (void)nextDayTapped:(id)a0;
- (void)previousDayTapped:(id)a0;
- (void)singleTap:(id)a0;
- (void)sizeWillBeCompact:(BOOL)a0;
- (BOOL)span:(id)a0 overlapsWithDate:(id)a1;
- (BOOL)span:(id)a0 overlapsWithStartDate:(id)a1 endDate:(id)a2;
- (double)timelineWidth;
- (BOOL)updateCurrentEventAtTime:(id)a0;
- (void)updateForContentCategory;
- (void)viewPinched:(id)a0;

@end
