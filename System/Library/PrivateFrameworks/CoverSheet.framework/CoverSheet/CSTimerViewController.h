@class NSString, NSTimer, NSDate, MTTimerManager;
@protocol CSTimerViewControllerDelegate;

@interface CSTimerViewController : CSCoverSheetViewControllerBase {
    NSTimer *_updateTimer;
    NSDate *_endDate;
    MTTimerManager *_timerManager;
}

@property (weak, nonatomic) id<CSTimerViewControllerDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSString *timerText;

- (BOOL)isTimerActive;
- (void)loadView;
- (BOOL)isEndDateValid;
- (void)_nextTimerChanged:(id)a0;
- (void)setEndDate:(id)a0;
- (void)_startTimer;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateNextTimer;
- (void)_stopTimerNotifyingDelegate:(BOOL)a0;
- (void).cxx_destruct;
- (void)_stopTimer;
- (void)_updateTimerFired;
- (void)dealloc;
- (void)_updateTimerLabelView;
- (id)timerView;

@end
