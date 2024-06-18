@class _UILegibilitySettings, NSString, SBUILegibilityLabel, UIView, NSLayoutConstraint, SBFDateTimeController;
@protocol SBFDateProviding;

@interface SBHDateHeaderViewController : UIViewController <SBFDateTimeOverrideObserver, SBHLegibility> {
    id _timerToken;
    unsigned long long _updateDisabledCount;
}

@property (readonly, nonatomic) SBUILegibilityLabel *timeLabel;
@property (readonly, nonatomic) SBUILegibilityLabel *dateLabel;
@property (readonly, nonatomic) UIView *timeContainer;
@property (readonly, nonatomic) SBFDateTimeController *dateTimeController;
@property (readonly, nonatomic) NSLayoutConstraint *timeLeadingConstraint;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (struct { double x0; double x1; double x2; double x3; })timeFontMetrics;
+ (id)timeFont;
+ (id)dateFont;
+ (struct { double x0; double x1; double x2; double x3; })dateFontMetrics;
+ (double)_topMarginFromTimeFont;

- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void)loadView;
- (void)_stopUpdateTimer;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_handleTimeZoneChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_timeLabelInsetsForTimeString:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_startUpdateTimer;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cachedGlyphInsetsTimeFontForString:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateLabels;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateFormat;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)_updateTimeLeadingConstraint;

@end
