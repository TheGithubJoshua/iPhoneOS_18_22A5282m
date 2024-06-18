@class NSArray;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    unsigned long long _action;
}

@property (copy, nonatomic) NSArray *timers;
@property (copy, nonatomic) NSArray *templateActions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timer;
- (id)_initWithTimer:(id)a0 action:(unsigned long long)a1;
- (id)_initWithTimers:(id)a0 action:(unsigned long long)a1;
- (id)_initWithTimers:(id)a0 templateActions:(id)a1 timerAction:(unsigned long long)a2;

@end
