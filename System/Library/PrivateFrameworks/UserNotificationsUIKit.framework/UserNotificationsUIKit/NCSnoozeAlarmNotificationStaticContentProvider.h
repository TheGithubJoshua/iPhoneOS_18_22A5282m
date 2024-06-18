@class NSTimer, NSString, NCNotificationViewController;

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider <_UIAlwaysOnEnvironmentObserver, NCNotificationViewControllerObserving>

@property (nonatomic) double fireTime;
@property (retain, nonatomic) NSTimer *tickTimer;
@property (copy, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NCNotificationViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateWithFrameSpecifier:(id)a0 completion:(id /* block */)a1;
- (id)date;
- (id)_timelinesForDateInterval:(id)a0;
- (void).cxx_destruct;
- (void)_beginObservingAlwaysOnEnvironment;
- (id)_formatDuration:(double)a0 includeSeconds:(BOOL)a1;
- (BOOL)_hasOneMinuteOrLessRemainingForTime:(double)a0;
- (double)_remainingDurationForTime:(double)a0;
- (id)_secondaryTextForTime:(double)a0;
- (void)_tickTimerFired:(id)a0;
- (void)_updateContentForTime:(double)a0;
- (void)dealloc;
- (id)title;
- (void)invalidateTimer;
- (id)initWithNotificationRequest:(id)a0 viewController:(id)a1;
- (void)notificationViewControllerViewDidMoveToWindow:(id)a0;
- (void)_updateWithFrameSpecifier:(id)a0;
- (void)notificationViewControllerWillDismiss:(id)a0;
- (void)_timelinesForDateInterval:(id)a0 completion:(id /* block */)a1;

@end
