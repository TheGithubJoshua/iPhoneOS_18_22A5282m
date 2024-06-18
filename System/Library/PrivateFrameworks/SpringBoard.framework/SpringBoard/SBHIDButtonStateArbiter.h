@class BSAbsoluteMachTimer;
@protocol SBHIDButtonStateDelegate;

@interface SBHIDButtonStateArbiter : NSObject {
    BSAbsoluteMachTimer *_longPressTimer;
    unsigned long long _downEventSenderID;
    unsigned long long _downTime;
    double _longPressTimeoutAtDownEvent;
}

@property (readonly, nonatomic, getter=isLongPressDisabled) BOOL longPressDisabled;
@property (nonatomic) double longPressTimeout;
@property (readonly, nonatomic) long long pressSequence;
@property (weak, nonatomic) id<SBHIDButtonStateDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)processEvent:(struct __IOHIDEvent { } *)a0;
- (void)_invalidateLongPressTimer;
- (void)_longPressTimeoutDidOccur;
- (void)_startLongPressTimerWithTimeout:(double)a0;

@end
