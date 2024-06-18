@class _UILegibilitySettings, NSString, SBAlwaysOnDefaults, CSProminentDisplayViewController, UIViewController;
@protocol BSDefaultObserver, SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver> {
    id _timerToken;
    BOOL _isVisible;
    id _minuteHandlerToken;
    BOOL _disablesUpdates;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    id<BSDefaultObserver> _alwaysOnDefaultsObserver;
    CSProminentDisplayViewController *_prominentDisplayViewController;
}

@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) UIViewController *inlineComplicationViewController;
@property (retain, nonatomic) UIViewController *complicationContainerViewController;
@property (nonatomic) BOOL screenOff;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;
@property (nonatomic) BOOL restrictsVibrancy;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)_stopUpdateTimer;
- (void)_updateAlternateCalendar;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_addObservers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_handleTimeZoneChange;
- (void)setTimeAlpha:(double)a0 subtitleAlpha:(double)a1;
- (void)_updateLegibilityStrength;
- (void)_updateView;
- (void)_updateState;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_startUpdateTimer;
- (void)setCustomSubtitle:(id)a0 withTimeout:(double)a1;
- (id)_timelinesForDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)dateView;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)setTimerWithText:(id)a0;
- (void)setDateTimeAlignment:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (void)setView:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_updateFormatIfEnabled;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateFormat;
- (void)setCustomSubtitleView:(id)a0;
- (void)updateTimerWithText:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)setCustomSubtitle:(id)a0;
- (id)dateViewIfExists;
- (void)_updateWithFrameSpecifier:(id)a0;
- (void)updateTimeNow;

@end
