@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {
    SEL m_action;
    double m_delay;
    NSTimer *m_timer;
    NSString *m_runLoopMode;
}

@property (readonly) NSDate *_startDate;
@property (readonly) BOOL _canceled;
@property (retain) id target;
@property (retain) id userInfo;

- (void)touch;
- (void)timerFired:(id)a0;
- (id)init;
- (double)delay;
- (void)cancel;
- (void).cxx_destruct;
- (void)unschedule;
- (BOOL)scheduled;
- (void)dealloc;
- (void)touchWithDelay:(double)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1 userInfo:(id)a2 delay:(double)a3;
- (id)initWithTarget:(id)a0 action:(SEL)a1 userInfo:(id)a2 delay:(double)a3 mode:(id)a4;

@end
